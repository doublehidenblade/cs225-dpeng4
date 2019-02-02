/**
 * @file main.cpp
 * A simple program that allocates students to rooms.
 */

#include <algorithm>
#include <vector>
#include <iostream>
#include <utility>

#include "fileio.h"
#include "letter.h"
#include "room.h"
#include "allocator.h"

/**
 * Main routine.
 * Creates an Allocator object and allocates the students.
 */
int main()
{

    fileio::init();
    //std::cout << __LINE__ << std::endl;
    Allocator theAllocator("students.txt", "rooms.txt");//<<pointer being freed was not allocated
    theAllocator.allocate();
    theAllocator.printRooms();
    fileio::halt();

    std::cout << std::endl;
    return 0;
}
