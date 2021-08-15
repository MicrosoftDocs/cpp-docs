---
description: "Learn more about: novtable"
title: "novtable"
ms.date: "11/04/2016"
f1_keywords: ["novtable_cpp"]
helpviewer_keywords: ["novtable __declspec keyword", "__declspec keyword [C++], novtable"]
ms.assetid: cfef09c5-8c1e-4b14-8a72-7d726ded4484
---
# novtable

**Microsoft Specific**

This is a **`__declspec`** extended attribute.

This form of **`__declspec`** can be applied to any class declaration, but should only be applied to pure interface classes, that is, classes that will never be instantiated on their own. The **`__declspec`** stops the compiler from generating code to initialize the vfptr in the constructor(s) and destructor of the class. In many cases, this removes the only references to the vtable that are associated with the class and, thus, the linker will remove it. Using this form of **`__declspec`** can result in a significant reduction in code size.

If you attempt to instantiate a class marked with **`novtable`** and then access a class member, you will receive an access violation (AV).

## Example

```cpp
// novtable.cpp
#include <stdio.h>

struct __declspec(novtable) X {
   virtual void mf();
};

struct Y : public X {
   void mf() {
      printf_s("In Y\n");
   }
};

int main() {
   // X *pX = new X();
   // pX->mf();   // Causes a runtime access violation.

   Y *pY = new Y();
   pY->mf();
}
```

```Output
In Y
```

**END Microsoft Specific**

## See also

[`__declspec`](../cpp/declspec.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
