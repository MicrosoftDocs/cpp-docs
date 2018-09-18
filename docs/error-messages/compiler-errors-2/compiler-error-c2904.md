---
title: "Compiler Error C2904 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2904"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2904"]
ms.assetid: d5802f2e-d3fc-473d-aa04-36957b4eaca5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2904

'identifier' : name already used for a template in the current scope

Check the code for duplicate names.

The following sample generates C2904:

```
// C2904.cpp
// compile with: /c
void X();  // X is declared as a function
template<class T> class X{};  // C2904
```