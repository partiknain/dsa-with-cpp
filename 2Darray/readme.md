#  2D Array Problems in C++

This repository contains **basic to intermediate 2D array problems** implemented in **C++**, focusing on strong fundamentals required for **DSA, LeetCode practice, and coding interviews**.

The goal of this folder is to understand how to **traverse, process, and analyze matrices (2D arrays)** efficiently.

---

##  Problems Covered

### 1 Linear Search in 2D Array

**Problem Statement:**
Given a 2D matrix and a target element, search for the element using **linear search**.

**Approach:**

* Traverse the matrix row by row.
* Compare each element with the target.
* If found, return its **row and column index**.

**Time Complexity:** `O(rows × columns)`
**Space Complexity:** `O(1)`

**Key Concepts Used:**

* Nested loops
* Matrix traversal
* Pair / index handling

---

### 2 Maximum Row Sum in 2D Array

**Problem Statement:**
Find the **maximum sum of elements among all rows** in a given 2D matrix.

**Approach:**

* Traverse each row.
* Calculate the sum of elements in that row.
* Keep track of the maximum row sum.

**Time Complexity:** `O(rows × columns)`
**Space Complexity:** `O(1)`

**Key Concepts Used:**

* Row-wise traversal
* Accumulator variable
* Maximum comparison

---

### 3 Diagonal Sum of a Square Matrix

**Problem Statement:**
Given a **square matrix**, calculate the sum of:

* Primary diagonal
* Secondary diagonal

 The middle element (if present) should be counted **only once**.

**Approach:**

* Use a single loop.
* Primary diagonal → `matrix[i][i]`
* Secondary diagonal → `matrix[i][n - i - 1]`
* Avoid double-counting the center element.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

**Key Concepts Used:**

* Diagonal indexing
* Optimized traversal
* Conditional checks

---
