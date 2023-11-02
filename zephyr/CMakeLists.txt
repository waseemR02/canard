add_subdirectory(.. build)
set_property(GLOBAL APPEND PROPERTY ZEPHYR_INTERFACE_LIBS canard)
zephyr_include_directories(..)
