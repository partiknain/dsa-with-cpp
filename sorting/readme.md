# Sorting Algorithms (C++)

This folder contains implementation of basic sorting algorithms in C++.
Each algorithm is written with clear logic and comments for better understanding.
---
##  Bubble Sort

###  Description
Bubble Sort is a simple comparison-based sorting algorithm.
It repeatedly swaps adjacent elements if they are in the wrong order.
After each pass, the largest element moves to its correct position.

### Algorithm
1. Traverse the array from start to end.
2. Compare adjacent elements.
3. Swap if the current element is greater than the next.
4. Repeat for all elements.

###  Time Complexity
- Best Case: **O(n)** (already sorted)
- Average Case: **O(n²)**
- Worst Case: **O(n²)**

###  Space Complexity
- **O(1)** (In-place)

---

##  Selection Sort

###  Description
Selection Sort works by repeatedly selecting the minimum element
from the unsorted part of the array and placing it at the beginning.

###  Algorithm
1. Assume the first element is minimum.
2. Find the minimum element from the remaining array.
3. Swap it with the first element.
4. Move to the next position and repeat.

###  Time Complexity
- Best Case: **O(n²)**
- Average Case: **O(n²)**
- Worst Case: **O(n²)**

###  Space Complexity
- **O(1)** (In-place)

---

## Insertion Sort

###  Description
Insertion Sort works the way we sort playing cards in our hand.
It takes one element and inserts it into its correct position
in the already sorted part of the array.

###  Algorithm
1. Start from the second element.
2. Compare it with previous elements.
3. Shift elements greater than the key.
4. Insert the key at the correct position.

###  Time Complexity
- Best Case: **O(n)** (already sorted)
- Average Case: **O(n²)**
- Worst Case: **O(n²)**

###  Space Complexity
- **O(1)** (In-place)

---

##  Summary Table

| Algorithm      | Best     | Average  | Worst    | Space |
|---------------|----------|----------|----------|-------|
| Bubble Sort   | O(n)     | O(n²)    | O(n²)    | O(1)  |
| Selection Sort| O(n²)    | O(n²)    | O(n²)    | O(1)  |
| Insertion Sort| O(n)     | O(n²)    | O(n²)    | O(1)  |

---
---
