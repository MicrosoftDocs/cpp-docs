---
title: "Compiler Warning (level 4) C4266 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4266"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4266"]
ms.assetid: 90ec5f5b-3451-4c16-bb1b-c30a626bdaa0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4266

'function' : no override available for virtual member function from base 'type'; function is hidden

A derived class did not override all overloads of a virtual function.

This warning is off by default.  See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4266:

```
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

```
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