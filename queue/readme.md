# Queue Implementation in C++

This project demonstrates the implementation of a Queue Data Structure using:
1. Linked List (Manual Implementation)
2. STL (Standard Template Library)

---

## What is a Queue?

A Queue is a linear data structure that follows the FIFO (First In First Out) principle.

- The element inserted first is removed first.
- Basic operations:
  - enqueue()  -> Insert element
  - dequeue()  -> Remove element
  - front()    -> Get front element
  - isEmpty()  -> Check if queue is empty

---

## 1. Queue using Linked List

In this approach, we create our own queue using a linked list.

### Features:
- Dynamic size (no fixed limit)
- Efficient insertion and deletion (O(1))
- Uses pointers

### Code:

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (rear == NULL) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is Empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    int getFront() {
        if (front == NULL) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return front->data;
    }

    bool isEmpty() {
        return front == NULL;
    }
};