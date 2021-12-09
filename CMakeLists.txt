cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
project(cliongongzuodian)
set(CMAKE_CXX_STANDARD 14)
add_executable(Test_1 Weed1_Test/Test_1.cpp)
add_executable(Test_2 Weed1_Test/Test_2.cpp)
add_executable(Test_3 Weed1_Test/Test_3.cpp)
add_executable(Test_4 main_Test/Test_4.cpp)
add_executable(huffman Weed9_2_Test/huffman.cpp)
add_executable(dijkstra Weed11_Test/dijkstra.cpp)
add_executable(kruskal Weed11_Test/kruskal.cpp)
add_executable(prim Weed11_Test/prim.cpp)
add_executable(topsort Weed11_Test/topsort.cpp)
add_executable(IndexSearch Weed12_IndexSearch_Test/IndexSearch.cpp)
add_executable(Sort Weed15_Test1_2/Sort.cpp)
#add_executable(arraylist Weed2_H_Test/arraylist.cpp)
#add_executable(main Weed2_Test/main.cpp)
#include_directories(C:/cliongongzuodian/Weed2_H_Test)
#find_file(Weed2_H_Test/arraylist.h)
#target_link_libraries()
#find_package(Threads REQUIRED)
#target_link_libraries(arraylist Threads::Threads)
#add_executable(C:/cliongongzuodian/Weed2_H_Test)
add_library(cliongongzuodian STATIC
        Weed2_H_Test/arraylist_Test2.cpp
        Weed3_H_Test/linkedlist.cpp
        Weed4_H_Test/LinkStack.cpp
        Weed4_H_Test/SqStack.cpp
        Weed5_H_Test/LinkQueue.cpp
        Weed5_H_Test/LinkStack.cpp
        Weed5_H_Test/SqQueue.cpp
        Weed5_H_Test/SqStack.cpp
        Weed7_H_Test/BiTree.cpp
        Weed8_H_Test/BiThree8.cpp
        Weed9_H_Test/Thread.cpp
        Weed10_H_Test/graph.cpp
        #十一周的已在上面生成add_executable
        Weed12_H_Test/arraylist_Test12.cpp
        Weed13_H_Test/BiTree13.cpp
        Weed14_H_Test/ArrayHash.cpp
        Weed14_H_Test/Hash.cpp
        Weed14_H_Test/LinkHash.cpp
        Weed15_H_Test1_1/ArrayList.cpp )
target_include_directories(cliongongzuodian
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )
#指定用哪个源文件生成可执行文件
add_executable(WeedTest
        Weed2_Test/main.cpp
        Weed3_Test/main.cpp
        Weed4_Test/main.cpp
        Weed5_Test/main.cpp
        Weed7_Test/main.cpp
        Weed8_Test/main.cpp
        Weed9_Test/main.cpp
        Weed10_Test/main.cpp
        #十一周的已在上面生成add_executable
        Weed12_Test/main.cpp
        Weed13_Test/main.cpp
        Weed14_Test/main.cpp
        Weed15_Test1_1/main.cpp
        )
#链接可执行文件和静态库
#target_link_libraries(WeedTest2
#        PRIVATE
#        cliongongzuodian
#        )

target_link_libraries(WeedTest
        PRIVATE
        cliongongzuodian
        )
