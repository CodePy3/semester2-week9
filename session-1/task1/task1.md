
# Node

## Node data structure

Data: { int value }

Node: { Data *data, Node *next } 

### Memory management: 

`createData()`, `createNode()`, `freeNode()`, `freeNodes()`

### Node operations: 

`traverseI()`

## Tasks

### 1. Inspect the `Makefile`
- Compile with `make`

### 2. Inspect the code 
- run the code and inspect the output
- in `main()` we create a data structure by linking `first`, `second` and `third` nodes through the `next` pointer
- test adding more nodes with different data values
    - add a new node at the start of the list
    - add a node in the middle of the list
    - sketch how you have modified the data structure on paper 

### 3. Test with `valgrind`
- recall that we can run the executable as `valgrind ./node` to see the report
- we use a lot of `malloc`/`free`
- do we have memory leaks?
- comment out the `freeNodes()` function in `main()`, re-compile and test

### 4. Traversal
- we use the iterative traversal function `traverseI()`
- implement a second version that uses a `while` loop in the `traverseW()` function
    - compile and test to compare to `traverseI()`
    - Hint: you can see a while-based iteration in the `freeNodes()` function
- implement a third version using recursion in the `traverseR()` function
    - compile and test to compare to `traverseI()`
    - Hint: recall the "golden rules"
        - define the base case
        - recursive call
        - approach the base case
