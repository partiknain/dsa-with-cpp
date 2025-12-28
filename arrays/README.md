# 🫗 Container With Most Water (Two Pointer Approach)

## 📌 Problem Statement
You are given an integer array `height` of length `n`.  
Each element represents the height of a vertical line drawn at that index.

Find **two lines** that together with the x-axis form a container, such that the container contains the **maximum amount of water**.

---

## 🧠 Key Insight
The amount of water a container can store depends on:
- **Width** = distance between the two lines
- **Height** = minimum of the two line heights


---

## 🚀 Optimized Approach: Two Pointer Technique

### Why Two Pointers?
- Brute Force checks all pairs → **O(n²)**
- Two Pointer approach solves it in **O(n)** time

---

## 🛠 Algorithm
1. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`
2. Calculate area using current pointers
3. Update maximum area
4. Move the pointer with **smaller height**
   - Because moving the taller one cannot increase area
5. Repeat until `left < right`

---



# 🔢 Pair Sum (Two Sum Problem)

## 📌 Problem Statement
You are given an array of integers and a target value.  
Your task is to find **two different indices** such that the sum of the elements at those indices is equal to the given target.

---

## 🧠 Understanding the Problem
Given:
- An integer array `arr`
- An integer `target`


Return the **indices** of those two elements.

---

## 🚀 Optimized Approach: Two Pointer Technique

### ⚠️ Important Condition
👉 **Array must be sorted** for Two Pointer approach.

---

## 🛠 Algorithm (Two Pointer)

1. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`
2. Calculate the sum:
3. If sum equals target → return indices
4. If sum > target → move `right--`
5. If sum < target → move `left++`
6. Repeat until `left < right`

---





# 📈 Kadane’s Algorithm (Maximum Subarray Sum)

## 📌 Problem Statement
You are given an integer array `arr` of size `n`.  
Find the **contiguous subarray** (containing at least one number) which has the **maximum sum**, and return that sum.

---

## 🧠 Intuition
- Har subarray check karna (Brute Force) → **O(n²)** ❌
- Kadane’s Algorithm ek **smart greedy approach** hai jo:
  - Negative sum ko aage carry nahi karta
  - Har step par best possible sum track karta

---

## 🚀 Optimized Approach: Kadane’s Algorithm

### Key Idea
At every index:
- Either **current element se naya subarray start karo**
- Ya **pichhle subarray me add karo**

Formula:

---

## 🛠 Algorithm Steps
1. Initialize:
   - `currentSum = arr[0]`
   - `maxSum = arr[0]`
2. Traverse array from index `1` to `n-1`
3. Update `currentSum`
4. Update `maxSum`
5. Return `maxSum`

---
