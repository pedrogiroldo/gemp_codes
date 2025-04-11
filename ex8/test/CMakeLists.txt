# Parent project does not export its library target, so this CML implicitly
# depends on being added from it, i.e. the testing is done only from the build
# tree and is not feasible from an install location

project(ex8Tests LANGUAGES CXX)

# ---- Dependencies ----

find_package(Catch2 REQUIRED)
include(Catch)

# ---- Tests ----

add_executable(ex8_test source/ex8_test.cpp)
target_link_libraries(
    ex8_test PRIVATE
    ex8_lib
    Catch2::Catch2WithMain
)
target_compile_features(ex8_test PRIVATE cxx_std_17)

catch_discover_tests(ex8_test)

# ---- End-of-file commands ----

add_folders(Test)
