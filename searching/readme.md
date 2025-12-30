# Searching Algorithms

This repository contains explanations of two fundamental searching algorithms in computer science:

1. **Linear Search**
2. **Binary Search**

These algorithms are essential for finding elements in arrays and understanding algorithm efficiency.

---

## 1Linear Search

###  Concept
Linear Search is the simplest searching algorithm. It checks **each element one by one** until it finds the desired element or reaches the end of the array.  
- Works on **unsorted arrays**.  
- Ideal for small datasets or when array is unsorted.

###  How It Works
1. Start from the first element.  
2. Compare the current element with the target.  
3. If it matches, return its position.  
4. If the end of the array is reached without a match, the element is not present.

###  Time & Space Complexity
| Complexity Type | Linear Search |
|-----------------|---------------|
| Time            | O(n)          |
| Space           | O(1)          |

###  Use Cases
- Small arrays  
- Searching in unsorted datasets  
- Simplicity and ease of implementation

---

## 2 Binary Search

###  Concept
Binary Search is an efficient algorithm that works on **sorted arrays**. It uses a **divide-and-conquer** approach to reduce the search space by half at each step.

###  How It Works
1. Start with the entire sorted array.  
2. Find the middle element.  
3. Compare the middle element with the target:
   - If equal → target found.  
   - If target < middle → search left half.  
   - If target > middle → search right half.  
4. Repeat the process on the chosen half until the element is found or the search space is empty.

###  Time & Space Complexity
| Complexity Type | Binary Search |
|-----------------|---------------|
| Time            | O(log n)      |
| Space           | O(1)          |

###  Use Cases
- Large datasets  
- Arrays that are already sorted  
- Problems requiring fast element lookup  

---

##  Notes
- **Linear Search** is universal and simple but slower for large datasets.  
- **Binary Search** is faster but requires the array to be sorted.  
- Understanding both helps in choosing the right algorithm depending on dataset size and order.

