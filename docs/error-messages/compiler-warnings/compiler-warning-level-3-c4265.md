---
title: "Compiler Warning (level 3, off) C4265"
description: "Learn more about: Compiler Warning (level 3, off) C4265"
ms.date: 11/04/2016
f1_keywords: ["C4265"]
helpviewer_keywords: ["C4265"]
---
# Compiler Warning (level 3, off) C4265

> '*classname*': class has virtual functions, but its non-trivial destructor is not virtual; instances of this class may not be destructed correctly

## Remarks

When a class has virtual functions but a nonvirtual destructor, objects of the type might not be destroyed properly when the class is destroyed through a base class pointer.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following example generates C4265:

```cpp
// C4265.cpp
// compile with: /W3 /c
#pragma warning(default : 4265)
class B
{
public:
   virtual void vmf();

   ~B();
   // try the following line instead
   // virtual ~B();
};   // C4265

int main()
{
   B b;
}
```
