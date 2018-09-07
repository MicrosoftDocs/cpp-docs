---
title: "Compiler Error C2585 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2585"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2585"]
ms.assetid: 05bb1a9c-28fb-4a88-a1b5-aea85ebdee1c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2585
explicit conversion to 'type' is ambiguous  
  
 The type conversion can produce more than one result.  
  
### To fix by checking the following possible causes  
  
1.  Converting from a class or structure type based on multiple inheritance. If the type inherits the same base class more than once, the conversion function or operator must use scope resolution (`::`) to specify which of the inherited classes to use in the conversion.  
  
2.  A conversion operator and a constructor have been defined making the same conversion.