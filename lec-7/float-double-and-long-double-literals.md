# Float, Double and Long Double Literals

- A literal is a fixed value written directly in the program.  
34.4    → Double literal (default)  
34.4f   → Float literal  
34.4F   → Float literal  
34.4l   → Long Double literal  
34.4L   → Long Double literal

# sizeof()
- sizeof() is used to find the memory size (in bytes) of a data type or value.
### Example:
sizeof(34.4)   → Double  
sizeof(34.4f)  → Float      
sizeof(34.4l)  → Long Double

# Reference Variables 
- A reference variable is another name (nickname) for an existing variable.
- It does not create a new variable.
- Both the original variable and the reference variable share the same memory location.
- Changing the value through the reference also changes the original variable.
### Syntax:
float x = 455;  
float &y = x;
### Example:
cout << x; // 455   
cout << y; // 455   
If:     
y = 500;    
Then:   
x = 500     
y = 500

# Type Casting 
- Type Casting means converting one data type into another.
### Syntax:
(float)a    
float(a)
- Converts an integer into a float.     
(int)b  
int(b)
- Converts a float into an integer.
- The decimal part is removed.

### Example:
int a = 45;     
float b = 45.46;

a + b       = 90.46     
a + int(b)  = 90    
a + (int)b  = 90

- (int)b and int(b) perform the same operation.
Only the syntax is different.

## Expression 

- An expression is a combination of variables, values, and operators that produces a result.

### Examples:
a + b   
a - b   
a * b   
a / b   
a + int(b)  
(a + b) / 2
- Every expression performs a calculation and returns a value.