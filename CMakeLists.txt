cmake_minimum_required (VERSION 3.8)
include(FetchContent)

project ("raylib_standalone_template")

# Add source files
add_executable (${PROJECT_NAME} "src/Main.cpp")

# Define CXX standard
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

# Setup include & link directories
target_link_directories(${PROJECT_NAME} PUBLIC lib)
target_include_directories(${PROJECT_NAME} PUBLIC "include/")

# Fetch dependencies
FetchContent_Declare(
	raylib
	GIT_REPOSITORY "https://github.com/raysan5/raylib/"
)

FetchContent_MakeAvailable(raylib)

# Link dependencies
target_link_libraries(${PROJECT_NAME} raylib)
