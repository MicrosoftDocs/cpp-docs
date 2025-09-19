---
title: "Compiler Error C3350"
description: "Learn more about: Compiler Error C3350"
ms.date: 11/04/2016
f1_keywords: ["C3350"]
helpviewer_keywords: ["C3350"]
---
# Compiler Error C3350

> 'delegate' : a delegate constructor expects number argument(s)

## Remarks

When you create an instance of a delegate, you must pass two arguments, an instance of the type containing the delegate function, and the function.

## Example

The following example generates C3350:

```cpp
// C3350.cpp
// compile with: /clr
delegate void SumDelegate();

public ref class X {
public:
   void F() {}
   static void F2() {}
};

int main() {
   X ^ MyX = gcnew X();
   SumDelegate ^ pSD = gcnew SumDelegate();   // C3350
   SumDelegate ^ pSD1 = gcnew SumDelegate(MyX, &X::F);
   SumDelegate ^ pSD2 = gcnew SumDelegate(&X::F2);
}
```
