# Reverse a String (Two Pointer Approach)

## Problem Statement
Given a string, reverse it using an efficient **two pointer approach**.

## Approach
1. Initialize two pointers: `start` at the beginning and `end` at the end of the string.  
2. Swap the characters at `start` and `end`.  
3. Move `start` forward and `end` backward.  
4. Repeat until both pointers meet.  

This reverses the string **in-place** without using extra space.

## Key Points
- Efficient and simple  
- In-place reversal (no extra string needed)  
- Common technique in DSA problems

## Complexity
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  

# Palindrome of String

## Introduction
A palindrome string is a string that reads the same from both directions,
forward as well as backward.

If the original string and its reversed form are the same, then the string
is called a palindrome.

## Examples
- madam → Palindrome
- racecar → Palindrome
- level → Palindrome
- hello → Not a Palindrome

## Problem Statement
Given a string, the task is to check whether the string is a palindrome or not.

The string should be compared from both ends to verify if all corresponding
characters are equal.

## Approach
- Use two pointers:
  - One pointer starts from the beginning of the string.
  - Another pointer starts from the end of the string.
- Compare characters at both pointers.
- If characters are equal, move the pointers toward the center.
- If any mismatch occurs, the string is not a palindrome.
- If all characters match, the string is a palindrome.

## Time Complexity
- O(n), where n is the length of the string.

## Space Complexity
- O(1), as no extra space is used.

## Key Points
- Palindrome problems are common in interviews and DSA practice.
- The two-pointer technique is simple and efficient.
- This method works for strings of any length.


# Reverse Words in a String

##  Problem Statement
Given a string consisting of multiple words separated by spaces, reverse the **order of words** in the string.


---

##  Approach / Logic

1. First, reverse the **entire string**.
2. Then, traverse the string and extract each word.
3. Reverse each word individually.
4. Append the words to the result string in correct order.
5. Remove any extra spaces.

---

##  Algorithm Steps

1. Reverse the complete input string.
2. Initialize an empty result string.
3. Loop through the string character by character.
4. Build each word until a space is encountered.
5. Reverse the word and add it to the result.
6. Return the final string.



time complexity=O(n)
space complexity=O(n)
---
