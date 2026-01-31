# Hashing Problems -

This repository contains simple and efficient solutions for common **array problems using hashing**. These problems are frequently asked in coding interviews and are great for understanding how hash-based data structures improve time complexity.
---
##  Problems Covered

### 1 Pair Sum (Two Sum) Using Hashing

**Problem Statement:**
Given an array of integers and a target value, determine whether there exists a pair of elements whose sum is equal to the target.

**Example:*
```
Input:  nums = [2, 7, 11, 15], target = 9
Output: Pair exists (2 + 7 = 9)
```

**Approach (Hashing):**

* Use a hash set or hash map.
* Traverse the array element by element.
* For each element `x`, check if `target - x` already exists in the hash.
* If yes, a valid pair is found.
* Otherwise, store the current element in the hash.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(n)`

**Why Hashing?**
Hashing allows constant-time lookups, reducing the time complexity from `O(n²)` (brute force) to `O(n)`.

---

### 2 Duplicate Element Detection Using Hashing

**Problem Statement:**
Given an array of integers, find whether any element appears more than once.

**Example:**


```
Input:  nums = [1, 2, 3, 4, 2]
Output: Duplicate found (2)
```

**Approach (Hashing):**

* Use a hash set.
* Traverse the array.
* If an element already exists in the hash set, it is a duplicate.
* Otherwise, insert the element into the hash set.

**Time Complexity:** `O(n)`
**Space Complexity:** `O(n)`

**Why Hashing?**
Hash sets store unique elements and allow fast checking for existence.

---

##  Key Concepts Used

* Hashing
* Hash Set / Hash Map
* Array Traversal
* Time & Space Complexity Optimization

---
# 3Sum Problem (Two Pointer Approach)

## Problem Statement
Given an integer array `nums`, return all unique triplets  
`[nums[i], nums[j], nums[k]]` such that:

- `i != j`, `i != k`, and `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution must not contain duplicate triplets.

---

---

## Approach: Two Pointer Technique

1. Sort the array.
2. Fix one element at index `i`.
3. Use two pointers:
   - `left = i + 1`
   - `right = n - 1`
4. Calculate the sum of `nums[i] + nums[left] + nums[right]`
   - If sum < 0 → move `left`
   - If sum > 0 → move `right`
   - If sum == 0 → store the triplet
5. Skip duplicate elements to avoid repeated triplets.

---

### time complexity is O(n^2)
### time complexity is O(1)(excluding ouput)

---
# 4 Sum Problem (Two Pointer Approach)

## Problem Statement
Given an array of integers `nums` and an integer `target`, return all **unique quadruplets**
`[nums[i], nums[j], nums[k], nums[l]]` such that:

nums[i] + nums[j] + nums[k] + nums[l] = target

### Conditions:
- All indices `i, j, k, l` must be different
- The solution must not contain duplicate quadruplets

---


## Approach (Two Pointer Technique)

1. Sort the array
2. Fix the first element using loop `i`
3. Fix the second element using loop `j`
4. Use two pointers (`left` and `right`) for the remaining two elements
5. Calculate the sum:
   - If sum equals target → store the quadruplet
   - If sum is less than target → move `left` pointer forward
   - If sum is greater than target → move `right` pointer backward
6. Skip duplicate elements to avoid repeated quadruplets

---

## Algorithm

1. Sort the input array
2. Run a loop from index `0` to `n-4` for the first element
3. Run another loop from `i+1` to `n-3` for the second element
4. Apply two pointer technique on the remaining part of the array
5. Skip duplicate values at every step
6. Print or store valid quadruplets

---

time complexity is O(n^3)
space coplexity is o(1) because no extra space used