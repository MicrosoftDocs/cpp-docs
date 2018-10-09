---
title: "Compiler Error C3809 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3809"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3809"]
ms.assetid: 37eca584-c20c-464e-8e45-a987214b7ce4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3809

'class' : a managed or WinRT type cannot have any friend functions/classes/interfaces

Managed types and Windows Runtime types do not allow friends. To fix this error, do not declare friends inside managed or Windows Runtime types.

The following sample generates C3809:

```
// C3809a.cpp
// compile with: /clr
ref class A {};

ref class B
{
public:
   friend ref class A;   // C3809
};

int main()
{
}
```