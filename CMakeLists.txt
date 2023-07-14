cmake_minimum_required(VERSION 2.8.3)

project(curro_paquete)
add_compile_options("$<$<COMPILE_LANGUAGE:C>:--std=c11>")
add_compile_options("$<$<COMPILE_LANGUAGE:C>:-Wall>")
add_compile_options("$<$<COMPILE_LANGUAGE:C>:-Wextra>")

include_directories( 
  include
)

# Create library
add_library(${PROJECT_NAME}_lib src/${PROJECT_NAME}.c)
target_link_libraries(${PROJECT_NAME}_lib ${SQLITECPP_LINK_LIBS})

# Create executable (node)
add_executable(${PROJECT_NAME}_node  src/${PROJECT_NAME}_node.c)
target_link_libraries(${PROJECT_NAME}_node ${PROJECT_NAME}_lib)
