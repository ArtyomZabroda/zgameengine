enable_testing()
find_package(GTest CONFIG REQUIRED)
add_executable(ecs_tests
        component_test.cpp)

set_property(TARGET ecs_tests PROPERTY CXX_STANDARD 20)

target_link_libraries(
        ecs_tests
        ecs
        GTest::gtest_main
        GTest::gtest
)



include(GoogleTest)
gtest_discover_tests(ecs_tests)