---
title: "Compiler Warning (level 1) C4116 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4116"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4116"]
ms.assetid: 25434ef3-061e-4252-91a5-0fe2a4b2ffb3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4116
unnamed type definition in parentheses  
  
 A structure, union, or enumerated type with no name is defined in a parenthetical expression. The type definition is meaningless.  
  
 In a C function call, the definition has global scope. In a C++ function call, the definition has the same scope as the function being called.