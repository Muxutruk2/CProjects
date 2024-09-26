
# C Cheatsheet

| Data Type          | Size (bytes) | Range                                         | Format Specifier |
|--------------------|--------------|-----------------------------------------------|-------------------|
| char             | 1            | -128 to 127                              | %c ASCII / %d INT              |
| unsigned char    | 1            | 0 to 255                                 | %c              |
| short            | 2            | -32,768 to 32,767                        | %hd             |
| unsigned short   | 2            | 0 to 65,535                              | %hu             |
| int              | 4            | -2,147,483,648 to 2,147,483,647         | %d              |
| unsigned int     | 4            | 0 to 4,294,967,295                       | %u              |
| long             | 4 or 8       | -2,147,483,648 to 2,147,483,647         | %ld             |
| unsigned long    | 4 or 8       | 0 to 4,294,967,295 (on 32-bit) or 0 to 18,446,744,073,709,551,615 (on 64-bit) | %lu             |
| long long        | 8            | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | %lld            |
| unsigned long long | 8          | 0 to 18,446,744,073,709,551,615         | %llu            |
| float            | 4            | Approximately 1.2E-38 to 3.4E+38        | %f              |
| double           | 8            | Approximately 2.3E-308 to 1.7E+308      | %lf             |
| long double      | 8, 12, or 16 | Depends on the implementation (commonly 1.1E-4932 to 1.1E+4932) | %Lf             |
boolean | 1 | 0 or 1 | %d

## Notes
- Boolean is to be used with "#include <stdbool.h>"
- The sizes and ranges can vary based on the system architecture and compiler.
- Use sizeof(type) to check the size of a specific type on your system.
- A minimum field width can be set with a number after the percent sign. The number may be negative for aligning to the left. Examples: `%5s %-5s` 
- Floats' and doubles' decimal precision is set with a dot "." after the percent sign or minimum field width and a number of decimal digits. Examples: `%.2f (2 decimal digits) %5.2f (with minimum field width)`

## Scape sequences

\\n Newline  
\\t Tab  
\\" Quote

## Constants
Use "const" before the variable assignment to make the variable constant. Example: `const float PI = 3.1415926`

## Arithmetic operators

\+, \-, \* and / Don't have to be explained

% is the modulus operator

++ Increment and -- Decrement

### Note on Division truncation
```c
int x = 5;
int y = 2;

float z = x / y;
```

z will equal to "2.0" instead of "2.5". This is because the divisor "y" is an integer. To fix this we can change y to be a float with `float y = 2.0;`

Or if we want to keep y as int we can cast it into float in the division by adding the desired data type inside parentheses before the variable as so:
`float z = x / (float) y;`

## Augmented Assignment Operators
C provides shorthand operators to simplify common arithmetic operations.

| Operator | Equivalent to   | Example      |
|----------|-----------------|--------------|
| `+=`     | `x = x + value` | `x += 2;`    |
| `-=`     | `x = x - value` | `x -= 2;`    |
| `*=`     | `x = x * value` | `x *= 2;`    |
| `/=`     | `x = x / value` | `x /= 2;`    |
| `%=`     | `x = x % value` | `x %= 2;`    |

#### Example
```c
int x = 5;
x += 3;  // Equivalent to x = x + 3; Now x = 8
```

## User input
`scanf("%d", &variable)` Replace %d with the correct format specifier and make sure the variable is initialized

## Math functions
To use math functions, incude "math.h": `#include <math.h>`

Now we can use sqrt, pow, round, ceil, fabs (absulute), log, sin, cos, tan...

## Comparison Operators

| Operator | Description                          | Example             |
|----------|--------------------------------------|---------------------|
| `==`     | Equal to                             | `a == b`            |
| `!=`     | Not equal to                         | `a != b`            |
| `>`      | Greater than                         | `a > b`             |
| `<`      | Less than                            | `a < b`             |
| `>=`     | Greater than or equal to            | `a >= b`            |
| `<=`     | Less than or equal to               | `a <= b`            |

Sure! Here’s the section about functions in C:

## Functions in C

### Definition
A function is a block of code that performs a specific task. It is defined once and can be called multiple times throughout a program.

### Syntax
```c
return_type function_name(parameter_list) {
    // function body
    // ...
    return value; // if return_type is not void
}
```

### Components
- **Return Type**: The data type of the value returned by the function (e.g., `int`, `void`, `float`).
- **Function Name**: The name used to call the function. It must follow variable naming rules.
- **Parameter List**: A comma-separated list of parameters passed to the function. If there are no parameters, use `void`.
- **Function Body**: The code that defines what the function does.

