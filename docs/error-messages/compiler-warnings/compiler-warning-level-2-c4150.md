---
title: "Compiler Warning (level 2) C4150 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4150"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4150"]
ms.assetid: ff1760ec-0d9f-4d45-b797-94261624becf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 2) C4150

deletion of pointer to incomplete type 'type'; no destructor called

The **delete** operator is called to delete a type that was declared but not defined, so the compiler cannot find a destructor.

The following sample generates C4150:

```
// C4150.cpp
// compile with: /W2
class  IncClass;

void NoDestruct( IncClass* pIncClass )
{
   delete pIncClass;
} // C4150, define class to resolve

int main()
{
}
```