## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( KN_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" CACHE PATH "irg apps install path")

## We must add the in-source and out-of-source
## include paths 
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/kn/src
  ${PROJECT_BINARY_DIR}/kn/src
  ${PROJECT_BINARY_DIR}/irgUtil/src
)

# Defaults
#-----------------------------------
# everything needs to include boost headers, so set it
# up at the top level for convinience
##-----------------------------------------------
include_directories(
  ${Boost_INCLUDE_DIR}
)

#-----------------------------------
# everything needs to include ACE export macros, so set it
# up at the top level for convinience
##-----------------------------------------------
include_directories(
  ${ACE_INCLUDE_DIR}
)
link_libraries( 
  ${ACE_LIBRARIES}
)
if( WIN32 )
  link_directories( ${Boost_LIBRARY_DIRS} )
endif( WIN32 )


#-----------------------------------
add_subdirectory( src )

setup_configure_file( kn )
