![alt text](https://github.com/Singularity-Coder/Instant-Cpp/blob/main/assets/banner_cpp.png)
# Instant-Cpp
List of C++ topics and their code snippets!

## Theory
* C++ supports classes and objects, while C does not.
* **Escape Sequences:** It forces the cursor to change its position.
    * \n Creates a new line.
    * \t Creates a horizontal tab.
    * \\ Inserts a backslash character (\)
    * \" Inserts a double quote character
* << insertion operator
* >> extraction operator

## Package definition and imports
```C++
#include <iostream>
using namespace std;
```

## Comments
```C++
// This is a comment

/* This is a multi-line comment.
   You can add some helpful text here. */
```

## Printing to Console
```C++
printf("Hello World \n");
std::cout << "Hello World!";
```

## Data Types
```C++
int number; // 2 or 4 bytes. ex: -n, 0, n
float storeCount; // 4 bytes. ex: -0.3, 0, 0.0193
double pi; // 8 bytes. ex: -0.01242324, 0, 0.01234232 
char letter; // 1 byte. ex: 'a', 'z'
string text; // ex: "Hello"
bool isValid; // 1 byte. ex: true or false
```

## Constants
```C++
const int pi = 3.14;
```

## Variables
```C++
int myNum = 15;

int myNum2;
myNum2 = 15;
```

## Booleans
```C++
cout << true; // 1
cout << false; // 0
```

## Scientific Notation
```C++
float num1 = 35e5; // This means 3500000 or 35 * 10^5
double num2 = 35E5;
```

## Operators
#### Arithmetic Operators
```C++
j + k
j - k
j * k
j / k
j % k
++j
--k
```
#### Assignment Operators
```C++
j += 5;
j -= 2;
j *= 4;
j /= 9;
```

## Conditionals
```C++

```

## Loops
```C++

```

## Collections
```C++

```

## Classes
```C++

```

## Functions
```C++
int main() {
    std::cout << "Hello World!";
    return 0; // Ends the main function
}
```

## Instantiation and Intitialization
```C++

```

## Inheritance 
```C++

```

## Composition
```C++

```

------------------------------------------------------------------------------------------------------------------------

# References
* [LearningLad](https://www.youtube.com/watch?v=77v-Poud_io)
* https://www.w3schools.com/cpp/cpp_variables.asp

------------------------------------------------------------------------------------------------------------------------

# How to edit?
* C++ 20
* Use VS Code
* To preview in VS Code: Cmd + Shift + v
* View preview in split window
* https://code.visualstudio.com/docs/languages/cpp
* Install C/C++ extension: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools
* Install C/C++ Extension Pack extension: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack
* Install Code Runner extension to run C++ with a single click: https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner
* VS Code Settings -> Extensions -> Run Code Configuration -> Run In Terminal
* Create a .cpp file.
* Add code -> Save File -> Right Click -> Run Code