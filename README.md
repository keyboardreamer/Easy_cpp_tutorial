# C++ Beginner Introduction

> A beginner-friendly introduction to the basic concepts covered in `tutorial.cpp`.

---

## 0. Basic Structure of a C++ Program

A basic C++ program usually looks like this:

```cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // Your code goes here
    return 0;
}
```

### What do these lines mean?

- `#include <iostream>` provides console input and output with `cin` and `cout`.
- `#include <fstream>` provides file streams for reading and writing files.
- `#include <vector>` provides the `vector` container.
- `#include <string>` provides `string`.
- `using namespace std;` lets you write `cout`, `cin`, `string`, `vector`, and other standard-library names without prefixing them with `std::`.

> **IMPORTANT:** Most statements end with `;`. Some lines, such as `if`, `for`, and function declarations, introduce a block and do not end with a semicolon at that point.

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

## Multiple outputs and new lines

Connect multiple outputs using `<<`.

```cpp
cout << "My age is " << age << endl;
cout << "Hello" << endl;
cout << "World";
```

`endl` moves output to a new line. It also flushes the output stream.

---

# 2. Data Types and Variables

A **variable** stores a value. The code introduces these types:

| Data type | Meaning | Example |
|---|---|---|
| `int` | Integer | `20` |
| `double` | Decimal / floating-point number | `3.14` |
| `char` | A single character | `'A'` |
| `string` | A sequence of characters | `"hello123"` |
| `bool` | `true` or `false` | `true` |

## Declaring a variable

```cpp
type variableName = value;
```

Examples from the code:

```cpp
int newVariable = 20;
string newVariable2 = "hello123";
```

## Changing a variable's value

```cpp
newVariable = 21;
newVariable = 60 * 5;
newVariable = newVariable + 1;
newVariable += 1;
```

`newVariable += 1;` is shorthand for adding 1 to the current value. The same pattern works with other arithmetic operators, such as `-=`, `*=`, and `/=`.

A string variable can also be reassigned:

```cpp
newVariable2 = "no hello";
```

---

# 3. Input

Use `cin` to receive input from the user. `cin` uses `>>`, while `cout` uses `<<`.

```cpp
int inputVal = 0;
cin >> inputVal;
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

If the user enters `25`, the program outputs `25`.

---

# 4. Comparisons and `if-else`

Comparison operators used in the code:

| Operator | Meaning |
|---|---|
| `==` | Equal to |
| `!=` | Not equal to |
| `<` | Less than |
| `>` | Greater than |
| `<=` | Less than or equal to |
| `>=` | Greater than or equal to |

> **IMPORTANT:** `==` compares two values. `=` assigns a value to a variable.

For example:

```cpp
int test = 67;

