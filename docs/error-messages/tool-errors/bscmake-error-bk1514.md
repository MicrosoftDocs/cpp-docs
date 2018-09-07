---
title: "BSCMAKE Error BK1514 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["BK1514"]
dev_langs: ["C++"]
helpviewer_keywords: ["BK1514"]
ms.assetid: 7c7e2504-a490-44ab-bb1f-47385ee2f4b0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# BSCMAKE Error BK1514
all .SBR files truncated, none found in filename  
  
 None of the .sbr files specified for an update were part of the original browse information (.bsc) file. To find the names of the .sbr files that caused this error, read the [BK4502](../../error-messages/tool-errors/bscmake-warning-bk4502.md) warnings that precede it.  
  
### To fix by checking the following possible causes  
  
1.  Wrong filename specified for .sbr or .bsc.  
  
2.  Corrupted .bsc file required BSCMAKE to rebuild it.