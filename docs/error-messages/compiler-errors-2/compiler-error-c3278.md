---
description: "Learn more about: Compiler Error C3278"
title: "Compiler Error C3278"
ms.date: "11/04/2016"
f1_keywords: ["C3278"]
helpviewer_keywords: ["C3278"]
ms.assetid: 56f818f5-85a6-4792-843b-54fe16327658
---
# Compiler Error C3278

> direct call of interface or pure method '*method*' will fail at runtime

## Remarks

A call was made to an interface method or a pure method, which is not allowed.

## Example

The following sample generates C3278:

```cpp
// C3278_2.cpp
// compile with: /clr
using namespace System;
interface class I
{
   void vmf();
};

public ref class C: public I
{
public:
   void vmf()
   {
      Console::WriteLine( "In C::vmf()" );
      I::vmf(); // C3278
   }

};

int main()
{
   C^ pC = gcnew C;
   pC->vmf();
}
```
