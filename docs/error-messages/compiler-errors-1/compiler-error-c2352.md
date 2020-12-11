---
description: "Learn more about: Compiler Error C2352"
title: "Compiler Error C2352"
ms.date: "11/04/2016"
f1_keywords: ["C2352"]
helpviewer_keywords: ["C2352"]
ms.assetid: 0efad8cb-659f-4b3e-8f6f-9f8ec44d345c
---
# Compiler Error C2352

'class::function' : illegal call of non-static member function

A **`static`** member function called a nonstatic member function. Or, a nonstatic member function was called from outside the class as a static function.

The following sample generates C2352 and shows how to fix it:

```cpp
// C2352.cpp
// compile with: /c
class CMyClass {
public:
   static void func1();
   void func2();
   static void func3() {
      func2();   // C2352 calls nonstatic func2
      func1();   // OK calls static func1
   }
};
```

The following sample generates C2352 and shows how to fix it:

```cpp
// C2352b.cpp
class MyClass {
public:
   void MyFunc() {}
   static void MyFunc2() {}
};

int main() {
   MyClass::MyFunc();   // C2352
   MyClass::MyFunc2();   // OK
}
```
