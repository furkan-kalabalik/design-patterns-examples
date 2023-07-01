cmake_minimum_required(VERSION 3.0.0)
project(design-patterns VERSION 0.1.0 LANGUAGES C CXX)
set(CXX_STANDARD 23)
include(CTest)
enable_testing()

add_subdirectory(factory)
add_subdirectory(abstract_factory)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
