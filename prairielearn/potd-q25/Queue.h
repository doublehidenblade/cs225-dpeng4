#pragma once

#include <cstddef>
#include <queue>

class Queue {
    public:
        Queue();
        int size() const;
        bool isEmpty() const;
        void enqueue(int value);
        int dequeue();
    private:
        int *arr;
        int capacity;
        int front;
        int back;
        int count;
};
