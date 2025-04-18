cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    ex8
    VERSION 0.1.0
    DESCRIPTION "Short description"
    HOMEPAGE_URL "https://example.com/"
    LANGUAGES CXX
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Declare library ----

add_library(
    ex8_lib OBJECT
    source/lib.cpp
)

target_include_directories(
    ex8_lib ${warning_guard}
    PUBLIC
    "\$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/source>"
)

target_compile_features(ex8_lib PUBLIC cxx_std_17)

find_package(fmt REQUIRED)
target_link_libraries(ex8_lib PRIVATE fmt::fmt)

# ---- Declare executable ----

add_executable(ex8_exe source/main.cpp)
add_executable(ex8::exe ALIAS ex8_exe)

set_property(TARGET ex8_exe PROPERTY OUTPUT_NAME ex8)

target_compile_features(ex8_exe PRIVATE cxx_std_17)

target_link_libraries(ex8_exe PRIVATE ex8_lib)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Developer mode ----

if(NOT ex8_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of ex8"
  )
endif()

include(cmake/dev-mode.cmake)
