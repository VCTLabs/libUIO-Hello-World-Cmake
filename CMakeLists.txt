cmake_minimum_required(VERSION 3.9)
project (
    hellogitcmake
    LANGUAGES C
    VERSION 0.1
)

find_package(PkgConfig REQUIRED)
pkg_check_modules(UIO REQUIRED IMPORTED_TARGET libuio)

add_executable(${PROJECT_NAME} hello.c)
target_link_libraries(${PROJECT_NAME} PUBLIC PkgConfig::UIO)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)
