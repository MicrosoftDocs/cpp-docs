---
title: "Compiler Error C3554 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3554"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3554"]
ms.assetid: aede18d5-fefc-4da9-9b69-adfe90bfa742
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3554
'decltype' cannot be combined with any other type-specifier  
  
 You cannot qualify the `decltype()` keyword with any type specifier. For example, the following code fragment yields error C3554.  
  
```  
int x;  
unsigned decltype(x); // C3554  
```