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
