# Loops 
- Loops are used to repeat a block of code multiple times.
- C++ provides three types of loops:

1. while loop
2. for loop
3. do-while loop

## For - Loop
- A for-loop is used to repeat a block of code.
- It is commonly used when the number of iterations is known.

### Syntax

```cpp
for (initialization; condition; updation)
{
    // loop body
}
```

### Parts of a for - Loop

1. **Initialization** – Executes once before the loop starts.
2. **Condition** – Checked before every iteration.
3. **Updation** – Executes after each iteration.

#### Execution Flow
Initialization --> Condition --> Loop Body --> Updation --> Repeat

### Finite Loop
- A finite loop has an ending condition.
- The loop stops when the condition becomes false.

### Infinite Loop
- An infinite loop has a condition that never becomes false.
- The loop continues forever until it is stopped manually.

## While Loop
- A while loop is used to repeat a block of code while a condition is true.
- The condition is checked before every iteration.

### Syntax

```cpp
while (condition)
{
    // loop body
}
```
### Execution Flow
Condition → Loop Body → Repeat

### Finite While Loop
- A finite while loop has an ending condition.
- The loop stops when the condition becomes false.

### Infinite While Loop
- An infinite while loop has a condition that never becomes false.  
**Example**:

```cpp
while (true)
{
    // code
}
``` 
- The loop continues forever until it is stopped manually.

## do-while Loop

- A do-while loop executes the loop body first and checks the condition afterward.
- The loop body always executes at least one time.

### Syntax

```cpp
do
{
    // loop body
}
while (condition);
```

### Execution Flow

Loop Body → Condition → Repeat

### Finite do-while Loop

- A finite do-while loop has an ending condition.
- The loop stops when the condition becomes false.

### Infinite do-while Loop

- An infinite do-while loop has a condition that never becomes false.   
**Example**:

```cpp
do
{
    // code
}
while (true);
```
- The loop continues forever until it is stopped manually.