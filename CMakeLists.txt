cmake_minimum_required(VERSION 3.5)

project(RogierTest)

if (MSVC)
  add_compile_options(/W4)
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(rtest test.cpp)
target_compile_features(rtest PRIVATE cxx_lambda_init_captures)


