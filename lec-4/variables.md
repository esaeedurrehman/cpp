# Variables
- A variable is a container used to hold data.
- Variable can be of various types.
- Primarily we have these variable types in cpp.

## Types of Variables in C++
1. int   
   → Stores integer numbers  
     Example: 1, 5, 7, 112

2. float  
   → Stores decimal numbers  
   Example: 1.21, 3.77

3. char  
   → Stores single characters  
   Example: 'a', 'd', 'e'

4. double  
   → Stores large decimal numbers  
   Example: 1.218

5. bool / boolean  
   → Stores true or false  
   Example: true, false

## Example
int sum = 34;
→ sum is an integer variable that stores value 34 in memory.


# Syntax For Declaring Variables

### Definition
- Syntax for declaring a variable means the way of creating a variable.

### General Syntax
- Data_type Variable_name = Value;

### Example
- int age;
- float pi;
- char grade;

- int, float, char → Data Types
- age, pi, grade → Variable 


## Based on Scope, variable can be classified into two types:
  1. Local Variables
  2. Global Variables

# Variables Scope
- Variable scope defines where a variable can be accessed or used in a program.
- Based on scope we have local and global variables in C++

# Local Variables:
  -A local variable is declared inside a function or block and can only be used within that function or block.

# Global Variables:
- A global variable is declared outside all functions and can be used anywhere in the program.

## Can global and local variables have the same name in C++?
- Yes, global and local variables can have the same name in C++.
- In this case, the local variable hides the global variable within its scope.
 

# Data types
- Data types define the type of data a variable can hold.
- For example:
  - an integer variable can hold integer data
  - a character type variable can hold character data

- Data types in C++ are categorised in three groups:
  1. Built-in
    - Examples:
      - int
      - float
      - char
      - double
      - bool
  2. User-defined
  3. Derived
    
# Built-in Data Types

## Int
- Stores integer numbers
- Examples: 0, 3, 4, 7, 8, 9, 10

## Float
- Stores decimal numbers of low precision
- Examples: 1.22, 1.33

## Char
- Stores single characters
- Examples: 'D', 'G', 'L', 'P', 'K' 

## Double
- Stores decimal numbers of high precision
- Example: 3.7489...

## Boolean
- Stores true or false
- Examples: true, false


# User Defined Data Types
- User-defined data types are data types created by the programmer according to the requirements of the program.

## Example
- Struct
- Union
- Enum

# Derived Data Types
- Derived data types are data types that are derived (created) from fundamental data types.

## Example
- Array
- Function
- Pointer

# Rules to Declare Variables in C++
- Variable names in C++ can range from 1 to 255 characters.
- All variable names must begin with a letter of the alphabet or an underscore (_).
- After the first initial letter, variable names can also contain letters and numbers.
- Variable names are case sensitive.
- No spaces or special characters are allowed.
- You cannot use a C++ keyword (a reserved word) as a variable name.










