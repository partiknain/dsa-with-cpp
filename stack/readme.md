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