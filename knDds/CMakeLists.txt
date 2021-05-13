## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( KNDDS_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" CACHE PATH "KNDDS install path")
add_definitions(-DKNDDS_INSTALL_PREFIX="${KNDDS_INSTALL_PREFIX}")


#add_build_var( WITH_DDS_LBPlugin TRUE )
#add_build_var( WITH_DDS_Monitor  TRUE )
#add_build_var( WITH_RTI_DistLogger TRUE )
#
#build_with_var( WITH_DDS          TRUE )
## TODO: change WITH_DDS_foo variables to WITH_RTI_foo
#build_with_var( WITH_DDS_LBPlugin RTIDDS_LB_FOUND )
#build_with_var( WITH_DDS_Monitor  RTIDDS_MON_FOUND )
#build_with_var( WITH_RTI_DistLogger RTIDDS_DLOGGER_FOUND )

## We must add the in-source and out-of-source
## include paths
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/knDds/src
  ${PROJECT_SOURCE_DIR}/kn/src
  ${PROJECT_BINARY_DIR}/knDds/src
)

message("INCLUDE ${RTIDDS_INCLUDE_DIR}")
include_directories(
  ${KN_INCLUDE_DIR}
  ${Boost_INCLUDE_DIR}
)

if( WIN32 )
link_directories( ${Boost_LIBRARY_DIRS} )
endif( WIN32 )

#-----------------------------------
add_subdirectory( src )
#add_subdirectory( doc )

setup_configure_file( knDds )
