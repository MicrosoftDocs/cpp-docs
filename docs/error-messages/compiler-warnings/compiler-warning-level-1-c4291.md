---
description: "Learn more about: Compiler Warning (level 1) C4291"
title: "Compiler Warning (level 1) C4291"
ms.date: "11/04/2016"
f1_keywords: ["C4291"]
helpviewer_keywords: ["C4291"]
ms.assetid: c2b95dea-38f2-4609-9104-707c30798da4
---
# Compiler Warning (level 1) C4291

'declaration' : no matching operator delete found; memory will not be freed if initialization throws an exception

A placement [new](../../cpp/new-operator-cpp.md) is used for which there is no placement [delete](../../cpp/delete-operator-cpp.md).

When memory is allocated for an object with operator **`new`**, the object's constructor is called. If the constructor throws an exception, any memory that was allocated for the object should be deallocated. This cannot take place unless an operator **`delete`** function exists that matches the operator **`new`**.

If you use the operator **`new`** without any extra arguments and compile with [/GX](../../build/reference/gx-enable-exception-handling.md), [/EHs](../../build/reference/eh-exception-handling-model.md), or /EHa options to enable exception handling, the compiler will generate code to call operator **`delete`** if the constructor throws an exception.

If you use the placement form of the **`new`** operator (the form with arguments in addition to the size of the allocation) and the object's constructor throws an exception, the compiler will still generate code to call operator **`delete`**; but it will only do so if a placement form of operator **`delete`** exists matching the placement form of the operator **`new`** that allocated the memory. For example:

```cpp
// C4291.cpp
// compile with: /EHsc /W1
#include <malloc.h>

class CList
{
public:
   CList(int)
   {
      throw "Fail!";
   }
};

void* operator new(size_t size, char* pszFilename, int nLine)
{
   return malloc(size);
}

int main(void)
{
   try
   {
      // This will call ::operator new(unsigned int) to allocate heap
      // memory. Heap memory pointed to by pList1 will automatically be
      // deallocated by a call to ::operator delete(void*) when
      // CList::CList(int) throws an exception.
      CList* pList1 = new CList(10);
   }
   catch (...)
   {
   }

   try
   {
      // This will call the overloaded ::operator new(size_t, char*, int)
      // to allocate heap memory. When CList::CList(int) throws an
      // exception, ::operator delete(void*, char*, int) should be called
      // to deallocate the memory pointed to by pList2. Since
      // ::operator delete(void*, char*, int) has not been implemented,
      // memory will be leaked when the deallocation cannot occur.
      CList* pList2 = new(__FILE__, __LINE__) CList(20);   // C4291
   }
   catch (...)
   {
   }
}
```

The above example generates warning C4291 because no placement form of operator **`delete`** has been defined that matches the placement form of operator **`new`**. To solve the problem, insert the following code above **main**. Notice that all of the overloaded operator **`delete`** function parameters match those of the overloaded operator **`new`**, except for the first parameter.

```cpp
void operator delete(void* pMem, char* pszFilename, int nLine)
{
   free(pMem);
}
```
