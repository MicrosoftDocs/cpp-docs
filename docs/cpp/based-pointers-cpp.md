---
description: "Learn more about: Based Pointers (C++)"
title: "Based Pointers (C++)"
ms.date: "10/09/2018"
f1_keywords: ["__based", "_based", "__based_cpp"]
helpviewer_keywords: ["__based keyword [C++]", "based pointers", "pointers, based"]
ms.assetid: 1e5f2e96-c52e-4738-8e14-87278681205e
---
# Based Pointers (C++)

The **`__based`** keyword allows you to declare pointers based on pointers (pointers that are offsets from existing pointers). The **`__based`** keyword is Microsoft-specific.

## Syntax

```
type __based( base ) declarator
```

## Remarks

Pointers based on pointer addresses are the only form of the **`__based`** keyword valid in 32-bit or 64-bit compilations. For the Microsoft 32-bit C/C++ compiler, a based pointer is a 32-bit offset from a 32-bit pointer base. A similar restriction holds for 64-bit environments, where a based pointer is a 64-bit offset from the 64-bit base.

One use for pointers based on pointers is for persistent identifiers that contain pointers. A linked list that consists of pointers based on a pointer can be saved to disk, then reloaded to another place in memory, with the pointers remaining valid. For example:

```cpp
// based_pointers1.cpp
// compile with: /c
void *vpBuffer;
struct llist_t {
   void __based( vpBuffer ) *vpData;
   struct llist_t __based( vpBuffer ) *llNext;
};
```

The pointer `vpBuffer` is assigned the address of memory allocated at some later point in the program. The linked list is relocated relative to the value of `vpBuffer`.

> [!NOTE]
> Persisting identifiers containing pointers can also be accomplished by using [memory-mapped files](/windows/win32/Memory/file-mapping).

When dereferencing a based pointer, the base must be either explicitly specified or implicitly known through the declaration.

For compatibility with previous versions, **_based** is a synonym for **`__based`** unless compiler option [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

## Example

The following code demonstrates changing a based pointer by changing its base.

```cpp
// based_pointers2.cpp
// compile with: /EHsc
#include <iostream>

int a1[] = { 1,2,3 };
int a2[] = { 10,11,12 };
int *pBased;

typedef int __based(pBased) * pBasedPtr;

using namespace std;
int main() {
   pBased = &a1[0];
   pBasedPtr pb = 0;

   cout << *pb << endl;
   cout << *(pb+1) << endl;

   pBased = &a2[0];

   cout << *pb << endl;
   cout << *(pb+1) << endl;
}
```

```Output
1
2
10
11
```

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[alloc_text](../preprocessor/alloc-text.md)
