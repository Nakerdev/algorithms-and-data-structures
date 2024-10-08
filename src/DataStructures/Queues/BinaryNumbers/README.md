# Binary Numbers

## Table of content

1. Problem context
2. Problem examples
3. Algorithmic cost analysis

### 1 - Problem context

Write a program that given a positive integer n, prints the first n binary numbers in ascending order. A binary number is a number expressed in base-2, consisting only of the digits 0 and 1.

### 2 - Problem Examples

**Input:** 5
**Output:**
1
10
11
100
101

### 3 - Algorithmic cost analysis

* The for loop iterates 𝑛 times, and each time it processes and generates two new binary numbers. 
* The length of the generated binary numbers grows logarithmically as a function of 𝑛, approximately 𝑂(log 𝑛).
* Therefore, each iteration performs operations with a cost of approximately 𝑂(log 𝑛).

**Total complexity: 𝑂(𝑛 log 𝑛)**