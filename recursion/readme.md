## Factorial of a Number
The factorial of a number `n` is the product of all positive integers less than or equal to `n`.
It is denoted by `n!`.

### Example:
- 5! = 5 × 4 × 3 × 2 × 1 = 120
- 3! = 3 × 2 × 1 = 6

### Recursive Approach:
1. Base Case: If `n` is 0 or 1, factorial is 1.
2. Recursive Case: Multiply `n` with factorial of `n-1`.

**Time Complexity:** O(n)  
**Space Complexity:** O(n) (due to recursion stack)

---

## Fibonacci Series
The Fibonacci series is a sequence where each number is the sum of the two preceding ones.
It starts with 0 and 1.

### Example:
- 0, 1, 1, 2, 3, 5, 8, 13, ...

### Recursive Approach:
1. Base Case:
   - If n == 0 → return 0
   - If n == 1 → return 1
2. Recursive Case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)

**Time Complexity:** O(2^n)  
**Space Complexity:** O(n) (due to recursion stack)

---

## Key Points
- Recursion helps simplify problems like Factorial and Fibonacci.
- Always define a **base case** to avoid infinite recursion.
- For Fibonacci, recursion is simple but not efficient for large n; consider dynamic programming for optimization.

---
# Sum of Numbers Up to N (Using Recursion)

##  Problem Statement
Given a number **N**, find the sum of all natural numbers from **1 to N** using **recursion**.

---

##  Concept Used
- **Recursion**
- A function calling itself until a base condition is met.

---

##  Recursive Logic
To find the sum of numbers from 1 to N:

- If **N = 0**, return `0` (base case)
- Otherwise, return  
  `N + sum(N - 1)`

---
## complexity
time complexity is O(n)
space complexity is o(n)
---


# Binary Search Using Recursion

##  Introduction
Binary Search is an efficient searching algorithm used to find an element in a **sorted array**.  
It works by repeatedly dividing the search range into half.

In this project, Binary Search is implemented using **recursion**.

---

##  How Binary Search Works
1. Find the middle element of the array.
2. If the middle element is equal to the target, return its index.
3. If the target is smaller than the middle element, search in the left half.
4. If the target is greater than the middle element, search in the right half.
5. Repeat the process recursively until the element is found or the range becomes invalid.

---

##  Important Condition
- The array **must be sorted** before applying Binary Search.

---

##  Algorithm
1. Set `low = 0` and `high = n - 1`
2. Find `mid = (low + high) / 2`
3. If `arr[mid] == target`, return `mid`
4. If `arr[mid] > target`, call binary search on left half
5. If `arr[mid] < target`, call binary search on right half
6. If `low > high`, return `-1` (element not found)

---
-  time complexity is O(log n)
-  space complexity is O(log n) due to recursive call stack

---

# Check If an Array Is Sorted

##  Introduction
This problem checks whether a given array is **sorted in ascending order** or not.

An array is said to be sorted if **each element is smaller than or equal to the next element**.

---

##  Problem Statement
Given an array of integers, determine whether the array is sorted in **non-decreasing (ascending) order**.

---

##  Example

### Example 1
**Input:**  
`arr = {1, 2, 3, 4, 5}`  

**Output:**  
`Array is sorted`

### Example 2
**Input:**  
`arr = {1, 3, 2, 5}`  

**Output:**  
`Array is not sorted`

---

##  Approach (Using Recursion)
1. Compare the current element with the next element.
2. If the current element is greater than the next one, the array is **not sorted**.
3. Otherwise, move to the next index recursively.
4. If the end of the array is reached, the array is **sorted**.

---

##  Algorithm
1. If array size is `0` or `1`, return `true`
2. If `arr[index] > arr[index + 1]`, return `false`
3. Recursively check the remaining array
4. Return the final result

---

-  time complexity is O(n)
-  space complexity is O(n) due to recursive call stack

  ---
