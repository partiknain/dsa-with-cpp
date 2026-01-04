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
