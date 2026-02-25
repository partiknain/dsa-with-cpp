#  Find All Subsets Using backtracking

##  Problem Statement

Given an array of integers, generate **all possible subsets** (also known as the Power Set) using **recursion**.

A subset is any combination of elements taken from the array. It can include:

* No elements (empty subset)
* One element
* Multiple elements
* All elements

---

##  Example

**Input:**

```
arr = [1, 2, 3]
```

**Output:**

```
[]
[1]
[2]
[3]
[1, 2]
[1, 3]
[2, 3]
[1, 2, 3]
```

Total number of subsets = **2^n**

---

##  Approach (Recursion – Pick / Not Pick)

At every index we have two choices:

1. **Pick** the element → include it in the subset.
2. **Not Pick** the element → exclude it from the subset.

We recursively repeat this process for the remaining elements until we reach the end of the array.

This technique is called **Backtracking**.

---

##  Recursive Logic

```
Base Case:
If index == n → print/store current subset

Recursive Case:
1. Include current element
2. Exclude current element
```

---

##  Complexity Analysis

**Time Complexity:**

```
O(n*2^n)
```

Each element has two choices.

**Space Complexity:**

```
O(n*2^n)
```

Recursion stack depth + subset storage.

---
## Permutations using Backtracking (C++)

### What is Permutation?

A permutation is an arrangement of elements in all possible orders.


If there are `n` elements → total permutations = **n!**

---

### Approach: Backtracking

Backtracking is a recursive technique where we:

1. Choose an element
2. Explore further
3. Undo the choice (backtrack)
4. Try the next option

---

### Algorithm

- Fix one element at a position
- Recursively generate permutations for remaining elements
- Swap back (Backtrack)

---

### Time Complexity

O(n × n!)

- There are n! permutations
- Each permutation takes O(n) time to copy

---

###  Space Complexity

O(n) → Recursive stack

---