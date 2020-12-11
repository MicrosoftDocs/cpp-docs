---
description: "Learn more about: Compiler Error C3556"
title: "Compiler Error C3556"
ms.date: "11/04/2016"
f1_keywords: ["C3556"]
helpviewer_keywords: ["C3556"]
ms.assetid: 9b002dcc-494e-414f-9587-20c2a0a39333
---
# Compiler Error C3556

> '*expression*': incorrect argument to 'decltype'

The compiler cannot deduce the type of the expression that is the argument to the `decltype(`*expression*`)` type specifier.

## Example

In the following code example, the compiler cannot deduce the type of the `myFunction` argument because `myFunction` is overloaded. To fix this issue, you could use **`static_cast`** to create an instance of a pointer to the particular overloaded function to specify in the **`decltype`** expression.

```cpp
// C3556.cpp
// compile with: cl /W4 /EHsc C3556.cpp
#include <iostream>

void myFunction(int);
void myFunction(float, float);

void callsMyFunction(decltype(myFunction) fn); // C3556
// One way to fix is to comment out the line above, and
// use static_cast to create specialized function pointer
// instances:
auto myFunctionInt = static_cast<void(*)(int)>(myFunction);
auto myFunctionFloatFloat = static_cast<void(*)(float,float)>(myFunction);
void callsMyFunction(decltype(myFunctionInt) fn, int n);
void callsMyFunction(decltype(myFunctionFloatFloat) fn, float f, float g);

void myFunction(int i) {
    std::cout << "called myFunction(" << i << ")" << std::endl;
}

void myFunction(float f, float g) {
    std::cout << "called myFunction(" << f << ", " << g << ")" << std::endl;
}

void callsMyFunction(decltype(myFunctionInt) fn, int n) {
    fn(n);
}

void callsMyFunction(decltype(myFunctionFloatFloat) fn, float f, float g) {
    fn(f, g);
}

int main() {
    callsMyFunction(myFunction, 42);
    callsMyFunction(myFunction, 0.1f, 2.3f);
}
```
