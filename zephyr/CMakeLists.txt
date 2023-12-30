if(CONFIG_CANARD)
    zephyr_include_directories({ZEPHYR_CURRENT_MODULE_DIR}/)
    zephyr_library()
endif()
