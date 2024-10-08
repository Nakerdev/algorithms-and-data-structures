# Hot Potato Game

## Table of content

1. Problem context
2. Problem examples
3. Algorithmic cost analysis

### 1 - Problem context

Write a function to simulate the Hot Potato game. In this game, children sit in a circle, and an object (e.g., a potato) is passed from one child to another. At a certain point in time, the object is stopped, and the child who is holding the object is removed from the circle. The process is repeated until only one child remains—the winner of the game.

The function will receive the children sequence and the number of passes.

### 2 - Problem Examples

**Input:** 
Children: {Alice, Bob, Charlie, David, Eve} 
Passes: 3
**Output:**
The winner is David

### 3 - Algorithmic cost analysis

The complexity of the algorithm is 𝑂(𝑛), where 𝑛 is the number of players.

This is because, in the worst case, the loop executes approximately 𝑛-1 times, and each iteration of the loop has a constant cost of 𝑂(1).

**Total complexity: 𝑂(𝑛 log 𝑛)**