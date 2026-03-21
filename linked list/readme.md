# Singly Linked List – Push and Pop Operations

## What is a Singly Linked List?

A Singly Linked List is a linear data structure made up of nodes.  
Each node contains:

- Data (value)
- Next pointer (address of the next node)

The last node always points to NULL.

Memory is not stored in continuous form like arrays.  
The size of the linked list is dynamic.

------------------------------------------------------------

# Push Operations (Insertion)

1) Push Front (Insert at Beginning)

Explanation:
A new node is added at the start of the list.  
The new node becomes the new head.

How it Works:
- Create a new node.
- Point its next to the current head.
- Move head to the new node.

Time Complexity: O(1)  
Space Complexity: O(1)

------------------------------------------------------------

2) Push Back (Insert at End)

Explanation:
A new node is added at the end of the list.

How it Works:
- Create a new node.
- Traverse the list until the last node.
- Make the last node’s next point to the new node.

Time Complexity: O(n)  
Space Complexity: O(1)

------------------------------------------------------------

3) Insert at Position

Explanation:
Insert a new node at a specific position (like 2nd, 3rd, etc.).

How it Works:
- Traverse the list to position - 1.
- Connect the new node between previous and next node.
- Update pointers correctly.

Time Complexity: O(n)  
Space Complexity: O(1)

------------------------------------------------------------

# Pop Operations (Deletion)

1) Pop Front (Delete from Beginning)

Explanation:
Removes the first node of the list.

How it Works:
- Store the current head.
- Move head to the next node.
- Delete the old head.

Time Complexity: O(1)  
Space Complexity: O(1)

------------------------------------------------------------

2) Pop Back (Delete from End)

Explanation:
Removes the last node from the list.

How it Works:
- Traverse to the second last node.
- Make its next pointer NULL.
- Delete the last node.

Time Complexity: O(n)  
Space Complexity: O(1)

------------------------------------------------------------

3) Delete at Position

Explanation:
Deletes a node at a specific position.

How it Works:
- Traverse to position - 1.
- Store the node to delete.
- Connect previous node to next node.
- Delete the target node.

Time Complexity: O(n)  
Space Complexity: O(1)

------------------------------------------------------------

# Summary Table

Operation                 Time Complexity     Space Complexity
Push Front                O(1)                O(1)
Push Back                 O(n)                O(1)
Insert at Position        O(n)                O(1)
Pop Front                 O(1)                O(1)
Pop Back                  O(n)                O(1)
Delete at Position        O(n)                O(1)

------------------------------------------------------------
# Doubly Linked List - Push and Pop Operations

##  Introduction

A **Doubly Linked List (DLL)** is a type of linked list where each node contains:

* Data
* A pointer to the next node (`next`)
* A pointer to the previous node (`prev`)

This allows traversal in both forward and backward directions.

---

##  Node Structure (C++)

```cpp
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
```

---

##  Push Operations

Push means **inserting a new node** into the list.

### 1. Push at Front

Adds a node at the beginning.

```cpp
void pushFront(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head != NULL) {
        newNode->next = head;
        head->prev = newNode;
    }

    head = newNode;
}
```

### Steps:

1. Create new node
2. Point new node's `next` to head
3. Update old head's `prev`
4. Move head to new node

---

### 2. Push at End

Adds a node at the end.

```cpp
void pushBack(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}
```

### Steps:

1. Traverse to last node
2. Link last node to new node
3. Set new node's `prev`

---

##  Pop Operations

Pop means **removing a node** from the list.

### 1. Pop from Front

Removes the first node.

```cpp
void popFront(Node*& head) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    delete temp;
}
```

### Steps:

1. Store current head
2. Move head to next node
3. Set new head's `prev` to NULL
4. Delete old head

---

### 2. Pop from End

Removes the last node.

```cpp
void popBack(Node*& head) {
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;
}
```

### Steps:

1. Traverse to last node
2. Update second last node's `next`
3. Delete last node

