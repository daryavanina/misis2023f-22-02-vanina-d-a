cmake_minimum_required(VERSION 3.0)
project(json)

find_package(nlohmann_json CONFIG REQUIRED)
add_executable(json "json.cpp")

target_link_libraries(json PRIVATE nlohmann_json::nlohmann_json)