if (test == 67)
{
    cout << "test is 67";
}
else if (test == 68)
{
    cout << "test is 68";
}
else if (test == 69)
{
    cout << "test is 69";
}
else if (test == 70)
{
    cout << "test is 70";
}
else
{
    cout << "test is not 67, 68, 69, or 70";
}
```

The conditions are checked from top to bottom. Once a condition is true, its block runs and the remaining branches are skipped.

A comparison produces a Boolean result. When a Boolean is printed with the default stream settings, `true` normally appears as `1` and `false` as `0`.

---

# 5. Strings

A `string` stores a sequence of characters.

```cpp
string testString = "banana";
```

## 5.1 Concatenation

Use `+` to join strings.

```cpp
testString = testString + " yes";
cout << testString;
```

## 5.2 String length

Use `.length()` to get the number of characters.

```cpp
string word = "Hello";
cout << word.length();
```

Output:

```text
5
```

## 5.3 Accessing individual characters

Use an index:

```cpp
string testString = "banana";
cout << testString[3];
```

Output:

```text
a
```

String indexing starts at `0`. For `"banana"`, the indexes are `0` through `5`. The last character is at index `length - 1`.

## 5.4 Substrings

Use `substr(startingPosition, length)`:

```cpp
string testString = "banana";
cout << testString.substr(2, 4);
```

Output:

```text
nana
```

The first argument is the starting index, and the second argument is the number of characters to take.

---

# 6. Characters and ASCII

The code introduces `char` and the relationship between characters and ASCII codes.

ASCII assigns numeric codes to common characters. For example:

```cpp
cout << char(65);
```

Output:

```text
A
```

You can convert a character to its integer code:

```cpp
cout << int('A');
```

Output:

```text
65
```

A `char` can also be incremented:

```cpp
char incChar = 'A';
cout << ++incChar;
```

Output:

```text
B
```

`++incChar` increments the character value before it is output. ASCII is a character encoding standard; the familiar ASCII range is 0 to 127.

---

# 7. `for` Loops

A `for` loop repeats a block of code.

```cpp
for (initialisation; condition; update)
{
    // code to repeat
}
```

Example based on the code:

```cpp
for (int i = 0; i < 20; i++)
{
    cout << i << endl;
}
```

This prints the integers from `0` through `19`.

The three parts are:

- `int i = 0`: initialisation, performed once.
- `i < 20`: condition checked before each iteration.
- `i++`: increment `i` after each iteration.

---

# 8. `while` Loops

A `while` loop repeats its block as long as its condition is true.

```cpp
int j = 0;

while (j < 5)
{
    cout << j << endl;
    j++;
}
```

This prints `0` through `4`.

In the uploaded code, the example is `while (j < 0)` with `j` starting at `0`, so the body runs zero times. The condition is false immediately.

> **IMPORTANT:** Ensure that the loop can eventually stop. If the condition stays true forever, the program can enter an infinite loop.

---

# 9. Arrays

An array stores multiple elements of the same type. Its size is fixed when declared.

```cpp
string cars[4];
```

This creates space for four strings.

## 9.1 Assigning and accessing values

```cpp
cars[0] = "car";
cars[1] = "carrr";
cars[2] = "carrrrrr";
cars[3] = "carrrrrrrr";

cout << cars[2];
```

Output:

```text
carrrrrr
```

In the original code, `cars[3]` is not assigned before use. Assign a value before relying on that element.

## Array indexing starts at 0

For `string cars[4]`, valid indexes are `0`, `1`, `2`, and `3`. There is no valid `cars[4]`.

The last valid index is:

```text
array size - 1
```

For example, `string cars[4]` has **4 elements**, with indexes `0`, `1`, `2`, and `3`. Therefore, its last valid index is `4 - 1 = 3`. The array size counts how many elements exist, while the index counts from `0`. Accessing `cars[4]` is out of bounds and causes undefined behavior in C++.

## 9.2 Initialising an array directly

```cpp
string car_in_another_way[] = {
    "car",
    "carrr",
    "carrrr",
    "carrrr"
};
```

The compiler determines the number of elements from the initialiser.

## 9.3 Character arrays

The code demonstrates three ways to initialise character arrays:

```cpp
char charA[10] = {'B', 'e', 'i', 'J', 'i', 'n', 'g'};
char charB[10] = "BeiJing";
char charC[10] = {"BeiJing"};
```

These are character arrays with space for 10 `char` elements. When a character array is initialised from a string literal, space is needed for the terminating null character `'\0'` as well as the visible characters.

## 9.4 Changing an array value

```cpp
cars[0] = "carr";
cout << cars[0];
```

Array elements can be changed after declaration.

## 9.5 Filling memory with `memset()`

The code includes `<cstring>` to use `memset()`:

```cpp
char charA[10] = {'B', 'e', 'i', 'J', 'i', 'n', 'g'};
memset(charA, 'k', sizeof(charA));
```

`memset(destination, value, numberOfBytes)` fills the specified number of bytes with the given byte value. Here, every byte in `charA` is set to the byte representation of `'k'`, so the array no longer contains `"BeiJing"`.

Use `memset()` carefully. It works byte by byte, so it is most straightforward for character buffers and setting memory to zero. It is generally not the right way to assign an arbitrary nonzero integer value to every element of an integer array.

---

# 10. Finding the Size of an Array

For a built-in array, `sizeof()` gives the number of bytes occupied by the object.

```cpp
string cars[4];
cout << sizeof(cars) / sizeof(cars[0]);
```

For a built-in array, this division gives the number of elements because the total array size is divided by the size of one element.

> **Correction to the code comment:** `sizeof()` reports **bytes**, not bits.

This technique applies to built-in arrays in the scope where the array type and size are known. It does not work the same way for a `vector` or a pointer.

---

# 11. Multidimensional Arrays

An array can have more than one dimension.

```cpp
string letters[2][4];
letters[0][1] = "hi";
cout << letters[0][1];
```

This creates a 2-row by 4-column array. Both indexes start at `0`.

```text
        Column
        0    1    2    3
      ┌────┬────┬────┬────┐
