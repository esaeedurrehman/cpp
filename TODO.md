- can we access a variable from global scope in local scope & vice versa - yes,no
- why cannot `cout` in global
- is this a valid code:
```cpp
#include <iostream>

// can we access a variable from global scope in local scope - yes,no



int main()
{
    using namespace std;

    cout << "Hello World";
    cout << "Hello World";
    cout << "Hello World";
    cout << "Hello World";
    cout << "Hello World";
    cout << "Hello World";
    cout << "Hello World";
    cout << "Hello World";
    cout << "Hello World";

    return 0;
}
```

- what was missing in C that evolved cpp

- why cpp is high performance language compared to JS

- can we run a cpp file have NO main fn
- can write some other name that we can run
- how to store a very larg number
- full Account takeover
 
 // TODO: WHY
    cout << "The value of a<b is \endl";




## Question
# why cannot `cout` in global?
# Answer
- cout cannot be used in global scope because it is an   executable statement.
- Executable statements are allowed only inside functions.
- Global scope is used for declarations such as variables, functions, and classes.

# Executive Statement
- Executable statements are statements that are executed when the program runs.
- Executable statements are allowed only inside functions.

# what was missing in C that evolved cpp?
- C was a powerful language, but it lacked several features  needed for developing large and complex programs. 
- Therefore, C++ was developed by adding Object-Oriented Programming (OOP) features to C.

- Therefore, Bjarne Stroustrup created C++ by adding new features to C.

# Missing Features in C
1. Classes and Objects
2. Encapsulation
3. Inheritance
4. Polymorphism
5. Difficulty in Managing Large Programs

## C++ vs JavaScript 
- C++ is a compiled language → runs directly as machine code → very fast
JavaScript is an interpreted/JIT language → runs inside an engine → slower than C++
C++ gives manual memory control → more efficient
JavaScript uses automatic garbage collection → extra overhead
C++ is closer to hardware → high performance
JavaScript is high-level → easier but less fast