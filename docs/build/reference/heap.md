---
title: "-HEAP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "heap allocation, setting heap size"
  - "HEAP editbin option"
  - "-HEAP editbin option"
  - "/HEAP editbin option"
ms.assetid: 6ce759b5-75b7-44ff-a5fd-3a83a0ba9a48
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /HEAP
Sets the size of the heap in bytes. This option only applies to executable files.  
  
```  
  
/HEAP:  
reserve[,commit]  
```  
  
## Remarks  
 The `reserve` argument specifies the total initial heap allocation in virtual memory. By default, the heap size is 1 MB. [EDITBIN Reference](../../build/reference/editbin-reference.md) rounds up the specified value to the nearest multiple of 4 bytes.  
  
 The optional `commit` argument is subject to interpretation by the operating system. On a Windows operating system, it specifies the initial amount of physical memory to allocate, and the amount of additional memory to allocate when the heap must be expanded. Committed virtual memory causes space to be reserved in the paging file. A higher `commit` value allows the system to allocate memory less often when the app needs more heap space but increases the memory requirements and possibly the app startup duration. The `commit` value must be less than or equal to the `reserve` value.  
  
 Specify the `reserve` and `commit` values in decimal or C-language hexadecimal or octal notation. For example, a value of 1 MB can be specified as 1048576 in decimal, or as 0x100000 in hexadecimal, or as 04000000 in octal.  
  
## See Also  
 [EDITBIN Options](../../build/reference/editbin-options.md)