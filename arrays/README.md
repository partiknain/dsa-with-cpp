#  Container With Most Water (Two Pointer Approach)

##  Problem Statement
You are given an integer array `height` of length `n`.  
Each element represents the height of a vertical line drawn at that index.

Find **two lines** that together with the x-axis form a container, such that the container contains the **maximum amount of water**.

---


##  Key Insight
The amount of water a container can store depends on:
- **Width** = distance between the two lines
- **Height** = minimum of the two line heights


---


##  Optimized Approach: Two Pointer Technique

### Why Two Pointers?
- Brute Force checks all pairs → **O(n²)**
- Two Pointer approach solves it in **O(n)** time

---

##  Algorithm
1. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`
2. Calculate area using current pointers
3. Update maximum area
4. Move the pointer with **smaller height**
   - Because moving the taller one cannot increase area
5. Repeat until `left < right`

---



#  Pair Sum (Two Sum Problem)

##  Problem Statement
You are given an array of integers and a target value.  
Your task is to find **two different indices** such that the sum of the elements at those indices is equal to the given target.

---

##  Understanding the Problem
Given:
- An integer array `arr`
- An integer `target`

Return the **indices** of those two elements.

---

##  Optimized Approach: Two Pointer Technique

###  Important Condition
 **Array must be sorted** for Two Pointer approach.

---

## Algorithm (Two Pointer)

1. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`
2. Calculate the sum:
3. If sum equals target → return indices
4. If sum > target → move `right--`
5. If sum < target → move `left++`
6. Repeat until `left < right`

---





#  Kadane’s Algorithm (Maximum Subarray Sum)

##  Problem Statement
You are given an integer array `arr` of size `n`.  
Find the **contiguous subarray** (containing at least one number) which has the **maximum sum**, and return that sum.

---

## Intuition
- Har subarray check karna (Brute Force) → **O(n²)** ❌
- Kadane’s Algorithm ek **smart greedy approach** hai jo:
  - Negative sum ko aage carry nahi karta
  - Har step par best possible sum track karta

---

## Optimized Approach: Kadane’s Algorithm

### Key Idea
At every index:
- Either **current element se naya subarray start karo**
- Ya **pichhle subarray me add karo**

Formula:

---

##  Algorithm Steps
1. Initialize:
   - `currentSum = arr[0]`
   - `maxSum = arr[0]`
2. Traverse array from index `1` to `n-1`
3. Update `currentSum`
4. Update `maxSum`
5. Return `maxSum`

---



# search in rotated array(using binary search algorithm)

## problem statement 
you are given an array of name `arr` and size `n`
array is in rotated position 
for example arr[7]={3,4,5,6,0,1,2}

---

## binary search algorithm
-  we find the mid in our rotated array
-  if our target is at position of mid then return `mid`
-  if our target is less than mid then our target in left side of rotated array
-   else our target is in right side of our rotated array

---

### time complexity
time complexity in search in rotated array is O(logn)
because size of array is half after one comparision 


# Peak Index in a Mountain Array

##  Overview
A **mountain array** is an array where elements **strictly increase** to a maximum value (the peak) and then **strictly decrease** after that.  

The **peak index** is the position of the **maximum element** in this array. Finding it efficiently is a common algorithmic problem.

---

##  Key Concept
- A mountain array satisfies:
  - `arr[0] < arr[1] < ... < arr[peak] > arr[peak+1] > ... > arr[n-1]`  
- The goal is to find the **index of the peak element**.  

---

##  How to Approach
1. **Brute Force Approach**
   - Scan the array from start to end.
   - Compare each element with its neighbors.
   - The element that is **greater than both neighbors** is the peak.
   - **Time Complexity:** O(n)

2. **Efficient Approach (Binary Search)**
   - Use the property of mountain array:
     - If `arr[mid] < arr[mid+1]` → peak is on the **right side**.
     - If `arr[mid] > arr[mid+1]` → peak is on the **left side or at mid**.
   - Narrow down the search space using **binary search**.
   - **Time Complexity:** O(log n)
   - **Space Complexity:** O(1)

---

##  Key Observations
- There is **always exactly one peak** in a valid mountain array.
- Peak cannot be at the first or last index of the array.
- The mountain array must have **at least 3 elements**.

