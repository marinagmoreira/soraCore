project(soracore)
cmake_minimum_required(VERSION 2.8.3)

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/Modules ${CMAKE_MODULE_PATH} )

if( CMAKE_COMPILER_IS_GNUCXX )
  message( STATUS "****************************************************")
  message( STATUS "** Manually setting compiler flags to prevent")
  message( STATUS "** strict-aliasing warnings in DDS generated files")
  message( STATUS "****************************************************")
  set( WARN_FLAGS "-fno-strict-aliasing -Wall -Woverloaded-virtual -Wno-write-strings" )
 
  if( NOT SETUP_WARN_LEVEL_HAS_RUN )
    message( STATUS "** disable --as-needed because k10controller *wants* 'unecessary' shared libs to be linked **")
    set( CMAKE_EXE_LINKER_FLAGS    "-Wl,--no-as-needed" CACHE STRING "" FORCE )
  endif( NOT SETUP_WARN_LEVEL_HAS_RUN )
  
endif( CMAKE_COMPILER_IS_GNUCXX )

include (TestBigEndian)
include( SetArchitecture )
include( SetupBuildSwitch )
include( SetupConfigureFile )
include( SetupInstall )
include( SetupRPATH )
include( SetupUtilities )
include( SetupWarnLevel )
include( UserOptions )

## set variables for config file
test_big_endian(IRGUTIL_IS_BIG_ENDIAN)
if(NOT IRGUTIL_IS_BIG_ENDIAN)
  set(IRGUTIL_IS_LITTLE_ENDIAN TRUE)
endif(NOT IRGUTIL_IS_BIG_ENDIAN)


#---------------------------------------------
# make RTI DDS optional
find_package( RtiDds )
link_directories( ${RTIDDS_LIBRARY_DIR} )

find_package( ACE )
find_package( PThreads-win32 )

find_package( Boost 1.50.0 COMPONENTS program_options filesystem system thread chrono)
find_package( Eigen3 )
find_package( Threads )

find_package( Miro )

if( MIRO_BUILD_WITH_QT5 )
  message(STATUS "FOUND QT 5")
  find_package(Qt5Widgets REQUIRED)
  find_package(Qt5Xml REQUIRED)
  if (Qt5_POSITION_INDEPENDENT_CODE)
    SET(CMAKE_POSITION_INDEPENDENT_CODE ON)
  endif()
  include_directories(SYSTEM "${Qt5Widgets_INCLUDE_DIRS}")
  include_directories(SYSTEM "${Qt5Xml_INCLUDE_DIRS}")
else()
  message(STATUS "FOUND QT 4")
  find_package(Qt4 COMPONENTS QtCore QtGui REQUIRED)
  include(${QT_USE_FILE})
  include_directories(SYSTEM "${QT_INCLUDE_DIR}")
  include_directories(SYSTEM "${QT_QTXML_INCLUDE_DIR}")
  include_directories(SYSTEM "${QT_QTCORE_INCLUDE_DIR}")
endif()

build_with_var( WITH_DDS  RTIDDS_FOUND )

add_subdirectory(irgUtil)
add_subdirectory(kn)
add_subdirectory(knDds)
add_subdirectory(knRapid)

## Set up RPATH and *Config.h
## Call these after we've made all our 
## find_package calls
##--------------------------------------------
setup_rpath()

# install the export file
#------------------------------------
install_export()

#------------------------------------
print_build_switches()