### Example
```c
#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 10);
    printf("Sum: %d\n", sum); // Output: Sum: 15
    return 0;
}
```


### Notes
- Functions can return a value using the `return` statement.
- If no value is returned, the return type should be `void`.
- Functions can be defined in any order as long as their prototypes are declared before use.

Here's a section about ternary operators in C:

## Ternary Operators in C

### Definition
The ternary operator is a shorthand way of performing conditional expressions. It evaluates a condition and returns one of two values based on whether the condition is true or false.

### Syntax
```c
condition ? expression_if_true : expression_if_false;
```

### Components
- **Condition**: An expression that evaluates to `true` or `false`.
- **Expression if true**: The value returned if the condition is true.
- **Expression if false**: The value returned if the condition is false.

### Example
```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Using the ternary operator
    int max = (a > b) ? a : b;

    printf("Maximum: %d\n", max); // Output: Maximum: 10
    return 0;
}
```

### Use Cases
- **Simplifying code**: The ternary operator can make code more concise, especially for simple conditional assignments.
- **Inline conditions**: It allows for conditions to be evaluated and acted upon in a single line.

### Notes
- Although the ternary operator can make code shorter, excessive use can lead to reduced readability. Use it judiciously.
- The ternary operator is right associative, meaning it can be nested for multiple conditions.


## Function Prototypes in C

### Definition
A function prototype is a declaration of a function that specifies the function's name, return type, and parameters without providing the function's body. It informs the compiler about the function's signature before it is called.

### Syntax
```c
return_type function_name(parameter_type1 parameter_name1, parameter_type2 parameter_name2, ...);
```

### Example
```c
#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int result = add(5, 10);
    printf("Result: %d\n", result); // Output: Result: 15
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### Key Points
- **Declaration Before Use**: Function prototypes should be declared before any calls to the function in `main()` or other functions to avoid compiler errors.
- **Parameter Types**: The prototype specifies the types of parameters, but the parameter names are optional.
- **Return Type**: The return type must match the type of the value returned by the function.
- **Multiple Prototypes**: Multiple function prototypes can be declared together, separated by semicolons.

### Notes
- Prototypes improve code readability and help catch errors at compile time.
- They are particularly useful in large programs with multiple files, allowing for better organization and modularity.

## String Functions in C

### Overview
The following string functions from the C standard library (`<string.h>` and `<ctype.h>`) are commonly used to manipulate and analyze strings. Each function serves a specific purpose in handling character arrays (strings) in C.

### Functions

1. **`strlwr(char *str)`**
   - **Purpose**: Converts all characters in the string `str` to lowercase.
   - **Usage**: This function iterates through each character of the string and applies the `tolower()` function to convert it to lowercase.

2. **`strcat(char *dest, const char *src)`**
   - **Purpose**: Concatenates the string `src` to the end of the string `dest`.
   - **Usage**: The resulting string in `dest` includes the original `dest` string followed by `src`, and the null terminator is added at the end.

3. **`strncat(char *dest, const char *src, size_t n)`**
   - **Purpose**: Appends up to `n` characters from the string `src` to the end of the string `dest`.
   - **Usage**: This function ensures that no more than `n` characters are added from `src`, and it adds a null terminator to the resulting string.

4. **`strcpy(char *dest, const char *src)`**
   - **Purpose**: Copies the string `src` to `dest`, including the null terminator.
   - **Usage**: The `dest` string must have enough space to hold the copied string.

5. **`strncpy(char *dest, const char *src, size_t n)`**
   - **Purpose**: Copies up to `n` characters from the string `src` to `dest`.
   - **Usage**: If `src` is shorter than `n`, `dest` is padded with null bytes. If `src` is longer, only the first `n` characters are copied, and `dest` is not null-terminated unless it fits.

6. **`strlen(const char *str)`**
   - **Purpose**: Returns the length of the string `str`, excluding the null terminator.
   - **Usage**: Useful for determining how many characters are in a string.

7. **`strcmp(const char *str1, const char *str2)`**
   - **Purpose**: Compares two strings, `str1` and `str2`.
   - **Returns**: 
     - A negative value if `str1` is less than `str2`
     - Zero if they are equal
     - A positive value if `str1` is greater than `str2`

8. **`strncmp(const char *str1, const char *str2, size_t n)`**
   - **Purpose**: Compares up to the first `n` characters of `str1` and `str2`.
   - **Returns**: Similar to `strcmp`, but only compares the specified number of characters.

### Notes
- The string functions from `<string.h>` are essential for effective string manipulation in C, while `<ctype.h>` provides functions to classify and transform characters.
- Ensure proper memory management when using these functions, especially when dealing with dynamic strings or buffers to avoid buffer overflows.


## `for` Loops in C

### Definition
A `for` loop is a control flow statement that allows code to be executed repeatedly based on a given condition. It is often used when the number of iterations is known in advance.

### Syntax
```c
for (initialization; condition; increment) {
    // loop body
}
```

### Components
1. **Initialization**: This expression is executed once at the beginning of the loop. It typically initializes a loop counter.
2. **Condition**: The loop continues to execute as long as this expression evaluates to `true`. Once it becomes `false`, the loop terminates.
3. **Increment**: This expression is executed at the end of each iteration. It typically increments or decrements the loop counter.
4. **Loop Body**: The code inside the loop that is executed on each iteration.

### Example
```c
#include <stdio.h>

