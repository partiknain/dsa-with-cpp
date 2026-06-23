# Binary Tree Traversal

## 📌 Overview
A Binary Tree is a hierarchical data structure where each node has at most two children: a left child and a right child. Tree traversal refers to the process of visiting every node in the tree exactly once in a specific order.

## 🌳 Traversal Types

### 1. Preorder Traversal (Root → Left → Right)
In Preorder traversal, the root node is visited first, followed by the left subtree and then the right subtree.

**Example Output:** `1 2 4 5 3 6`

### 2. Inorder Traversal (Left → Root → Right)
In Inorder traversal, the left subtree is visited first, then the root node, and finally the right subtree.

**Example Output:** `4 2 5 1 3 6`

### 3. Postorder Traversal (Left → Right → Root)
In Postorder traversal, the left subtree is visited first, followed by the right subtree, and the root node is visited last.

**Example Output:** `4 5 2 6 3 1`

## ⏱️ Complexity Analysis
- **Time Complexity:** O(N)
- **Space Complexity:** O(H)

Where:
- **N** = Number of nodes in the tree
- **H** = Height of the tree

## 🎯 Key Takeaways
- Binary Trees are fundamental data structures used in many algorithms.
- Preorder, Inorder, and Postorder are the three main depth-first traversals.
- Understanding these traversals is essential for solving tree-related DSA problems and preparing for coding interviews.