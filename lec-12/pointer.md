# Pointer
- A pointer is a data type.
- It stores the address of another data type (variable).
- A pointer does not store the actual value.
- It stores the memory address of a variable.

### Example
```cpp
int a = 3;
int* b = &a;
```

## Address-of Operator (`&`)    
- `& `is called the **Address-of Operator**.
- It returns the memory address of a variable.

### Example
```cpp
int a = 3;
cout << &a << endl;
```

## Dereference Operator (`*`)
- `*` is called the **Dereference Operator** or **Value-at Operator**.
- It is used to access the value stored at the address hold by a pointer.

### Example
```cpp
int a = 3;
int *b = &a;
cout << *b << endl;
```


## Pointer to Pointer
- A pointer to pointer is a pointer that stores the address of another pointer.
- It is declared using two asterisks (`**`).

### Syntax
```cpp
int **c = &b;
```

### Example 
```cpp
int a = 3;
int *b = &a;
int **c = &b;

cout << c << endl;
cout << *c << endl;
cout << **c << endl;
```