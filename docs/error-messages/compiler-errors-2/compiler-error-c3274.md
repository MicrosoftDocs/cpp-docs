---
title: "Compiler Error C3274"
description: "Learn more about: Compiler Error C3274"
ms.date: 11/04/2016
f1_keywords: ["C3274"]
helpviewer_keywords: ["C3274"]
---
# Compiler Error C3274

> __finally/finally without matching try

## Remarks

A [__finally](../../cpp/try-finally-statement.md) or [finally](../../dotnet/finally.md) statement was found without a matching **`try`**. To resolve this, either delete the **`__finally`** statement or add a **`try`** statement for the **`__finally`**.

## Example

The following example generates C3274:

```cpp
// C3274.cpp
// compile with: /clr
// C3274 expected
using namespace System;
int main() {
   try {
      try {
         throw gcnew ApplicationException();
      }
      catch(...) {
         Console::Error->WriteLine(L"Caught an exception");
      }
      finally {
         Console::WriteLine(L"In finally");
      }
   } finally {
      Console::WriteLine(L"In finally");
   }

   // Uncomment the following 3 lines to resolve.
   // try {
   //   throw gcnew ApplicationException();
   // }

   finally {
      Console::WriteLine(L"In finally");
   }
   Console::WriteLine(L"**FAIL**");
}
```
