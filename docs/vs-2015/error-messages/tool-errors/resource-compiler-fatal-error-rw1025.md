---
title: "Resource Compiler Fatal Error RW1025 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RW1025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RW1025"
ms.assetid: 561a02af-e7e0-442a-8ad3-a00b2ca1b62e
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Resource Compiler Fatal Error RW1025
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Resource Compiler Fatal Error RW1025](https://docs.microsoft.com/cpp/error-messages/tool-errors/resource-compiler-fatal-error-rw1025).  
  
  
Out of far heap memory  
  
 Check for memory-resident software that might be taking up too much space. Use the CHKDSK program to find out how much memory you have.  
  
 If you are creating a large resource file, split the resource script into two files. After creating two .res files, use the MS-DOS command line to join them together:  
  
```  
copy first.res /b + second.res /b full.res  
```