---

##  Example Usage

```cpp
int main() {
    Node* head = NULL;

    pushFront(head, 10);
    pushFront(head, 20);
    pushBack(head, 30);

    popFront(head);
    popBack(head);

    return 0;
}
```

---

##  Time Complexity

| Operation  | Complexity |
| ---------- | ---------- |
| Push Front | O(1)       |
| Push Back  | O(n)       |
| Pop Front  | O(1)       |
| Pop Back   | O(n)       |

---
#  Reverse a Linked List (Theory Only)

##  Introduction

A **Linked List** is a linear data structure where elements (nodes) are connected using pointers. Reversing a linked list means changing the direction of these pointers so that the last node becomes the first, and the first becomes the last.

---

##  Objective

Given a linked list:

`1 → 2 → 3 → 4 → NULL`

After reversing:

`4 → 3 → 2 → 1 → NULL`

---

## Core Concept

In a singly linked list, each node points to the next node. To reverse it, we **change the direction of each link** so that every node points to its previous node instead of the next.

---

##  Step-by-Step Logic (Intuition)

1. Start from the head node
2. Reverse the link of the current node
3. Move forward and repeat
4. At the end, the last node becomes the new head

---

##  Key Idea (3-Pointer Approach)

We use three pointers:

* **Previous (prev)** → Initially `NULL`
* **Current (curr)** → Starts at head
* **Next (next)** → Stores next node

### Process:

* Save next node
* Reverse current node’s pointer
* Move all pointers one step forward

Repeat until the list ends.

---

##  Visualization

Before:

`A → B → C → D → NULL`

After reversing step-by-step:

* `A ← NULL`
* `B ← A`
* `C ← B`
* `D ← C`

Final:

`D → C → B → A → NULL`

---

##  Edge Cases

* Empty list → No change
* Single node → No change
* Two nodes → Simply swap direction

---

##  Time & Space Complexity

| Aspect | Complexity |
| ------ | ---------- |
| Time   | O(n)       |
| Space  | O(1)       |

* Traverses list once
* No extra memory required

---
#  Find Middle of Linked List (Slow & Fast Pointer Technique)

##  Introduction

Finding the **middle of a linked list** is a common problem in data structures. The most efficient way to solve it is using the **two-pointer (slow & fast) technique**.

---

##  Objective

Given a linked list:

`1 → 2 → 3 → 4 → 5 → NULL`

Output:

`3` (middle element)

For even number of nodes:

`1 → 2 → 3 → 4 → NULL`

Output:

`3` (second middle node is usually preferred)

---

##  Core Idea

Use two pointers moving at different speeds:

* **Slow Pointer** → moves 1 step at a time
* **Fast Pointer** → moves 2 steps at a time

When the fast pointer reaches the end, the slow pointer will be at the middle.

---

##  Step-by-Step Intuition

1. Initialize both `slow` and `fast` at head
2. Move:

   * `slow` → one step
   * `fast` → two steps
3. Repeat until fast reaches end (`NULL` or `fast->next == NULL`)
4. At that moment, `slow` is pointing to the middle node

---

##  Visualization

### Example 1 (Odd length)

`1 → 2 → 3 → 4 → 5`

Steps:

* Step 1: slow=1, fast=1
* Step 2: slow=2, fast=3
* Step 3: slow=3, fast=5
* Stop → fast reached end

 Middle = `3`

---

### Example 2 (Even length)

`1 → 2 → 3 → 4`

Steps:

* Step 1: slow=1, fast=1
* Step 2: slow=2, fast=3
* Step 3: slow=3, fast=NULL

 Middle = `3` (second middle)

---

##  Edge Cases

* Empty list → no middle
* Single node → that node is the middle
* Two nodes → second node is considered middle (common convention)

---

##  Complexity Analysis

| Aspect | Complexity |
| ------ | ---------- |
| Time   | O(n)       |
| Space  | O(1)       |

* Only one traversal needed
* No extra memory required

---