int main() {
    // Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```
**Output**:
```
1
2
3
4
5
```

### How It Works
1. **Initialization**: `int i = 1` is executed. The loop variable `i` is set to `1`.
2. **Condition**: `i <= 5` is checked. If `true`, the loop body executes. If `false`, the loop terminates.
3. **Loop Body**: `printf("%d\n", i);` prints the value of `i`.
4. **Increment**: `i++` increments the loop counter.

### Variations
1. **Decrementing Loop**: Decrements the counter instead of incrementing.
   ```c
   for (int i = 5; i >= 1; i--) {
       printf("%d\n", i);
   }
   ```
   Output: `5, 4, 3, 2, 1`

2. **Multiple Expressions in Initialization/Increment**: More than one variable can be initialized and incremented.
   ```c
   for (int i = 0, j = 10; i < j; i++, j--) {
       printf("i: %d, j: %d\n", i, j);
   }
   ```

3. **Empty Initialization or Increment**: It is possible to omit the initialization or increment.
   ```c
   int i = 0;
   for (; i < 5;) {
       printf("%d\n", i);
       i++;
   }
   ```

### Notes
- The `for` loop is ideal for iterating over arrays and other sequential data structures.
- Infinite loops can be created if the condition never evaluates to `false` (e.g., `for(;;)`).
Here's an updated version of the cheatsheet, with detailed explanations similar to your preferred style:

### Nested `for` Loops
A nested `for` loop occurs when you place one loop inside another. The inner loop will complete all its iterations for each single iteration of the outer loop.

#### Example
```c
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
        printf("i = %d, j = %d\n", i, j);
    }
}
```
- **Explanation**: For each value of `i`, the inner loop runs completely with different values of `j`. This results in 6 prints, as the outer loop runs 3 times and the inner loop runs 2 times for each.

---

## `while` Loops
A `while` loop allows a block of code to run repeatedly as long as a condition is true. It checks the condition *before* executing the loop body, meaning if the condition is initially false, the body will not execute at all.

### Syntax
```c
while (condition) {
    // Code to execute while condition is true
}
```

### Example
```c
int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
```
- **Explanation**: The loop will print the values of `i` from 0 to 4, incrementing `i` by 1 each time. Once `i` becomes 5, the condition is false, and the loop stops.

---

## `do while` Loops
The `do while` loop is similar to a `while` loop, but it guarantees that the code inside the loop runs *at least once* before checking the condition. After running the code, the loop condition is checked to determine if it should run again.

### Syntax
```c
do {
    // Code to execute at least once
} while (condition);
```

### Example
```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);
```
- **Explanation**: This loop prints the value of `i` from 0 to 4. Even if `i` were initialized to a value greater than 5, the loop would still run once before checking the condition.



Here’s a detailed explanation for each of the requested sections following the format you prefer:

---

## Nested `for` Loops

### Definition
A nested `for` loop is a loop inside another `for` loop. The inner loop runs its entire set of iterations for each iteration of the outer loop.

### Syntax
```c
for (initialization; condition; increment) {
    for (initialization; condition; increment) {
        // inner loop body
    }
    // outer loop body
}
```

### Example
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }
    return 0;
}
```

**Output**:
```
i = 1, j = 1
i = 1, j = 2
i = 1, j = 3
i = 2, j = 1
i = 2, j = 2
i = 2, j = 3
i = 3, j = 1
i = 3, j = 2
i = 3, j = 3
```

### Notes
- The inner loop runs entirely every time the outer loop iterates once.
- Useful in situations where you are working with 2D arrays or matrices.

---

## `while` Loop

### Definition
A `while` loop executes as long as the given condition remains true.

### Syntax
```c
while (condition) {
    // loop body
}
```

### Example
```c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```

**Output**:
```
1
2
3
4
5
```

### Notes
- The loop condition is checked before entering the loop body. If the condition is false initially, the body is never executed.
- Often used when the number of iterations is not known beforehand.

---

## `do while` Loop

### Definition
A `do while` loop is similar to a `while` loop but guarantees at least one execution of the loop body.

### Syntax
```c
do {
    // loop body
} while (condition);
```

### Example
```c
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}
```

**Output**:
```
1
2
3
4
5
```

### Notes
- The loop body is executed first, and then the condition is checked.
- Useful when you want to ensure the loop runs at least once, regardless of the condition.

---

## `break` and `continue`

### `break`
- **Purpose**: Exits the loop immediately, skipping the remaining iterations.
- **Use Case**: When you want to terminate the loop based on some condition.

### Example
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break;
    }
    printf("%d\n", i);
}
```
**Output**:
```
1
2
```

