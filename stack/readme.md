# Stack in C++ 
## 1) Introduction

A **Stack** is a **linear data structure** that follows the **LIFO principle (Last In, First Out)**. This means the element inserted last will be removed first.

Real-life example:

* Stack of plates
* Browser back button history
* Undo/redo in editors

The main operations of a stack are:

* **Push** → Insert an element
* **Pop** → Remove the top element
* **Top/Peek** → View the top element
* **isEmpty** → Check whether stack is empty
* **Size** → Number of elements

---

## 2) Stack Using Vector

A stack can be implemented using a **vector** because vector supports dynamic size and allows fast insertion/removal from the end.

### Working

* The **last index** of the vector acts as the **top of the stack**.
* Insertion happens at the end.
* Deletion also happens from the end.

### Advantages

* Dynamic size
* Easy to implement
* Fast access to last element
* No manual memory management

### Time Complexity

* Push → **O(1)** amortized
* Pop → **O(1)**
* Top → **O(1)**
* Size → **O(1)**

### Space Complexity

* **O(n)**

### Use Case

Best when you want a custom stack with dynamic memory but simpler than linked list.

---

## 3) Stack Using Linked List

A stack can also be implemented using a **linked list**.

### Working

* The **head node** acts as the **top of the stack**.
* Push operation inserts a new node at the beginning.
* Pop removes the head node.

### Advantages

* Dynamic memory allocation
* No wasted memory
* No fixed size limitation
* Push and pop are always fast

### Disadvantages

* Extra memory for pointer storage
* Slightly complex compared to vector

### Time Complexity

* Push → **O(1)**
* Pop → **O(1)**
* Top → **O(1)**
* isEmpty → **O(1)**

### Space Complexity

* **O(n)**

### Use Case

Useful when frequent insertion and deletion are needed and memory should grow node by node.

---

## 4) Stack Using STL

C++ provides an inbuilt **STL stack container**.

It is the easiest and most recommended way to use stack in competitive programming and interviews.

### Features

* Built-in implementation
* Clean syntax
* Fast operations
* Safer and optimized

### Common Operations

* push()
* pop()
* top()
* empty()
* size()

### Time Complexity

* Push → **O(1)**
* Pop → **O(1)**
* Top → **O(1)**
* Empty → **O(1)**

### Space Complexity

* **O(n)**

### Use Case

Best for:

* DSA problems
* LeetCode
* Competitive programming
* Interview coding

---

## 5) Comparison Table

| Method      | Easy      | Dynamic | Fast | Best For              |
| ----------- | --------- | ------- | ---- | --------------------- |
| Vector      | Yes       | Yes     | Yes  | Custom implementation |
| Linked List | Medium    | Yes     | Yes  | Learning DSA concepts |
| STL         | Very Easy | Yes     | Yes  | Interviews + CP       |

---

## 6) Applications of Stack

Stack is used in many real-world problems:

* Function call management
* Undo/redo feature
* Expression evaluation
* Parentheses matching
* Next greater element
* Backtracking
* DFS traversal
* Browser history

---

## 8) Conclusion

Stack is one of the most important data structures in DSA.

You should understand all **three implementations**:

1. Using **Vector** for custom dynamic array logic
2. Using **Linked List** for node-based understanding
3. Using **STL Stack** for practical coding
# Stack Problems README – Next Greater Element, Previous Smaller Element, and Stock Span

## 1) Introduction

These are some of the **most important stack-based problems in DSA**. They are widely asked in:

* Coding interviews
* LeetCode / GeeksforGeeks
* College exams
* Placement preparation

All three problems are based on the idea of using a **monotonic stack**, which helps reduce time complexity from **O(n²)** to **O(n)**.

---

## 2) Next Greater Element (NGE)

The **Next Greater Element** of an element is the **first greater element present on its right side**.

### Example Idea

For every element in the array:

* Move towards the right
* Find the first element greater than current
* If none exists, answer is **-1**

### Stack Logic

* Traverse from **right to left**
* Remove all smaller or equal elements from stack
* The top of stack becomes the answer
* Push current element into stack

### Why Stack?

The stack keeps only useful greater elements, avoiding repeated comparisons.

### Time Complexity

* **O(n)**

### Space Complexity

* **O(n)**

### Applications

* Next warmer day problem
* Next greater in circular array
* Histogram problems
* Price comparison systems

---

## 3) Previous Smaller Element (PSE)

The **Previous Smaller Element** of an element is the **nearest smaller element on its left side**.

### Example Idea

For every element:

* Search left side
* Find nearest smaller value
* If none exists, answer is **-1**

### Stack Logic

* Traverse from **left to right**
* Remove all greater or equal elements
* The top of stack gives previous smaller
* Push current element

### Time Complexity

* **O(n)**

