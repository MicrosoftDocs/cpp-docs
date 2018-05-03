---
title: "Compiler Warning (level 1) C4612 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4612"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4612"]
ms.assetid: 21ac02b2-51cd-4aff-9b70-d543511d5962
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4612
error in include filename  
  
 This warning occurs with **#pragma include_alias** when a filename is incorrect or missing.  
  
 The arguments to the **#pragma include_alias** statement can use the quote from (**"***filename***"**) or angle-bracket form (**\<***filename***>**), but both must use the same form.  
  
## Example  
  
```  
// C4612.cpp  
// compile with: /W1 /LD  
#pragma include_alias("StandardIO", <stdio.h>) // C4612  
```