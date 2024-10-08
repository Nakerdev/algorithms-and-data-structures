# Palindromic Sequence

## Table of content

1. Problem context
2. Problem examples
3. Algorithmic cost analysis

### 1 - Problem context

Use a stack to determine, given an integer n and a given sequence of integers of length n, whether the sequence is a palindrome or not. In other words, it is necessary to indicate whether the sequence is read the same from left to right as the other way around.

### 2 - Palindromic Sequence Examples

* 5 8 8 5
* 4 3 2 2 3 4
* 6 7 1 7 6
* 1
* 8

**Input**: An integer n and a sequence of integers of length n.

**Output**: You must write "YES" or "NO" as appropriate.

**Examples**

| Input          | Output  |
| ---------------| ------- |
| 4 10 20 20 10  | YES     |
| 5 1 2 3 2 2    | No      |

### 3 - Algorithmic cost analysis

* Read input and store in vector: 𝑂(𝑛)
* Check input consistency: 𝑂(1)
* Push the first half onto the stack: 𝑂(𝑛/2) → 𝑂(𝑛)
* Compare the second half with the stack: 𝑂(𝑛/2) → 𝑂(𝑛)

**Total complexity: 𝑂(𝑛)**