---
title: "Floating Point Coprocessor and Calling Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["floating-point numbers [C++]", "floating-point coprocessor"]
ms.assetid: 3cc6615a-b308-4cf7-9570-83e192a832b3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Floating Point Coprocessor and Calling Conventions
If you are writing assembly routines for the floating point coprocessor, you must preserve the floating point control word and clean the coprocessor stack unless you are returning a **float** or **double** value (which your function should return in ST(0)).  
  
## See Also  
 [Calling Conventions](../cpp/calling-conventions.md)