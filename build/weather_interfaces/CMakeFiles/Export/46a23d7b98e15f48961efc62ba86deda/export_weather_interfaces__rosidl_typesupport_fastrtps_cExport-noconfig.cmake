#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "weather_interfaces::weather_interfaces__rosidl_typesupport_fastrtps_c" for configuration ""
set_property(TARGET weather_interfaces::weather_interfaces__rosidl_typesupport_fastrtps_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(weather_interfaces::weather_interfaces__rosidl_typesupport_fastrtps_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libweather_interfaces__rosidl_typesupport_fastrtps_c.so"
  IMPORTED_SONAME_NOCONFIG "libweather_interfaces__rosidl_typesupport_fastrtps_c.so"
  )

list(APPEND _cmake_import_check_targets weather_interfaces::weather_interfaces__rosidl_typesupport_fastrtps_c )
list(APPEND _cmake_import_check_files_for_weather_interfaces::weather_interfaces__rosidl_typesupport_fastrtps_c "${_IMPORT_PREFIX}/lib/libweather_interfaces__rosidl_typesupport_fastrtps_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