Row 0 │    │ hi │    │    │
      ├────┼────┼────┼────┤
Row 1 │    │    │    │    │
      └────┴────┴────┴────┘
```

---

# 12. Functions

A function groups code that can be called when needed. It may take inputs called **parameters** and may return a value.

Functions in the uploaded code are declared before `main()`.

## 12.1 A `void` function

```cpp
void returnUserName(string userName)
{
    cout << "the user is " << userName;
}
```

- `void` means the function does not return a value.
- `string userName` is a parameter.
- Calling `returnUserName("theUser101");` prints `the user is theUser101`.

## 12.2 A function that returns `bool`

```cpp
bool isOdd(int Value)
{
    return (Value % 2 == 1);
}
```

The `%` operator gives the remainder after division. For non-negative integers, `Value % 2 == 1` is true when the number is odd.

Example:

```cpp
cout << isOdd(22);
```

Output:

```text
0
```

The function returns a Boolean value, which is printed as `0` or `1` by default.

## 12.3 A function that returns an integer

```cpp
int Squared(int Value)
{
    return (Value * Value);
}
```

Example:

```cpp
cout << Squared(22);
```

Output:

```text
484
```

## 12.4 A function that returns a string

```cpp
string First3Letter(string userName)
{
    return userName.substr(0, 3);
}
```

Example:

```cpp
cout << First3Letter("testName");
```

Output:

```text
tes
```

The function returns the first three characters when the input contains at least three characters.

## 12.5 Calling a function

A function definition explains what it does. A function call runs it.

```cpp
returnUserName("theUser101");
cout << isOdd(22) << endl;
cout << Squared(22) << endl;
cout << First3Letter("testName") << endl;
```

---

# 13. Local and Global Variables

A **local variable** is declared inside a function or block and is only accessible within its scope.

For example, the variable `i` declared in this loop is only available inside the loop:

```cpp
for (int i = 0; i < 2; i++)
{
    cout << i;
}
// Using i here would cause an error.
```

A **global variable** is declared outside functions, usually near the top of the file. The uploaded code declares:

```cpp
int globalCount = 67;
```

It can be accessed in `main()` and other functions after its declaration, subject to normal scope and visibility rules:

```cpp
cout << globalCount + 20;
```

Output:

```text
87
```

---

# 14. Pointers and Memory Addresses

A pointer stores a memory address.

```cpp
int storeVal = 10;
int *Address = &storeVal;
```

- `&storeVal` obtains the address of `storeVal`.
- `int *Address` declares a pointer to an integer.
- `Address` contains the address.
- `*Address` dereferences the pointer to access the value stored at that address.

Example:

```cpp
cout << *Address;
```

Output:

```text
10
```

Printing `Address` itself displays an address representation, which varies between program runs and systems.

## 14.1 Using a pointer to change a variable inside a function

The code defines this function:

```cpp
void changeValue(int *p)
{
    *p = 32;
}
```

It can be called like this:

```cpp
int p = 0;
changeValue(&p);
cout << p;  // 32
```

Step by step:

1. `&p` passes the memory address of the variable `p`.
2. The function parameter `int *p` receives that address.
3. `*p = 32` follows the address and changes the original variable's value.
4. When the function returns, the original variable has the value `32`.

The pointer parameter lets the function modify the caller's variable. The local parameter named `p` inside the function is separate from the variable named `p` in `main()`, even though they have the same name.

---

# 15. Structures (`struct`)

A **structure** groups related variables, potentially of different data types, under one custom type. Use `struct` when several pieces of information belong together.

```cpp
struct Student
{
    string name;
    int age;
    double grade;
};
```

This defines a new type called `Student` with three members: `name`, `age`, and `grade`. The semicolon after the closing brace is required.

## 15.1 Creating and using a structure variable

```cpp
Student student1;
student1.name = "Alex";
student1.age = 18;
student1.grade = 87.5;

