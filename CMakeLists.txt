cmake_minimum_required(VERSION 3.16)
project(sophon_opencv_cpp)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE sub_projects src/**/CMakeLists.txt)
foreach(sub_project ${sub_projects})
    string(REGEX REPLACE "/CMakeLists.txt$" "" sub_project_dir ${sub_project})
    add_subdirectory(${sub_project_dir})
endforeach()

