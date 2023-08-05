cmake_minimum_required(VERSION 3.16)
project(Protobuffer)

set(CMAKE_VERBOSE_MAKEFILE OFF)

set(target ProtobufferTemplate)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS proto/ufc.proto)

add_executable(${PROJECT_NAME} src/main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(${PROJECT_NAME} PUBLIC protobuf::libprotobuf)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR})
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_11)
 

  