cout << student1.name << endl;
cout << student1.age << endl;
cout << student1.grade << endl;
```

Use the dot operator (`.`) to access or change a member of a structure variable.

## 15.2 Initialising a structure when declaring it

You can also provide the member values when creating the variable:

```cpp
Student student2 = {"Jamie", 19, 91.0};
cout << student2.name;
```

The values are assigned in the order the members are declared: `name`, then `age`, then `grade`.

A structure definition creates a type. It does not, by itself, create a student variable. You create variables such as `student1` or `student2` using that type.

---

# 16. Vectors

A `vector` is a sequence container that can grow or shrink in size. The code includes `<vector>` and creates a vector of strings:

```cpp
vector<string> namelist;
namelist.push_back("hi1");
namelist.push_back("hi2");
namelist.push_back("hi3");
```

`push_back()` adds an element to the end of the vector.

You can access elements by index:

```cpp
cout << namelist[0];  // hi1
cout << namelist[1];  // hi2
cout << namelist[2];  // hi3
```

The valid indexes here are `0`, `1`, and `2`. The loop in the uploaded code uses `i <= 3`, which attempts to access `namelist[3]`, outside the valid range. Use `i < namelist.size()` instead:

```cpp
for (int i = 0; i < namelist.size(); i++)
{
    cout << namelist[i] << endl;
}
```

A `vector` can also report its number of elements using `.size()`:

```cpp
cout << namelist.size();
```

## 16.1 Removing the last element with `pop_back()`

```cpp
namelist.pop_back();
```

`pop_back()` removes the final element. In the example, the vector initially contains `"hi1"`, `"hi2"`, and `"hi3"`. After `pop_back()`, it contains only `"hi1"` and `"hi2"`.

Do not call `pop_back()` on an empty vector.

## 16.2 Iterators and common algorithms

The code includes `<algorithm>`, which provides algorithms such as `sort()`, `min_element()`, and `max_element()`.

For a vector of numbers:

```cpp
vector<int> numbers = {5, 2, 8, 1};

sort(numbers.begin(), numbers.end());

cout << numbers[0];  // 1
```

- `begin()` refers to the first element.
- `end()` refers to the position just after the last element. It is used as the end boundary and should not be dereferenced.
- `sort(numbers.begin(), numbers.end())` sorts the elements in ascending order.
- `min_element(numbers.begin(), numbers.end())` returns an iterator to the smallest element.
- `max_element(numbers.begin(), numbers.end())` returns an iterator to the largest element.

To print the minimum or maximum value, dereference the iterator:

```cpp
cout << *min_element(numbers.begin(), numbers.end());
cout << *max_element(numbers.begin(), numbers.end());
```

These algorithms compare the elements, so the element type must support the required comparison. For an empty vector, do not dereference the result of `min_element()` or `max_element()`.

---

# 17. File Manipulation

The code includes `<fstream>`, which provides file streams.

## 17.1 Writing to a file

```cpp
ofstream file("GFG.txt");
file << "Welcome to GeeksforGeeks.";
file.close();
```

- `ofstream` opens a file for output.
- If the file does not exist, it is usually created.
- Opening an existing file this way normally truncates its previous contents.
- `close()` closes the file.

The file path is interpreted relative to the program's working directory unless a path is supplied.

## 17.2 Reading from a file

```cpp
ifstream fileread("tutorial.txt");

