---
title: "Resource Compiler Fatal Error RW1025 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["RW1025"]
dev_langs: ["C++"]
helpviewer_keywords: ["RW1025"]
ms.assetid: 561a02af-e7e0-442a-8ad3-a00b2ca1b62e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Resource Compiler Fatal Error RW1025
Out of far heap memory  
  
 Check for memory-resident software that might be taking up too much space. Use the CHKDSK program to find out how much memory you have.  
  
 If you are creating a large resource file, split the resource script into two files. After creating two .res files, use the MS-DOS command line to join them together:  
  
```  
copy first.res /b + second.res /b full.res  
```