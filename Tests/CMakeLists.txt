project(Tests)

set(TEST_FILES
    gtest_main.cpp
        EmptyTest.cpp
        ReverserTest.cpp
        BoardTest.cpp
        XmlHelperTest.cpp
        PackagesTest.cpp
        ElementsTest.cpp SymbolsTest.cpp DeviceSetsTest.cpp PartsTest.cpp NetsTest.cpp)

# Get Google Tests
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Include Google Test directories
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# adding the Tests_run target
add_executable(Tests_run ${TEST_FILES})

# linking Tests_run with library which will be tested and wxWidgets
target_link_libraries(Tests_run ${APPLICATION_LIBRARY} ${wxWidgets_LIBRARIES} )

# linking Tests_run with the Google Test libraries
target_link_libraries(Tests_run gtest)

target_precompile_headers(Tests_run PRIVATE ../${APPLICATION_LIBRARY}/pch.h)

file(COPY test-data/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/test-data)
