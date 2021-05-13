## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( IRGUTIL_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" CACHE PATH "irgUtil install path")

## find the packages we depend on 

## add the in-source and out-of-source
## include paths 
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/irgUtil/src
  ${PROJECT_BINARY_DIR}/irgUtil/src
)

# Defaults
#-----------------------------------
add_subdirectory( src )

setup_configure_file( irgUtil )
