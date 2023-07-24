cmake_minimum_required(VERSION 3.0.0)
project(WiiModder VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(wxWidgets_DIR ${CMAKE_SOURCE_DIR}/lib/wxwidgets/lib)

find_package(wxWidgets CONFIG REQUIRED)
include(${wxWidgets_USE_FILE})

add_executable(WiiModder WIN32 src/main.cpp)

target_link_libraries(WiiModder ${wxWidgets_LIBRARIES})

target_include_directories(WiiModder PUBLIC ${wxWidgets_INCLUDE_DIRS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)