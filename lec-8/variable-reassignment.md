# Variable Reassignment
- A variable can store different values during program execution.
- A new assignment replaces the old value.

### Example:
int a = 34;
a = 45;
### Output:
34  
45

# Constants 

- A constant is a fixed value that cannot be changed after initialization.
- The const keyword is used to declare a constant.
### Syntax:
const int a = 34;

### Example:
const int a = 34;   
// a = 45;  Give Error

- The value of a constant cannot be 
modified.

# #include< iomanip >

-iomanip stands for Input/Output Manipulation.
- It is a C++ header file.
- It is used to format input and output.
### Common manipulators:
  - setw()
  - setprecision()
  - fixed

### Syntax: 
#include< iomanip >

# Manipulators 
- Manipulators are special functions used to format the output.
### setw()
- setw() sets the minimum width of the output.
- It is available in the <iomanip> header file.
- If the value is smaller than the specified width, spaces are added before the value.
- If the value is equal to or greater than the specified width, no extra spaces are added.     

### Examples:

setw(4) << 3
Output:
   3    
setw(4) << 78
Output:
  78    
setw(4) << 1233
Output:
1233

- setw() only affects the next output value. 

# Operator Precedence
- Operator precedence is the order in which operators are evaluated in an expression.

### Rules:
1. Multiplication (*) and Division (/) have higher precedence than Addition (+) and Subtraction (-).
2. Parentheses () have the highest precedence.
3. Expressions inside parentheses are evaluated first.

### Example:
int c = a * 5 + b;  
First:  
a * 5   
Then:   
+b