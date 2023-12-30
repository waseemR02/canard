if(CONFIG_CANARD)
    set(CANARD_DIR ${ZEPHYR_CURRENT_MODULE_DIR})
    zephyr_include_directories(${CANARD_DIR})
    zephyr_library()
    zephyr_library_sources(
        ${CANARD_DIR}/canard.c
        )
endif()
