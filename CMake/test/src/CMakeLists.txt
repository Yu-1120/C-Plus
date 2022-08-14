cmake_minimum_required(VERSION 3.10)   #设置最低版本

# set the project name
# project(Test)  # 项目名
project(Test VERSION 1.0 LANGUAGES CXX)  # 项目名 指定版本   指定语言  CXX是C++ 
message(${PROJECT_NAME}) 
message(${PROJECT_SOURCE_DIR})  
message(${CMAKE_BINARY_DIR})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)   # 指定到bin文件夹下
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)   #设置静态库文件
# 设置输出文件位置

# add the executable

add_executable(Test hello.cpp)
#----------------- 开关按钮ON，把值传到define里面去
option(CXK_ENABLE "Enable CXK" ON)

if(CXK_ENABLE)
   set(CXK "ikun") 
	message(${CXK})
endif()

configure_file(config.h.in config.h)
add_subdirectory(calc)
target_link_libraries(Test PUBLIC addition)
target_link_libraries(Test PUBLIC subtract)
# #-----------------为.cpp的top头文件添加路径，让其找到
target_include_directories(Test PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/calc"
                           )