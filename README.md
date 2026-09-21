# C++ Beginner Introduction

> A beginner-friendly introduction to the basic concepts of C++.

---

## 0. Basic Structure of a C++ Program

A basic C++ program usually looks like this:

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Your code goes here

    return 0;
}
```

### What do these lines mean?

```cpp
#include <iostream>
```

This allows us to use input and output features such as `cin` and `cout`.

```cpp
using namespace std;
```

This allows us to write:

```cpp
cout
cin
string
```

instead of:

```cpp
std::cout
std::cin
std::string
```

> **IMPORTANT:** Remember to put `;` at the end of most statements.

---

# 1. Output

We can use `cout` to output something to the console.

```cpp
cout << "hello world";
```

You can output variables as well:

```cpp
int age = 18;

cout << age;
```

## Multiple outputs

You can connect multiple outputs using `<<`.

```cpp
cout << "My age is " << age;
```

For example:

```cpp
int age = 18;
string name = "John";

cout << "My name is " << name << " and I am " << age << " years old.";
```

## Changing lines

Use `endl` to move to a new line.

```cpp
cout << "Hello" << endl;
cout << "World";
```

Output:

```text
Hello
World
```

---

# 2. Data Types and Variables

A **variable** is a container used to store a value.

Some basic C++ data types are:

| Data type | Meaning                  | Example   |
| --------- | ------------------------ | --------- |
| `int`     | Integer                  | `20`      |
| `double`  | Decimal number           | `3.14159` |
| `char`    | A single character       | `'A'`     |
| `string`  | A sequence of characters | `"Hello"` |
| `bool`    | True or false            | `true`    |

## Declaring a variable

The basic syntax is:

```cpp
type variableName = value;
```

For example:

```cpp
int newVariable = 20;
string newVariable2 = "hello";
```

---

## Changing variable values

The value of a variable can be changed after it has been declared.

```cpp
int newVariable = 20;

newVariable = 21;
newVariable = 60 * 5;
newVariable = newVariable + 1;
```

Similarly:

```cpp
string newVariable2 = "hello";

newVariable2 = "no hello";
```

The variable keeps its name, while its stored value changes.

---

# 3. Naming Conventions

Good variable names make your code much easier to understand.

### Recommended rules

Use names that describe what the variable stores:

```cpp
int age;
double temperature;
string studentName;
```

Avoid meaningless names such as:

```cpp
int x;
int a;
int abc;
```

unless the variable is being used for something very simple, such as a loop counter.

### camelCase

A common convention in C++ is **camelCase**:

```cpp
int studentAge;
double examScore;
string firstName;
```

The first word starts with a lowercase letter, while subsequent words start with uppercase letters.

### Constants

Constants are values that should not change.

A common convention is to use `UPPER_CASE`:

```cpp
const double PI = 3.141592653589793;
const int MAX_SCORE = 100;
```

### Important

Variable names should:

* Describe the purpose of the variable
* Avoid unnecessary abbreviations
* Be consistent throughout your program
* Not contain spaces

For example:

```cpp
int studentAge;
```

is much clearer than:

```cpp
int sa;
```

---

# 4. Input

We can use `cin` to receive input from the user.

> **BE CAREFUL:** `cin` uses `>>`, while `cout` uses `<<`.

First, create a variable to store the input:

```cpp
int inputVal = 0;
```

Then:

```cpp
cin >> inputVal;
```

We can print the value afterwards:

```cpp
cout << inputVal;
```

A complete example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int inputVal = 0;

    cin >> inputVal;

    cout << inputVal;

    return 0;
}
```

If the user enters:

```text
25
```

the program outputs:

```text
25
```

---

# 5. Comparisons and `if-else`

C++ provides several comparison operators.

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `<`      | Less than                |
| `>`      | Greater than             |
| `<=`     | Less than or equal to    |
| `>=`     | Greater than or equal to |

> **IMPORTANT:** `==` means comparison.
> `=` means assignment.

For example:

```cpp
int test = 68;

cout << (test == 68);
```

The result is:

```text
1
```

because `test` is equal to `68`.

In C++, `true` is normally represented by `1`, while `false` is represented by `0` when printed as an integer.

---

## `if-else`

We can use comparisons with `if`, `else if`, and `else`.

```cpp
int test = 68;

if (test == 67)
{
    cout << "test is 67";
}
else if (test == 68)
{
    cout << "test is 68";
}
else
{
    cout << "test is not 67 or 68";
}
```

The program checks the conditions from top to bottom.

Once one condition is true, its corresponding block is executed.

---

# 6. Strings

A `string` stores a sequence of characters.

```cpp
string testString = "SunShengZhe5Nv1";
```

---

## 6.1 Concatenation

You can combine two strings using `+`.

```cpp
testString = testString + " yes";

cout << testString;
```

You can also directly combine strings:

```cpp
string firstName = "John";
string lastName = "Smith";

string fullName = firstName + " " + lastName;

cout << fullName;
```

Output:

```text
John Smith
```

---

## 6.2 String Length

Use `.length()` to find the number of characters in a string.

```cpp
cout << testString.length();
```

For example:

```cpp
string word = "Hello";

cout << word.length();
```

Output:

```text
5
```

---

## 6.3 Accessing Individual Characters

You can access a character using:

```cpp
stringName[index]
```

For example:

```cpp
string testString = "Hello";

cout << testString[0];
```

Output:

```text
H
```

### IMPORTANT

String indexing starts from **0**.

For:

```text
H e l l o
0 1 2 3 4
```

Therefore:

```cpp
testString[0]  // H
testString[1]  // e
testString[2]  // l
testString[4]  // o
```

The last character is at:

```text
length - 1
```

