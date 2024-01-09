cmake_minimum_required(VERSION 3.20)
project(lib VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCE_DIRS ${CMAKE_CURRENT_LIST_DIR}/lib/src/)
set(SOURCES ${SOURCE_DIRS}lib.cpp)

add_library(lib STATIC ${SOURCES})
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/lib/include)

set(ENABLE_TESTING TRUE)
if(ENABLE_TESTING)
	Include(FetchContent)
	FetchContent_Declare(
	  googletest
	  GIT_REPOSITORY https://github.com/google/googletest.git
	  GIT_TAG        v1.14.0
	)
	FetchContent_MakeAvailable(googletest)

	# For Windows: Prevent overriding the parent project's compiler/linker settings
	set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
	FetchContent_MakeAvailable(googletest)	
	add_subdirectory(tests)
endif()