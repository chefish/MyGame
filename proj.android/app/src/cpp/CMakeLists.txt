cmake_minimum_required(VERSION 3.4.1)

# /Users/fish/AndroidStudioProjects/cocosProject/MyGame/proj.android/app/src/cpp
MESSAGE( STATUS "jianliu  CocosBuildSet key = ${PROJECT_SOURCE_DIR}.")

#include(CocosBuildSet)


message(STATUS "CMAKE_CURRENT_SOURCE_DIR->)" ${PROJECT_SOURCE_DIR})
set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../distribution)
set(cocos_lib_DIR ${PROJECT_SOURCE_DIR}/../../../../cocos2d/cocos)
set(COCOS2DX_ROOT_PATH ${PROJECT_SOURCE_DIR}/../../../../cocos2d)

include(CocosBuildSet)

add_library(lib_one SHARED IMPORTED)
#设置so路径
set_target_properties(lib_one PROPERTIES IMPORTED_LOCATION
    ${PROJECT_SOURCE_DIR}/../../src/jniLibs/${ANDROID_ABI}/libMyGame.so)

add_library(two SHARED main.cpp
                        )

include(${cocos_lib_DIR}/2d/CMakeLists.txt)

#加入include目录
#target_include_directories(two PRIVATE ${distribution_DIR}/one/include)

add_subdirectory(${COCOS2DX_ROOT_PATH}/cocos ${ENGINE_BINARY_PATH}/cocos/core)

target_link_libraries(two ${log-lib} lib_one)