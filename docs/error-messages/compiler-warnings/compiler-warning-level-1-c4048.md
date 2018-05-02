---
title: "Compiler Warning (level 1) C4048 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4048"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4048"]
ms.assetid: 8429f513-4732-40f1-8e56-4c224e723bcb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4048
different declared array subscripts : 'identifier1' and 'identifier2'  
  
 An expression involves pointers to arrays of different size. The pointers are used without conversion.  
  
 This warning may be fixed if you explicitly cast the arrays to the same or equivalent type.