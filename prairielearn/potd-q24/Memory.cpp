#include "Memory.h"
#include <iostream>
#include <iomanip>
#include "Node.h"
#include <vector>
#include <utility>

using namespace std;

/**
Frees the given memory address. Returns if the free was successful or not
Be sure to merge adjacent free blocks when possible
*/
bool Memory::free(unsigned address) {
    Node* current = head;
    while (current != NULL) {
        if (current->address == address) {
            // Your code there
            current->inUse = false;

            // See if we can merge
            Node* prev = current->previous;
            Node* next = current->next;
            if (prev != NULL && !prev->inUse) {
                // Your code there
                //std::cout<<"prev free"<<std::endl;
                prev->next = current->next;
                next->previous = prev;
                current = prev;
            }

            if (next != NULL && !next->inUse) {
                // Your code there
                //std::cout<<"next free"<<std::endl;
                current->next = next->next;
                if(next->next!=NULL){
                  next->next->previous = current;
                }
            }
            return true;
        }
        current = current->next;
    }

    return false;
}


/**
Reorganizes memory structure so that all of the allocated memory is grouped at the bottom (0x0000) and there is one large
chunk of free memory above.

Note: We do not care about the order of the allocated memory chunks
*/
void Memory::defragment() {
    Node* current = head;
    while (current != NULL) {
      if (current->inUse) {
          // Do nothing
      } else {
          // TODO: Find the next chunk of allocated memory and shift it down to current's address
          // We recommend using the helper function `findNextAllocatedMemoryChunk` and `getSize`
          // Your code here
          Node *other = findNextAllocatedMemoryChunk(current);
          if(other==NULL){
            break;
          }
          current->inUse = true;
          other->inUse = false;
        }
      current = current->next;
    }
    // TODO: Finally merge all of the free blocks of memory together
    current = head;
    while (current != NULL) {
      //std::cout<<current->address<<std::endl;
      if(current->inUse == true){
        current = current->next;
        continue;
      }
      Node* prev = current->previous;
      Node* next = current->next;
      if (prev != NULL && !prev->inUse) {

          //std::cout<<"prev free"<<std::endl;
          prev->next = current->next;
          next->previous = prev;
          current = prev;
      }
      if (next != NULL && !next->inUse) {
          //std::cout<<"next free"<<std::endl;
          current->next = next->next;
          if(next->next!=NULL){
            next->next->previous = current;
          }
      }
      current = current->next;
    }
}
