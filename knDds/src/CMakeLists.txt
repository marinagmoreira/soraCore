# FIXME use add_subdirectory for rapidTools because build switches are 
# broken when a project does not have any libraries to export
set(KNDDS_HAS_DDS TRUE)

add_build_switch( knDds               KNDDS_HAS_DDS )
add_build_switch( knDdsUtil           KNDDS_HAS_DDS )
add_build_switch( knDdsTools          KNDDS_HAS_DDS )



