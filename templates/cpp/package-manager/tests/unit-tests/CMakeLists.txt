
message(STATUS "Enable Tests")

find_package(GTest CONFIG REQUIRED)
# message(STATUS "GTest_FOUND: ${GTest_FOUND}")

add_executable(
    MyTest 
    run-tests.cpp
    sum-tests.cpp
)

target_link_libraries(MyTest PRIVATE MyLibrary GTest::gtest GTest::gtest_main)

target_include_directories(
    MyTest 
    PRIVATE 
        ${CMAKE_SOURCE_DIR}/include 
)

add_test(NAME MyTest COMMAND MyTest)
