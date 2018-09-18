---
title: "Compiler Warning (level 1) C4817 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4817"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4817"]
ms.assetid: a68f5486-6940-4934-9f93-bfd4d71f92a9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4817

'member' : illegal use of '.' to access this member; compiler replaced with '->'

The wrong member access operator was used.

## Example

The following sample generates C4817.

```
// C4817.cpp
// compile with: /clr /W1
using namespace System;
int main() {
   array<Int32> ^ a = gcnew array<Int32>(100);
   Console::WriteLine( a.Length );   // C4817
   Console::WriteLine( a->Length );   // OK
}
```
