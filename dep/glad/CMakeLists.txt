add_library(glad STATIC "src/glad.c")

target_include_directories(glad PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(glad PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
