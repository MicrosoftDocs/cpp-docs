---
description: "Learn more about: Compiler Error C2064"
title: "Compiler Error C2064"
ms.date: "11/04/2016"
f1_keywords: ["C2064"]
helpviewer_keywords: ["C2064"]
ms.assetid: 6cda05da-f437-4f50-9813-ae69538713a3
---
# Compiler Error C2064

term does not evaluate to a function taking N arguments

A call is made to a function through an expression. The expression does not evaluate to a pointer to a function that takes the specified number of arguments.

In this example, the code attempts to call non-functions as functions. The following sample generates C2064:

```cpp
// C2064.cpp
int i, j;
char* p;
void func() {
   j = i();    // C2064, i is not a function
   p();        // C2064, p doesn't point to a function
}
```

You must call pointers to non-static member functions from the context of an object instance. The following sample generates C2064, and shows how to fix it:

```cpp
// C2064b.cpp
struct C {
   void func1(){}
   void func2(){}
};

typedef void (C::*pFunc)();

int main() {
   C c;
   pFunc funcArray[2] = {&C::func1, &C::func2};
   (funcArray[0])();    // C2064
   (c.*funcArray[0])(); // OK - function called in instance context
}
```

Within a class, member function pointers must also indicate the calling object context. The following sample generates C2064 and shows how to fix it:

```cpp
// C2064d.cpp
// Compile by using: cl /c /W4 C2064d.cpp
struct C {
   typedef void (C::*pFunc)();
   pFunc funcArray[2];
   void func1(){}
   void func2(){}
   C() {
      funcArray[0] = &C::func1;
      funcArray[1] = &C::func2;
   }
   void func3() {
      (funcArray[0])();   // C2064
      (this->*funcArray[0])(); // OK - called in this instance context
   }
};
```