### `continue`
- **Purpose**: Skips the current iteration and moves to the next iteration.
- **Use Case**: When you want to skip certain iterations based on a condition.

### Example
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;
    }
    printf("%d\n", i);
}
```

**Output**:
```
1
2
4
5
```

---

## Arrays and How to Loop Over Them

### Definition
An array is a collection of elements of the same data type stored in contiguous memory locations.

### Syntax
```c
data_type array_name[array_size];
```

### Example
```c
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

**Output**:
```
1 2 3 4 5
```

### Notes
- Arrays are zero-indexed, meaning the first element is at index 0.
- You can loop through arrays using a `for` loop, as shown above.
- To make it so you dont have to change `i < 5` when changing the array size, you can get the aray size with `sizeof(arr) / sizeof(arr[0])`

## Strings

### Definition
In C, a string is a sequence of characters terminated by a null character (`\0`).

### Syntax
```c
char str[] = "Hello";
```

### Example
```c
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    printf("%s\n", str);
    return 0;
}
```

**Output**:
```
Hello, World!
```

### Notes
- Strings are essentially arrays of characters.

## Arrays of Strings (`char[][]`)

### Definition
An array of strings is a 2D array where each row is a string.

### Syntax
```c
char arr[][10] = {"Hello", "World"};
```

### Example
```c
#include <stdio.h>

int main() {
    char arr[2][10] = {"Hello", "World"};
    for (int i = 0; i < 2; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
```

**Output**:
```
Hello
World
```

## Random Numbers

### Definition
To generate random numbers in C, use the `rand()` function from `<stdlib.h>`.

### Example
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Random Number: %d\n", rand() % 100);  // Generates a number between 0 and 99
    return 0;
}
```

### Notes
- Use `srand(time(0))` to seed the random number generator for more randomness.

## Pointers and Memory Addresses

### Definition
A pointer is a variable that stores the memory address of another variable.

| Address | Value |
|---------|-------|
| 0x700   | 234   | 
| 0x702   | 0x700 |

0x702 contains the Address of where the value 234 is.


### Syntax
```c
data_type *pointer_name;
```

### Example
```c
#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", *p);  // Dereferencing the pointer
    printf("Address of a: %p\n", p);  // Printing the address
    return 0;
}
```

**Output**:
```
Value of a: 10
Address of a: 0x7ffeeadf6abc
```

### Notes
- `&` is the address-of operator, it can be translated as "the address of", and `*` is the dereferencing operator.

## `struct`s

### Definition
A `struct` is a user-defined data type that allows grouping variables of different types.

### Syntax
```c
struct struct_name {
    data_type member1;
    data_type member2;
};
```

### Example
```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1 = {"Alice", 30};
    printf("Name: %s, Age: %d\n", person1.name, person1.age);
    return 0;
}
```

## Arrays of `struct`s

### Definition
An array of `struct`s allows storing multiple instances of a `struct`.

### Example
```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person people[2] = {{"Alice", 30}, {"Bob", 25}};
    for (int i = 0; i < 2; i++) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }
    return 0;
}
```

---

## `typedef`

### Definition
`typedef` is used to create an alias for a data type.

### Syntax
```c
typedef existing_type new_name;
```

### Example
```c
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p1 = {"Alice", 30};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}
```

---

### Reading and Writing Files

File handling in C allows you to perform operations like reading from and writing to files.

### Key Functions:
- **`fopen()`**: Opens a file. You must specify the file name and mode (`r`, `w`, `a`, etc.).
- **`fprintf()`**: Writes formatted text to a file.
- **`fscanf()`**: Reads formatted text from a file.
- **`fclose()`**: Closes a file when operations are done.

### File Modes:
- `"r"`: Open for reading. File must exist.
- `"w"`: Open for writing. Creates the file if it doesn’t exist or truncates it if it does.
- `"a"`: Open for appending. Data is added to the end of the file.

### Example (Writing to a File):
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    fprintf(file, "Hello, World!\n");
    fclose(file);
    
    return 0;
}
```