string fileline;
while (getline(fileread, fileline))
{
    cout << fileline << endl;
}

fileread.close();
```

`ifstream` opens a file for input. `getline()` reads one line at a time. Checking the result of `getline()` in the loop is safer than using `while (!fileread.eof())`, because the read can fail before the end-of-file flag is set.

If the file cannot be opened, reading will fail, so check `if (fileread.is_open())` or `if (fileread)` when you need to handle errors.

## 17.3 Appending to a file

Use `ios::app` to append content to the end of a file:

```cpp
ofstream file("GFG.txt", ios::app);
file << endl << "新的一行" << endl;
file.close();
```

In the uploaded code, `file.open("GFG.txt", ios::app);` reuses the earlier `ofstream file` object after it was closed. That is valid.

## 17.4 Writing binary data

```cpp
int binary_inp = 33;

ofstream fout("data.bin", ios::binary);
fout.write((char *)&binary_inp, sizeof(binary_inp));
fout.close();
```

`write()` writes raw bytes from the memory address of `binary_inp`. `sizeof(binary_inp)` specifies how many bytes to write.

## 17.5 Reading binary data

```cpp
int binary_out;

ifstream fin("data.bin", ios::binary);
fin.read((char *)&binary_out, sizeof(binary_out));
cout << binary_out;
fin.close();
```

If the write and read both succeed on a compatible system, this outputs `33`.

Raw binary representations of integers can vary across systems due to differences such as byte order and integer representation. This example is suitable for demonstrating binary file operations within a compatible environment.

---

# Quick Summary

| Concept | Syntax / Example |
|---|---|
| Output | `cout << "Hello";` |
| New line | `endl` |
| Input | `cin >> variable;` |
| Integer | `int x = 10;` |
| Decimal | `double x = 3.14;` |
| Character | `char x = 'A';` |
| String | `string x = "Hello";` |
| Boolean | `bool x = true;` |
| Assignment | `x = 10;` |
| Add and assign | `x += 1;` |
| Equality comparison | `x == 10` |
| If statement | `if (condition)` |
| String length | `str.length()` |
| String character | `str[0]` |
| Substring | `str.substr(0, 3)` |
| For loop | `for (int i = 0; i < n; i++)` |
| While loop | `while (condition)` |
| Array | `int arr[5];` |
| Array element | `arr[0]` |
| Built-in array element count | `sizeof(arr) / sizeof(arr[0])` |
| 2D array | `int arr[2][4];` |
| Function call | `Squared(22)` |
| Local variable | Declared inside a function or block |
| Global variable | Declared outside functions |
| Pointer address | `&variable` |
| Dereference pointer | `*pointer` |
| Structure | `struct Student { string name; int age; };` |
| Structure member | `student.name` |
| Vector | `vector<string> names;` |
| Add to vector | `names.push_back("Alice");` |
| Vector size | `names.size()` |
| Write file | `ofstream file("name.txt");` |
| Read file | `ifstream file("name.txt");` |
| Append to file | `ofstream file("name.txt", ios::app);` |

---

# Basic Example Combining Several Concepts

```cpp
#include <iostream>
#include <string>
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

This example combines variables, `string`, `int`, `cin`, `cout`, comparisons, and `if-else`. Note that `cin >> name` reads only up to the next whitespace, so a full name containing spaces would need a different input approach.

---

These notes cover the topics introduced in `tutorial.cpp`: console input/output, variables, comparisons, strings, characters and ASCII, loops, arrays, `memset()`, functions, variable scope, pointers and pointer-based modification, vectors and common algorithms, and text and binary file operations.