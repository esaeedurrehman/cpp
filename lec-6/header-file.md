# Header Files

- Header files provide ready-made functions and features.
- They are included using #include.


## There are two types of header files:

### 1. System Header Files
   - Provided by the compiler.
   - Included using angle brackets < >.
   ####  Example:
     #include <iostream>
     #include <cmath>
- < >  → System Header Files

### 2. User Defined Header Files
   - Created by the programmer.
   - Included using double quotes " ".
   - Compiler first searches the current project folder.
   - If the file is not found, it gives an error.
   #### Example:
     #include "this.h"
     #include "student.h"
     #include "math.h"

- " "  → User Defined Header Files

#### #include "this.h"  
- If the file `this.h` is not present in the current directory, the compiler will produce an error.