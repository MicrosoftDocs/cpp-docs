---
description: "Learn more about: Compiler Warning (level 4, off) C4266"
title: "Compiler Warning (level 4, off) C4266"
ms.date: "11/04/2016"
f1_keywords: ["C4266"]
helpviewer_keywords: ["C4266"]
---
# Compiler Warning (level 4, off) C4266

> 'function' : no override available for virtual member function from base 'type'; function is hidden

## Remarks

A derived class didn't override all overloads of a virtual function.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following sample generates C4266:

```cpp
// C4266.cpp
// compile with: /W4 /c
#pragma warning (default : 4266)
class Engine {
public:
   virtual void OnException(int&,int);
   virtual void OnException(int&,int&,int);
};

class LocalBinding : private Engine {
   virtual void OnException(int&,int);
};   // C4266
```

Possible resolution:

```cpp
// C4266b.cpp
// compile with: /W4 /c
#pragma warning (default : 4266)
class Engine {
public:
   virtual void OnException(int&,int);
   virtual void OnException(int&,int&,int);
};

class LocalBinding : private Engine {
   virtual void OnException(int&,int);
   virtual void OnException(int&, int&, int);
};
```
