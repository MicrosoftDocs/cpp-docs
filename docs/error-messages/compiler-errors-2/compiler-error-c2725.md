---
title: "Compiler Error C2725 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2725"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2725"]
ms.assetid: 13cd5b1b-e906-4cd8-9b2b-510d587c665a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2725

'exception' : unable to throw or catch a managed or WinRT object by value or reference

The type of a managed or WinRT exception was not correct.

## Example

The following sample generates C2725 and shows how to fix it.

```
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

## Example

The following sample generates C2725 and shows how to fix it.

```
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
