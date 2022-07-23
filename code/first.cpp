#include<stdio.h>
#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    printf("Hello World");
    return 0;
}

int fun1() {
    printf("Hello World");
    return 0;
}

// Alt + Ctrl + M to stop taking input.
int fun2() {
    int age;
    printf("Enter age\n");
    scanf("%d", &age);
    printf("age is %d", age);
    return 0;
}