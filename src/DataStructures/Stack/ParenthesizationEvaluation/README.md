# Parenthesization Evaluation

## Table of content

1. Problem context
2. Problem examples
3. Algorithmic cost analysis

### 1 - Problem context

Given an expression with two different types of parentheses, write a program that evaluates its correctness using stacks.

### 2 - Problem Examples

**Input**: A sequence of parentheses (, ), [, ] terminated in period.

**Output**: Write “Correct” or “Incorrect” as appropriate. If it is incorrect, write the last position of the expression (a number between 1 and the size) that must be visited to assert it.

**Examples**

| Input          | Output      |
| ---------------| ------------|
| (()[[(]])).    | Incorrect 7 |
| (()[[]]).      | Correct     |
| (()[](.        | Incorrect 6 |

### 3 - Algorithmic cost analysis

* Input and initial validations: 𝑂(𝑛)
* Transformation of the string into a vector: 𝑂(𝑛)
* Sequence walkthrough and checks: 𝑂(𝑛)
* Last stack varification: 𝑂(1)

**Total complexity: 𝑂(𝑛)**