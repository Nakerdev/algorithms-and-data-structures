# Smaller on the left

## Table of content

1. Problem context
2. Problem examples
3. Algorithmic cost analysis

### 1 - Problem context

Given a vector of integers, find the previous smaller element for every element in the vector. The previous smaller element of a number x is the first smaller number to the left of x in the vector. If the previous smaller element doesn't exist for a given element, consider it -1.

In other words, for each element A[i] in the vector A, find an element A[j] such that j < i and A[j] < A[i] and value of the index j should be as maximum as possible (the first one to appear).

### 2 - Problem Examples

**Examples**

| Input                 | Output                  |
| ----------------------| ------------------------|
| [2, 5, 3, 7, 8, 1, 9] | [-1, 2, 2, 3, 7, -1, 1] |
| [5, 7, 4, 9, 8, 10]   | [-1, 5, -1, 4, 4, 8]    |

### 3 - Algorithmic cost analysis

* Sequence walkthrough: 𝑂(𝑛)
* The complexity of the inner while loop is 𝑂(1) per iteration of each element in the outer for loop, but in total for all elements it is 𝑂(𝑛).
* Reassign the value: 𝑂(1)

**Total complexity: 𝑂(𝑛)**