---

##  Applications
- Useful in problems involving:
  - **Bitonic arrays**
  - **Stock price analysis**
  - **Finding maximum efficiently in unimodal sequences**
- Often used in competitive programming and interview questions.

---

##  Summary
| Feature | Brute Force | Binary Search |
|---------|-------------|---------------|
| Time Complexity | O(n) | O(log n) |
| Space Complexity | O(1) | O(1) |
---



#  Sorted Two Arrays

##  Problem Statement
You are given two arrays that are already **sorted in ascending order**.  
The task is to **combine or process** these arrays while maintaining the sorted order.

---

##  Key Insight
Since both arrays are already sorted,  
there is no need to sort the elements again.  
An efficient solution can be achieved by comparing elements step by step.

---

##  Approach (Two Pointer Technique)

- Place one pointer at the beginning of each array  
- At each step:
  - Compare the elements pointed to by both pointers  
  - Select the smaller element and include it in the result  
  - Move the pointer forward in the corresponding array  
- When one array is fully traversed:
  - Add the remaining elements of the other array directly  
  - They are already sorted

---

##  Complexity Analysis

- **Time Complexity:** `O(n + m)`  
  where `n` is the size of the first array and `m` is the size of the second array

- **Space Complexity:**  
  - Using an extra array → `O(n + m)`  
  - In-place approach → `O(1)`

---


#  Dutch National Flag (DNF) Algorithm

## Problem Statement
You are given an array containing only **0s, 1s, and 2s**.  
The task is to sort the array **in a single pass** and **without using extra space**.

---

##  Key Insight
Since the array contains only three distinct values (0, 1, and 2),  
we can sort it efficiently by maintaining **three regions** in the array.

---

##  Approach (Three Pointer Technique)

We use three pointers to divide the array into four parts:

1. **Low pointer**  
   - Marks the boundary for elements equal to `0`

2. **Mid pointer**  
   - Used to traverse the array

3. **High pointer**  
   - Marks the boundary for elements equal to `2`

### Working Principle:
- If the current element is `0`, it is placed in the `low` region  
- If the current element is `1`, it stays in the middle region  
- If the current element is `2`, it is placed in the `high` region  

This process continues until all elements are in their correct regions.

---

##  Complexity Analysis

- **Time Complexity:** `O(n)`  
  (The array is traversed only once)

- **Space Complexity:** `O(1)`  
  (Sorting is done in-place)

---

##  Why This Algorithm is Efficient?

- Only one traversal of the array is required  
- No extra memory is used  
- Optimal solution for sorting 0s, 1s, and 2s

---
# Stock Buy and Sell Problem

##  Problem Statement
You are given an array `prices` where `prices[i]` is the price of a stock on the `i-th` day.

You want to maximize your profit by choosing **one day to buy** the stock and **a different day in the future to sell** the stock.

Return the **maximum profit** you can achieve.  
If you cannot achieve any profit, return `0`.

---
**Explanation:**  
No profit is possible, so output is `0`.

---

##  Approach (Optimal Solution)

- Keep track of the **minimum price so far**
- Calculate profit for each day
- Update maximum profit whenever a higher profit is found

time complexity=O(n)
space complexity=O(1)
---

# Moore’s Voting Algorithm

##  Overview
Moore’s Voting Algorithm is an efficient algorithm used to find the **majority element** in an array.
A **majority element** is an element that appears **more than ⌊ n/2 ⌋ times** in an array of size `n`.
This algorithm works in **linear time** and **constant space**, making it optimal for large inputs.
---
##  Problem Statement
Given an array of integers `nums`, find the **majority element**.
You may assume that the majority element **always exists** in the array.
---
##  Key Idea
- If an element appears more than `n/2` times, it will **remain after cancelling out other elements**
- The algorithm maintains:
  - a **candidate**
  - a **count**
---
##  Algorithm Steps

1. Initialize `count = 0` and `candidate = 0`
2. Traverse the array:
   - If `count == 0`, set `candidate = current element`
   - If current element == candidate → `count++`
   - Else → `count--`
3. After traversal, the candidate is the **majority element**

---
