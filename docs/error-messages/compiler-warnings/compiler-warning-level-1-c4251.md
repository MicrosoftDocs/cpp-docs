---
description: "Learn more about: Compiler Warning (level 1) C4251"
title: "Compiler Warning (level 1) C4251"
ms.date: "04/21/2020"
f1_keywords: ["C4251"]
helpviewer_keywords: ["C4251"]
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
---
# Compiler Warning (level 1) C4251

> '*type*' : class '*type1*' needs to have dll-interface to be used by clients of class '*type2*'

## Remarks

To minimize the possibility of data corruption when exporting a class declared as [__declspec(dllexport)](../../cpp/dllexport-dllimport.md), ensure that:

- All your static data is accessed through functions that are exported from the DLL.

- No inlined methods of your class can modify static data.

- No inlined methods of your class use CRT functions or other library functions that use static data. For more information, see [Potential errors passing CRT objects across DLL boundaries](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).

- No methods of your class (whether inlined or not) can use types where the instantiation in the EXE and DLL have static data differences.

You can avoid issues when exporting a class from a DLL: Define your class to have virtual functions, and functions to instantiate and delete objects of the type. You can then just call virtual functions on the type.

C4251 can be ignored if your class is derived from a type in the C++ Standard Library, you're compiling a debug release (**/MTd**), and where the compiler error message refers to `_Container_base`.

## Example

This sample exports a specialized class `VecWrapper` derived from `std::vector`.

```cpp
// C4251.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllexport) VecWrapper : vector<Node *> {};   // C4251
```
