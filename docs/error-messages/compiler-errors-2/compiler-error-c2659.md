---
description: "Learn more about: Compiler Error C2659"
title: "Compiler Error C2659"
ms.date: "11/04/2016"
f1_keywords: ["C2659"]
helpviewer_keywords: ["C2659"]
ms.assetid: b0883600-4d27-4ca7-a931-8ca6bd48654d
---
# Compiler Error C2659

'operator' : function as left operand

A function was on the left side of the specified operator. The most common reason for this error is that the compiler has parsed the identifier on the left side of the operator as a function when the developer intended it to be a variable. For more information, see Wikipedia article [Most vexing parse](https://en.wikipedia.org/wiki/Most_vexing_parse). This example shows a function declaration and a variable definition that are easily confused:

```cpp
// C2659a.cpp
// Compile using: cl /W4 /EHsc C2659a.cpp
#include <string>
using namespace std;

int main()
{
   string string1(); // string1 is a function returning string
   string string2{}; // string2 is a string initialized to empty

   string1 = "String 1"; // C2659
   string2 = "String 2";
}
```

To resolve this issue, change the declaration of the identifier so that it is not parsed as a function declaration.

Error C2659 can also occur when the function has a type that can’t be used in the expression on the left side of the specified operator. This example generates C2659 when the code assigns a function pointer to a function:

```cpp
// C2659b.cpp
// Compile using: cl /W4 /EHsc C2659b.cpp
int func0(void) { return 42; }
int (*func1)(void);

int main()
{
   func1 = func0;
   func0 = func1; // C2659
}
```
