---
title: "Compiler Warning (level 2) C4251"
description: "Learn more about: Compiler Warning (level 2) C4251"
ms.date: 12/01/2023
f1_keywords: ["C4251"]
helpviewer_keywords: ["C4251"]
---
# Compiler Warning (level 2) C4251

> '*type*': '*type1*' needs to have dll-interface to be used by clients of '*type2*'

## Remarks

This warning happens if a class is marked with `__declspec(dllexport)` or `__declspec(dllimport)` and a nonstatic data member that is a member of the class or a member of one of its base classes, has a type that is a class type that isn't marked with `__declspec(dllexport)` or `__declspec(dllimport)`. See [Example](#example).

To minimize the possibility of data corruption when exporting a class declared as [`__declspec(dllexport)`](../../cpp/dllexport-dllimport.md), ensure that:

- All your static data is accessed through functions that are exported from the DLL.
- No inlined methods of your class can modify static data.
- No inlined methods of your class use CRT functions or other library functions that use static data. For more information, see [Potential errors passing CRT objects across DLL boundaries](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).
- No methods of your class (whether inlined or not) can use types where the instantiation in the EXE and DLL have static data differences.

You can avoid issues when exporting a class from a DLL by:

- Defining your class to have virtual functions.
- Defining a virtual destructor.
- Defining functions to instantiate and delete instances of the type.

You can ignore C4251 if your class is derived from a type in the C++ Standard Library, you're compiling a debug release (**`/MTd`**), and the compiler error message refers to `_Container_base`.

Think carefully about adding `__declspec(dllexport)` or `__declspec(dllimport)` to a class because it's almost always not the right choice and it can make maintenance more difficult because it makes changing implementation details harder.

## Example

```cpp
// C4251.cpp
// Compile with /std:c++20 /EHsc /W2 /c C4251.cpp
#include <vector>
 
class __declspec(dllexport) X
{
public:
    X();
    ~X();
 
    void do_something();
 
private:
    void do_something_else();
    std::vector<int> data; // warning c4251
};
```

To fix this warning, don't mark the class with `__declspec(dllexport)` or `__declspec(dllimport)`. Instead, only mark the methods that are used directly by a client. For example:

```cpp
// C4251_fixed.cpp
// Compile with /std:c++20 /EHsc /W2 /c C4251-fixed.cpp
#include <vector>
 
class X
{
public:
    __declspec(dllexport) X();
    __declspec(dllexport) ~X();
 
    __declspec(dllexport) void do_something();
 
private:
    void do_something_else();
    std::vector<int> data;
};
```
