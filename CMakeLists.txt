cmake_minimum_required(VERSION 3.9)
project (hellogitcmake)
add_executable(${PROJECT_NAME} hello.c)
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)