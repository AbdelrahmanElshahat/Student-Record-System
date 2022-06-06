cmake_minimum_required(VERSION 3.17)
project(linkedlist C)

set(CMAKE_C_STANDARD 99)

add_executable(linkedlist main.c
        "Linkedlist.c"
        "Linkedlist.h"
        "structstudent.h"
        "system_interface.c"
        "system_interface.h"
        "privilege.h"
        "privilage.c"
        )