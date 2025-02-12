
set(target "gtest_assert")
add_executable(${target} "")

target_sources( ${target}
    PRIVATE
        test_func.cpp
        ${CMAKE_SOURCE_DIR}/src/func.cpp
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src/func.hpp
    )

target_include_directories(${target}
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src
        )

target_link_libraries(
        ${target}
        GTest::gtest
        GTest::gmock_main
    )
# ---
    set(target "gtest_param")
    add_executable(${target} "")
    
    target_sources( ${target}
        PRIVATE
            test_param.cpp
            ${CMAKE_SOURCE_DIR}/src/func.cpp
        PUBLIC
            ${CMAKE_SOURCE_DIR}/src/func.hpp
        )
    
    target_include_directories(${target}
        PUBLIC
            ${CMAKE_SOURCE_DIR}/src
            )
    
    target_link_libraries(
            ${target}
            GTest::gtest
            GTest::gmock_main
        )
# ---
set(target "gtest_scoped")
add_executable(${target} "")

target_sources( ${target}
    PRIVATE
        test_scoped.cpp
        ${CMAKE_SOURCE_DIR}/src/func.cpp
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src/func.hpp
    )

target_include_directories(${target}
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src
        )

target_link_libraries(
        ${target}
        GTest::gtest
        GTest::gmock_main
    )

    # ---
set(target "gtest_matchers")
add_executable(${target} "")

target_sources( ${target}
    PRIVATE
        test_matchers.cpp
        ${CMAKE_SOURCE_DIR}/src/func.cpp
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src/func.hpp
    )

target_include_directories(${target}
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src
        )

target_link_libraries(
        ${target}
        GTest::gtest
        GTest::gmock_main
    )

# --

set(target "gtest_mock")
add_executable(${target} "")

target_sources( ${target}
    PRIVATE
        test_gmock.cpp
        # ${CMAKE_SOURCE_DIR}/src/func.cpp
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src/atm_machine.hpp
        ${CMAKE_SOURCE_DIR}/src/bankserver.hpp
        ${CMAKE_SOURCE_DIR}/src/bank_of_ari_server.hpp


    )

target_include_directories(${target}
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src
        )

target_link_libraries(
        ${target}
        GTest::gtest
        GTest::gmock_main
    )

# --
#gtest_discover_tests to let ctest know which test executables in its database
include(GoogleTest)

gtest_discover_tests(${target})