---

## 6.4 Substrings

You can extract part of a string using:

```cpp
string.substr(startingPosition, length)
```

For example:

```cpp
string testString = "Hello World";

cout << testString.substr(1, 3);
```

Output:

```text
ell
```

The first number tells C++ where to start.

The second number tells C++ how many characters to take.

---

# 7. `for` Loops

A `for` loop is used to repeat code.

Basic structure:

```cpp
for (initialisation; condition; update)
{
    // code to repeat
}
```

For example:

```cpp
for (int i = 0; i < 20; i++)
{
    cout << i << endl;
}
```

This prints:

```text
0
1
2
3
...
19
```

### Understanding the loop

```cpp
for (int i = 0; i < 20; i++)
```

There are three parts:

```text
int i = 0
```

Starting value.

```text
i < 20
```

Condition for continuing the loop.

```text
i++
```

Increase `i` by 1 after each iteration.

---

# 8. `while` Loops

A `while` loop repeats code **while a condition is true**.

Basic structure:

```cpp
while (condition)
{
    // code to repeat
}
```

For example:

```cpp
int j = 0;

while (j < 5)
{
    cout << j << endl;
    j++;
}
```

Output:

```text
0
1
2
3
4
```

The loop stops when:

```text
j < 5
```

becomes false.

### IMPORTANT

Make sure something inside the loop eventually changes the condition.

For example:

```cpp
int j = 0;

while (j < 5)
{
    j++;
}
```

If you forget `j++`, the condition will always remain true and you can create an **infinite loop**.

---

# 9. Arrays

An array allows you to store multiple values of the **same data type**.

For example:

```cpp
string cars[4];
```

This creates an array that can store 4 strings.

---

## 9.1 Assigning Values

You can assign values to individual elements:

```cpp
cars[0] = "car";
cars[1] = "carrr";
cars[2] = "carrrrrr";
cars[3] = "carrrrrrrr";
```

You can access an element using its index:

```cpp
cout << cars[2];
```

Output:

```text
carrrrrr
```

---

## IMPORTANT: Array Indexing Starts at 0

If an array has 4 elements:

```cpp
string cars[4];
```

the indexes are:

```text
Index:  0      1       2       3
       ┌──────┬───────┬───────┬───────┐
       │ car  │ carrr │ ...   │ ...   │
       └──────┴───────┴───────┴───────┘
```

There is **no** `cars[4]`.

The valid indexes are:

```text
0, 1, 2, 3
```

In general:

```text
last index = array size - 1
```

---

## 9.2 Initialising an Array Directly

You can also initialise an array when declaring it:

```cpp
string car_in_another_way[] = {
    "car",
    "carrr",
    "carrrr",
    "carrrr"
};
```

C++ automatically determines the size of the array.

---

## 9.3 Changing Array Values

Array values can be changed after declaration:

```cpp
cars[0] = "carr";

cout << cars[0];
```

Output:

```text
carr
```

---

# 10. Finding the Size of an Array

You can use `sizeof()` to find the amount of memory used by an array.

For example:

```cpp
string cars[4];

cout << sizeof(cars);
```

However, `sizeof()` returns the size in **bytes**.

Therefore, to find the number of elements:

```cpp
cout << sizeof(cars) / sizeof(cars[0]);
```

### Why does this work?

Suppose:

```cpp
string cars[4];
```

Then:

```cpp
sizeof(cars)
```

gives the total memory used by the entire array.

And:

```cpp
sizeof(cars[0])
```

gives the memory used by one element.

Therefore:

```cpp
sizeof(cars) / sizeof(cars[0])
```

gives:

```text
total memory / memory per element
= number of elements
```

---

# 11. Multidimensional Arrays

An array can have multiple dimensions.

For example:

```cpp
string letters[2][4];
```

This creates a 2 × 4 array.

You can access an individual element using two indexes:

```cpp
letters[0][1] = "hi";

cout << letters[0][1];
```

The structure can be visualised as:

```text
        Column
        0    1    2    3
      ┌────┬────┬────┬────┐
Row 0 │    │ hi │    │    │
      ├────┼────┼────┼────┤
Row 1 │    │    │    │    │
      └────┴────┴────┴────┘
```

Remember that both dimensions start from `0`.

---

# Quick Summary

| Concept          | Syntax / Example               |
| ---------------- | ------------------------------ |
| Output           | `cout << "Hello";`             |
| New line         | `endl`                         |
| Input            | `cin >> variable;`             |
| Integer          | `int x = 10;`                  |
| Decimal          | `double x = 3.14;`             |
| Character        | `char x = 'A';`                |
| String           | `string x = "Hello";`          |
| Boolean          | `bool x = true;`               |
| Assignment       | `x = 10;`                      |
| Equal comparison | `x == 10`                      |
| Not equal        | `x != 10`                      |
| If statement     | `if (condition)`               |
| Else             | `else`                         |
| String length    | `str.length()`                 |
| String character | `str[0]`                       |
| Substring        | `str.substr(1, 3)`             |
| For loop         | `for (...)`                    |
| While loop       | `while (...)`                  |
| Array            | `int arr[5];`                  |
| Array element    | `arr[0]`                       |
| Array size       | `sizeof(arr) / sizeof(arr[0])` |
| 2D array         | `int arr[2][4];`               |

---

# Basic Example Combining Everything

```cpp
#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << name << " is an adult." << endl;
    }
    else
    {
        cout << name << " is not an adult yet." << endl;
    }

    return 0;
}
```

This small program combines:

* Variables
* `string`
* `int`
* `cin`
* `cout`
* Comparisons
* `if-else`
* `endl`

These are the basic building blocks you will use throughout beginner C++ programming.
