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

---
# Circular Queue Implementation in C++

## Overview
This project implements a **Circular Queue** using an array in C++. A Circular Queue is a linear data structure that follows the **FIFO (First In First Out)** principle and efficiently utilizes memory by connecting the last position of the queue back to the first.

## Features
- Enqueue (Insert Element)
- Dequeue (Remove Element)
- Get Front Element
- Get Rear Element
- Check if Queue is Empty
- Check if Queue is Full
- Efficient Memory Utilization

## Data Structure
The Circular Queue maintains:
- `front` : Index of the first element
- `rear` : Index of the last element
- `size` : Current number of elements
- `capacity` : Maximum size of the queue
- `arr[]` : Array to store queue elements

## Operations

### Enqueue
Adds an element to the rear of the queue.

### Dequeue
Removes an element from the front of the queue.

### Front
Returns the front element of the queue.

### Rear
Returns the last element of the queue.

### IsEmpty
Checks whether the queue is empty.

### IsFull
Checks whether the queue is full.

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Enqueue   | O(1) |
| Dequeue   | O(1) |
| Front     | O(1) |
| Rear      | O(1) |
| IsEmpty   | O(1) |
| IsFull    | O(1) |

## Example

```cpp
CircularQueue q(5);

q.push(10);
q.push(20);
q.push(30);

q.pop();

cout << q.front();


---
 # First Unique Character in a String

## Problem Statement

Given a string `s`, find the **first non-repeating character** in it and return its index. If no such character exists, return `-1`.

### Example 1

```text
Input: s = "leetcode"
Output: 0
```

### Example 2

```text
Input: s = "loveleetcode"
Output: 2
```

### Example 3

```text
Input: s = "aabb"
Output: -1
```

---

## Approach

### Frequency Counting

1. Traverse the string and count the frequency of each character.
2. Traverse the string again.
3. Return the index of the first character whose frequency is `1`.
4. If no unique character is found, return `-1`.

---

## C++ Solution

```cpp
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        for(char ch : s) {
            freq[ch - 'a']++;
        }

        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
```

---

## Dry Run

### Input

```text
s = "loveleetcode"
```

### Frequency Count

```text
l -> 2
o -> 2
v -> 1
e -> 4
t -> 1
c -> 1
d -> 1
```

### Traversal

```text
Index 0 -> l (freq = 2)
Index 1 -> o (freq = 2)
Index 2 -> v (freq = 1) ✅
```

### Output

```text
2
```

---

## Complexity Analysis

| Complexity       | Value |
| ---------------- | ----- |
| Time Complexity  | O(n)  |
| Space Complexity | O(1)  |

**Explanation:**

* We traverse the string twice.
* Frequency array size is fixed (26 lowercase letters), so space is constant.

---

## Key Learning

* Frequency counting is a powerful technique for character-based problems.
* Multiple traversals are often acceptable when they keep the solution simple and efficient.
* Using a fixed-size array can reduce space usage compared to hash maps.

---

### Tags

`String` `Hashing` `Array` `Frequency Count` `LeetCode 387`
