# Break and Continue Statement
## Break Statement

- break is used to immediately terminate the loop.
- When break is executed, the loop stops completely.
- Control moves to the first statement after the loop.

### Syntax

```cpp
break;
```
### Example
```cpp
#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
        {
            break;
        }

        cout << i << endl;
    }

    return 0;
}
```

### Output
```text
0
1
```


## Continue Statement

- continue is used to skip the current iteration of the loop.
- It does not terminate the loop.
- The loop continues with the next iteration.

### Syntax

```cpp
continue;
``` 

### Example

```cpp
#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
        {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}
```

### Output

```text
0
1
3
4
5
...
39
```


