---
description: "Learn more about: Compiler Warning (level 2) C4275"
title: "Compiler Warning (level 2) C4275"
ms.date: "02/08/2019"
f1_keywords: ["C4275"]
helpviewer_keywords: ["C4275"]
ms.assetid: 18de967a-0a44-4dbc-a2e8-fc4c067ba909
---
# Compiler Warning (level 2) C4275

> non - DLL-interface class '*class_1*' used as base for DLL-interface class '*class_2*'

An exported class was derived from a class that wasn't exported.

To minimize the possibility of data corruption when exporting a class with [__declspec(dllexport)](../../cpp/dllexport-dllimport.md), make sure that:

- All your static data is accessed through functions that are exported from the DLL.

- No inlined methods of your class can modify static data.

- No inlined methods of your class use CRT functions or other library functions that use static data.

- No inlined class functions use CRT functions, or other library functions, where you access static data.

- No methods of your class (regardless of inlining) can use types where the instantiation in the EXE and DLL have static data differences.

You can avoid exporting classes by defining a DLL that defines a class with virtual functions, and functions you can call to instantiate and delete objects of the type.  You can then just call virtual functions on the type.

C4275 can be ignored in Visual C++ if you are deriving from a type in the C++ Standard Library, compiling a debug release (**/MTd**) and where the compiler error message refers to `_Container_base`.

```cpp
// C4275.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275
```
