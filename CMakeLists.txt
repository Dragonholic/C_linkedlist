cmake_minimum_required(VERSION 3.23)
project(Wedpro C)

set(CMAKE_C_STANDARD 99)

add_executable(C_linkedlist main.c main.h linkedlist.c linkedlist.h stack.c stack.h queue.c queue.h tree.c tree.h Bsc.c Bsc.h TFT.c TFT.h)
