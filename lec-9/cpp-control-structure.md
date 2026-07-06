# C++ Control Structures
### Basic Control Structures:
1. Sequence Structure
2. Selection Structure
3. Loop Structure

## Sequence Structure
- Statements execute one after another in order.
- The program starts from Entry.
- Each statement is executed sequentially.
- After all statements are executed, the program exits.

### Flow:   
Entry --> Action 1 --> Action 2 --> Exit




## Selection Structure
- Selection Structure is used to make decisions.
- A condition is evaluated.
- If the condition is True, Action 1 is executed.
- If the condition is False, Action 2 is executed.
- After execution, the program exits.

### Flow
Entry --> Condition --> True/False --> Action --> Exit

### Types of Selection Structure
#### 1. if-else Statement
- Used to make a simple decision.
- Executes one block of code if the condition is True.
- Executes another block of code if the condition is False.
- Best for two possible outcomes.

#### 2. if-else Ladder
- Used when multiple conditions need to be checked.
- Conditions are evaluated from top to bottom.
- The first True condition is executed.
- If none of the conditions are True, the `else` block is executed.

#### 3. switch Case
- Used to select one block of code from multiple options.
- Works with fixed values (e.g., 1, 2, 3, characters).
- Each option is written using the `case` keyword.
- The `default` case executes if no case matches.
    

# Loop Structure
- Loop Structure is used to repeat a block of code.
- A condition is checked before each iteration.
- If the condition is True, the loop continues.
- If the condition is False, the program exits the loop.

### Flow:
Entry --> Condition --> True --> Action 1 --> Repeat    
Entry --> Condition --> False --> Action 2 --> Exit