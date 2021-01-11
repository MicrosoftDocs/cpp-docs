---
description: "Learn more about: Compiler Error C2725"
title: "Compiler Error C2725"
ms.date: "11/04/2016"
f1_keywords: ["C2725"]
helpviewer_keywords: ["C2725"]
ms.assetid: 13cd5b1b-e906-4cd8-9b2b-510d587c665a
---
# Compiler Error C2725

'exception' : unable to throw or catch a managed or WinRT object by value or reference

The type of a managed or WinRT exception was not correct.

## Examples

The following sample generates C2725 and shows how to fix it.

```cpp
// C2725.cpp
// compile with: /clr
ref class R {
public:
   int i;
};

int main() {
   R % r1 = *gcnew R;
   throw r1;   // C2725

   R ^ r2 = gcnew R;
   throw r2;   // OK
}
```

The following sample generates C2725 and shows how to fix it.

```cpp
// C2725b.cpp
// compile with: /clr
using namespace System;
int main() {
   try {}
   catch( System::Exception%) {}   // C2725
   // try the following line instead
   // catch( System::Exception ^e) {}
}
```