### Space Complexity

* **O(n)**

### Applications

* Largest rectangle in histogram
* Sliding window concepts
* Range minimum problems
* Stock analysis

---

## 4) Stock Span Problem

The **Stock Span** of a day is the number of consecutive previous days where stock price was **less than or equal to today’s price**.

### Example Idea

Span tells how long the stock has been continuously smaller than today.

### Stack Logic

* Traverse from **left to right**
* Remove all smaller or equal previous prices
* If stack is empty → span = current index + 1
* Else → span = current index - stack top index

### Time Complexity

* **O(n)**

### Space Complexity

* **O(n)**

### Applications

* Share market analysis
* Trend detection
* Consecutive performance checking
* Business analytics dashboards

---

## 5) Common Pattern in All Three

These three problems follow the same stack pattern:

1. Traverse array in a fixed direction
2. Remove unnecessary elements from stack
3. Use stack top as answer
4. Push current item

This is called the **Monotonic Stack Pattern**.

---

## 6) Comparison Table

| Problem                  | Direction     | What to Find                 | Stack Type |
| ------------------------ | ------------- | ---------------------------- | ---------- |
| Next Greater Element     | Right to Left | Greater on right             | Decreasing |
| Previous Smaller Element | Left to Right | Smaller on left              | Increasing |
| Stock Span               | Left to Right | Consecutive smaller previous | Decreasing |

---

## 7) Interview Importance

These problems are extremely important because they build the base for:

* Largest rectangle in histogram
* Trapping rain water
* Daily temperatures
* Sliding window maximum
* Circular next greater element

If you understand these, many hard stack problems become easy.

---

## 8) Conclusion

**Next Greater Element, Previous Smaller Element, and Stock Span** are classic stack problems.

They teach:

* Monotonic stack
* Efficient O(n) solutions
* Left/right nearest element logic
* Interview problem patterns
---
# Stack Problems README – Trapping Rainwater and Celebrity Problem

## 1) Introduction

These two are **classic interview problems** that are frequently asked in DSA rounds.

* **Trapping Rainwater** teaches prefix/suffix and stack thinking
* **Celebrity Problem** teaches stack elimination logic

Both problems focus on **optimized problem-solving patterns** and are very important for placements.

---

## 2) Trapping Rainwater Problem

The **Trapping Rainwater** problem asks us to calculate how much water can be stored between buildings after rainfall.

Each array element represents the **height of a building/bar**.

### Core Idea

Water above any building depends on:

* Maximum height on the **left side**
* Maximum height on the **right side**
* Current building height

The trapped water at any index is:

* Minimum of left max and right max
* Minus current height

### Intuition

If a building has taller bars on both sides, water can be trapped.

The smaller side decides the water level.

### Best Approaches

This problem can be solved using:

* Prefix max and suffix max arrays
* Two pointer approach
* Monotonic stack

### Time Complexity

* **O(n)**

### Space Complexity

* **O(n)** using arrays
* **O(1)** using two pointers

### Applications

* Water storage simulation
* Elevation mapping
* Terrain analysis
* Drainage systems

---

## 3) Celebrity Problem

The **Celebrity Problem** is based on a party scenario.

A celebrity is a person who:

1. **Everyone knows them**
2. **They know no one**

The task is to find whether a celebrity exists.

### Core Idea

Instead of checking every person with everyone, we eliminate impossible candidates.

### Stack Logic

* Push all people into stack
* Compare top two people
* Remove the one who cannot be celebrity
* Continue until one candidate remains
* Verify final candidate

### Elimination Rule

If person A knows B:

* A cannot be celebrity

Else:

* B cannot be celebrity

This reduces many unnecessary checks.

### Time Complexity

* **O(n)**

### Space Complexity

* **O(n)** using stack

### Applications

* Social network influence detection
* Graph sink node problem
* Dependency elimination logic
* Matrix relationship problems

---

## 4) Common Pattern

Both problems teach **optimization using smart observations**.

### Trapping Rainwater Pattern

* Left boundary
* Right boundary
* Minimum wall decides answer

### Celebrity Pattern

* Eliminate impossible candidates quickly
* Verify only one final answer

---

## 5) Comparison Table

| Problem            | Main Idea               | Best Technique               | Time |
| ------------------ | ----------------------- | ---------------------------- | ---- |
| Trapping Rainwater | Left & right boundaries | Prefix/Suffix or Two Pointer | O(n) |
| Celebrity Problem  | Candidate elimination   | Stack                        | O(n) |

---


## 7) Conclusion

**Trapping Rainwater** and **Celebrity Problem** are must-do DSA questions.

They help in understanding:

* Prefix and suffix concepts
* Boundary-based logic
* Stack elimination
* O(n) optimization

If you master these, many advanced array and stack interview problems become easier.
