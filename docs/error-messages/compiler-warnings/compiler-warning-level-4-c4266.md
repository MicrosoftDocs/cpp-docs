---
description: "Learn more about: Compiler Warning (level 4) C4266"
title: "Compiler Warning (level 4) C4266"
ms.date: "11/04/2016"
f1_keywords: ["C4266"]
helpviewer_keywords: ["C4266"]
ms.assetid: 90ec5f5b-3451-4c16-bb1b-c30a626bdaa0
---
# Compiler Warning (level 4) C4266

'function' : no override available for virtual member function from base 'type'; function is hidden

A derived class did not override all overloads of a virtual function.

This warning is off by default.  See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

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
