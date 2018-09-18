---
title: "Compiler Warning C4972 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4972"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4972"]
ms.assetid: d18e8e65-b2ef-4d75-a207-fbd0c17c9060
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning C4972

Directly modifying or treating the result of an unbox operation as an lvalue is unverifiable

Dereferencing a handle to a value type, also known as unboxing, and then assigning to it is not verifiable.

For more information, see [Boxing](../../windows/boxing-cpp-component-extensions.md).

## Example

The following sample generates C4972.

```
// C4972.cpp
// compile with: /clr:safe
using namespace System;
ref struct R {
   int ^ p;   // a value type
};

int main() {
   R ^ r = gcnew R;
   *(r->p) = 10;   // C4972

   // OK
   r->p = 10;
   Console::WriteLine( r->p );
   Console::WriteLine( *(r->p) );
}
```