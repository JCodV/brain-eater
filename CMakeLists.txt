cmake_minimum_required(VERSION 3.20)
project(civil-defense CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include(FetchContent)

# add source files
add_subdirectory(src)

# add headers
target_include_directories(${PROJECT_NAME} PUBLIC include)

# add libraries
FetchContent_Declare (
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    5.5
)

FetchContent_GetProperties(raylib)
if (NOT spdlog_POPULATED)
    FetchContent_MakeAvailable(raylib)
endif()

# link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

# copy assets folder to where exe is found
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})