### Example (Reading from a File):
```c
#include <stdio.h>

int main() {
    char buffer[100];
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, 100, file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    
    return 0;
}
```

### Notes:
- Always close files using `fclose()` to free resources.
- Check if `fopen()` returns `NULL` to handle errors (like the file not existing).

---

## Stack vs Heap

Memory in C is primarily managed using two areas: **Stack** and **Heap**.

### Stack

**Definition**: 
The stack is a region of memory that stores local variables and function call information. It's managed automatically, and memory is freed when functions return.

- **Managed Automatically**: When a function is called, the local variables and function parameters are stored on the stack. When the function exits, the memory is automatically reclaimed.
- **Limited Size**: The size of the stack is fixed and can overflow if you allocate too many local variables (stack overflow).
- **Fast Access**: Accessing variables on the stack is faster because memory is contiguous and handled directly by the processor.

### Example (Stack Allocation):
```c
#include <stdio.h>

void function() {
    int localVariable = 10; // Allocated on the stack
    printf("Local variable: %d\n", localVariable);
}

int main() {
    function();
    return 0;
}
```

### Heap

**Definition**: 
The heap is a region of memory used for dynamic memory allocation. It's managed manually using functions like `malloc()` and `free()`.

- **Manually Managed**: Memory on the heap must be allocated and freed explicitly.
- **Dynamic Size**: The heap can grow and shrink at runtime, allowing the program to allocate as much memory as needed (subject to system limits).
- **Slower Access**: Accessing heap memory is slower than stack memory due to its dynamic nature and non-contiguous storage.

### Allocating Memory on the Heap

To allocate memory dynamically on the heap, use the `malloc()` function:

```c
void *malloc(size_t size);
```

- **Parameters**: The size (in bytes) of memory to allocate.
- **Return Value**: Returns a pointer to the allocated memory or `NULL` if allocation fails.

### Example (Heap Allocation):
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int));  // Allocate memory for 5 integers

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2;  // Assign values
        printf("%d ", ptr[i]);
    }

    free(ptr);  // Free the allocated memory

    return 0;
}
```

### Freeing Memory

When you allocate memory using `malloc()`, you must release it using `free()` to avoid memory leaks.

```c
void free(void *ptr);
```

### Example (Freeing Memory):
```c
free(ptr);  // Releases the allocated memory
```

### Resizing Memory

Use `realloc()` to resize previously allocated memory:

```c
void *realloc(void *ptr, size_t new_size);
```

- **Parameters**: 
  - `ptr`: A pointer to the existing memory block.
  - `new_size`: The new size (in bytes) of memory.
  
- **Return Value**: Returns a pointer to the new memory block or `NULL` if resizing fails.

### Example (Resizing Memory):
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(3 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        ptr[i] = i;
    }

    // Resize memory to hold 5 integers
    ptr = (int*)realloc(ptr, 5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    for (int i = 3; i < 5; i++) {
        ptr[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);  // Free the allocated memory

    return 0;
}
```

### Key Points on Heap Allocation:
1. **`malloc()`**: Allocates a block of memory but does not initialize it. Always check if `malloc()` returns `NULL`.
2. **`calloc()`**: Allocates memory and initializes it to zero.
   ```c
   void *calloc(size_t num, size_t size);
   ```
   - Example: `int *ptr = (int*)calloc(5, sizeof(int));`
3. **`realloc()`**: Resizes an existing memory block.
4. **`free()`**: Always free heap memory when it's no longer needed to prevent memory leaks.
5. **Fragmentation**: Over time, allocating and freeing memory can cause fragmentation, where memory is scattered in chunks. This can lead to inefficient memory usage.

---

### Differences Between Stack and Heap

| Feature              | Stack                           | Heap                         |
|----------------------|---------------------------------|------------------------------|
| **Size**             | Limited and usually small       | Can be large, dynamic size    |
| **Speed**            | Faster access                   | Slower due to dynamic allocation |
| **Management**       | Automatically managed           | Manually managed (malloc/free) |
| **Lifetime**         | Local to the function, ends after function returns | Exists until explicitly freed |
| **Memory Access**    | Contiguous memory               | Non-contiguous memory         |
| **Error Handling**   | Stack overflow (rare)           | Memory leaks, fragmentation   |

---

With these details, you now have a deep understanding of both stack and heap memory, how to allocate memory dynamically, and how to manage it effectively!


