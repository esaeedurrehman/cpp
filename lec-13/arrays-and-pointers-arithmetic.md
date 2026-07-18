# Arrays 
- An **array** is a collection of elements of the **same data type** stored in **contiguous (continuous) memory locations**.

## Why Do We Use Arrays?
- A single variable can store only **one value**. When we need to store a large amount of similar data (such as the marks of 2500 students), creating thousands of separate variables is not practical.
- Instead, we create **one array** that can store all the values together.

## Memory Representation
- All array elements are stored **next to each other** in memory.
- Each element has its own **index**.
- The **first index is 0**.
- The last index is **Size - 1**.

Example:

```cpp
int marks[5];
```

| Index | 0 | 1 | 2 | 3 | 4 |  

| ----: | - | - | - | - | - |

## Advantages of Arrays
- Stores multiple values using a single variable name.
- Makes code shorter, cleaner, and easier to manage.
* Easy to access elements using indexes.
- Can be processed efficiently using loops.

## Key Points
- All elements must have the **same data type**.
- Array elements are stored in **continuous memory locations**.
- Array indexing always starts from **0**.
- Arrays are useful when storing a large collection of similar data.

# Pointers and Arrays
- Arrays and pointers are closely related in C++. The name of an array represents the **address of its first element**.

Example:

```cpp
int marks[] = {32, 99, 38, 51};
int *p = marks;
```

Here:

```cpp
p == &marks[0]
```
- Both point to the first element of the array.

## Accessing Array Elements
- A pointer can access array elements using the dereference operator (`*`).

Examples:

```cpp
*p       // First element
*(p+1)   // Second element
*(p+2)   // Third element
*(p+3)   // Fourth element
```

## Pointer Arithmetic
- Pointers can move from one element to the next using pointer arithmetic.

```cpp
p++;
```
- This moves the pointer to the next array element.

- The pointer does **not** move by 1 byte. It moves by the **size of its data type**.

Example:

- `int` → usually 4 bytes
- `char` → 1 byte
- `double` → usually 8 bytes

## Important Expressions
- *p --> Returns the value stored at the current address.
- p++ --> Moves the pointer to the next element.
- *(p++) --> Prints the current value first, then moves the pointer.
- *(++p) --> Moves the pointer first, then prints the value.

## Advantages
- Easy traversal of arrays.
- Faster access to array elements.
- Useful in dynamic memory allocation and advanced C++ programming.

## Key Points
- Array name stores the address of the first element.
* `marks == &marks[0]`
- `p` stores an address.
- `*p` returns the value at that address.
- Pointer arithmetic moves according to the size of the data type.
- Arrays and pointers are closely connected, but an array itself is **not** a pointer.
