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
## Combination Sum Problem (Backtracking)

### Problem Description

The **Combination Sum** problem is a classic backtracking problem where we are given an array of **distinct integers** and a **target value**.

The task is to find all unique combinations of numbers where the chosen numbers **sum up to the target value**.

Important points:

* Each number can be used **multiple times**.
* The combinations must **sum exactly to the target**.
* The solution set **must not contain duplicate combinations**.

---
### Approach (Backtracking)

Backtracking works by **building the solution step by step** and removing choices that do not satisfy the condition.

Steps:

1. Start from index `0`.
2. Pick a number from the array.
3. Add it to the current combination.
4. Reduce the target by that number.
5. If the target becomes **0**, store the combination.
6. If the target becomes **negative**, stop exploring that path.
7. Remove the last element (backtrack) and try the next number.

This process continues until all possible combinations are explored.

---

### Backtracking Idea

At every step we have two choices:

* **Include the current element**
* **Skip the current element**

By exploring both possibilities recursively we generate all valid combinations.

---

### Time Complexity

O(2^n)

Explanation:

In the worst case we explore all possible subsets of the array.

---

## Space Complexity

O(n)

Explanation:

The recursion stack and temporary combination list take space proportional to the depth of recursion.

---
## Palindromic Partitioning (Backtracking)

### Problem Description

The **Palindromic Partitioning** problem asks us to partition a given string such that **every substring of the partition is a palindrome**.

A **palindrome** is a string that reads the same forward and backward.

Examples of palindromes:

* "a"
* "aa"
* "aba"
* "racecar"

The goal is to return **all possible palindrome partitioning combinations** of the string.

---

## Example

Input:

String = "aab"

Output:

["a","a","b"]
["aa","b"]

Explanation:

Possible partitions of `"aab"` are:

* a | a | b
* aa | b

Both partitions contain only palindrome substrings.

---

### What is Backtracking

Backtracking is a technique where we **build the solution step by step** and explore all possible choices.

If a choice does not lead to a valid solution, we **undo the choice and try another possibility**.

Steps involved:

1. Choose a substring.
2. Check if it is a palindrome.
3. If it is a palindrome, add it to the current partition.
4. Continue partitioning the remaining string.
5. If the string is fully partitioned, store the result.
6. Remove the last substring and try the next possibility.

---

### Algorithm Explanation

1. Start from index `0` of the string.
2. Generate substrings from the current index.
3. Check if the substring is a **palindrome**.
4. If it is a palindrome:

   * Add it to the current partition list.
   * Recursively process the remaining string.
5. After recursion returns, remove the substring (backtrack).
6. Continue exploring other substrings.

---


### Time Complexity

O(2^n × n)

Explanation:

* There are approximately **2^n possible partitions**.
* For each partition we check whether substrings are palindromes.

---

### Space Complexity

O(n)

Explanation:

* Recursion stack depth can go up to **n**.
* Temporary partition list also stores up to **n substrings**.

---

### Applications

Palindromic partitioning concepts are used in:

* String partition problems
* Dynamic programming optimizations
* Text processing
* Interview coding problems
* Recursive search algorithms

---

### Conclusion

The **Palindromic Partitioning problem** is a classic **Backtracking problem** where we explore all possible partitions of a string and keep only those partitions where every substring is a palindrome.

This problem helps in understanding:

* Recursion
* Backtracking
* String manipulation
* Search space exploration
