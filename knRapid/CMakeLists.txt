## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( RAPID_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" CACHE PATH "RAPID install path")
add_definitions(-DKNRAPID_INSTALL_PREFIX="${RAPID_INSTALL_PREFIX}")

## We must add the in-source and out-of-source
## include paths 
## Boost include path is also required everywhere
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/knRapid/src
  ${PROJECT_BINARY_DIR}/knRapid/src
  ${PROJECT_SOURCE_DIR}/kn/src
  ${PROJECT_BINARY_DIR}/kn/src
  ${PROJECT_SOURCE_DIR}/knDds/src
  ${PROJECT_BINARY_DIR}/knDds/src
  ${Boost_INCLUDE_DIR}
)

# Defaults
#-----------------------------------
link_libraries( ${CMAKE_THREAD_LIBS_INIT} )

if( WIN32 )
  link_directories( ${Boost_LIBRARY_DIRS} )
endif( WIN32 )

#-----------------------------------
add_subdirectory( etc )
add_subdirectory( src )

#add_build_switch( examples BUILD_DEFAULT_FALSE )

setup_configure_file( knRapid )
