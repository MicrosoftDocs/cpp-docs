---
description: "Learn more about: Accessing C or C++ Data in __asm Blocks"
title: "Accessing C or C++ Data in __asm Blocks"
ms.date: "08/30/2018"
helpviewer_keywords: ["data members [C++], in __asm blocks", "data access [C++], in __asm blocks", "__asm keyword [C++], data members", "structure types in __asm blocks"]
ms.assetid: e99f5a28-0381-4090-8ece-6af8f2436a49
---
# Accessing C or C++ Data in __asm Blocks

**Microsoft Specific**

A great convenience of inline assembly is the ability to refer to C or C++ variables by name. An **`__asm`** block can refer to any symbols, including variable names, that are in scope where the block appears. For instance, if the C variable `var` is in scope, the instruction

```cpp
__asm mov eax, var
```

stores the value of `var` in EAX.

If a class, structure, or union member has a unique name, an **`__asm`** block can refer to it using only the member name, without specifying the variable or **`typedef`** name before the period (**.**) operator. If the member name is not unique, however, you must place a variable or **`typedef`** name immediately before the period operator. For example, the structure types in the following sample share `same_name` as their member name:.

If you declare variables with the types

```cpp
struct first_type hal;
struct second_type oat;
```

all references to the member `same_name` must use the variable name because `same_name` is not unique. But the member `weasel` has a unique name, so you can refer to it using only its member name:

```cpp
// InlineAssembler_Accessing_C_asm_Blocks.cpp
// processor: x86
#include <stdio.h>
struct first_type
{
   char *weasel;
   int same_name;
};

struct second_type
{
   int wonton;
   long same_name;
};

int main()
{
   struct first_type hal;
   struct second_type oat;

   __asm
   {
      lea ebx, hal
      mov ecx, [ebx]hal.same_name ; Must use 'hal'
      mov esi, [ebx].weasel       ; Can omit 'hal'
   }
   return 0;
}
```

Note that omitting the variable name is merely a coding convenience. The same assembly instructions are generated whether or not the variable name is present.

You can access data members in C++ without regard to access restrictions. However, you cannot call member functions.

**END Microsoft Specific**

## See also

[Using C or C++ in __asm Blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)<br/>
