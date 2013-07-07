# CMake build script for the test-repository project

# Test repository project
PROJECT(test-repository)

# CMake minimum requirement version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# Executable
ADD_EXECUTABLE(test-repository linked-list.c)
ADD_EXECUTABLE(test-repository bubble-sort.c)
