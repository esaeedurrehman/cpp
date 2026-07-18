## Structure
- A structure is a user-defined data type.
- It groups different data types under one name.
- Each member has its own separate memory.
- Members are accessed using the dot (`.`) operator.

### Syntax
```cpp
struct Employee
{
    int id;
    char favChar;
    float salary;
};
```

### Example
```cpp
Employee harry;

harry.id = 1;
harry.favChar = 'C';
harry.salary = 120000;
```

## Typedef
- `typedef` is used to create a short name (alias) for a data type.
- It avoids writing `struct` repeatedly.
- It makes the code shorter and more readable.

### Syntax
```cpp
typedef struct Employee
{
    int id;
    char favChar;
    float salary;
} ep;
```

### Example
```cpp
ep harry;
```

## Union
- A union is a user-defined data type.
- All members share the same memory location.
- Only one member should be used at a time.
- The size of a union is equal to the size of its largest data member.

### Syntax
```cpp
union Money
{
    int rice;
    char car;
    float pounds;
};
```

### Example
```cpp
Money m1;

m1.rice = 34;
cout << m1.rice;
```

## Enum
- An enum is a user-defined data type.
- It is used to assign names to integer constants.
- By default, values start from `0`.

### Syntax
```cpp
enum Meal
{
    breakfast,
    lunch,
    dinner
};
```

### Example
```cpp
Meal m1 = lunch;

cout << m1;
```

### Default Values
```text
breakfast = 0
lunch = 1
dinner = 2
```