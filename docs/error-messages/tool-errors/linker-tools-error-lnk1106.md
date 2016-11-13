---
title: "Linker Tools Error LNK1106 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1106"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1106"
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Linker Tools Error LNK1106
invalid file or disk full: cannot seek to location  
  
 The tool could not read or write to `location` in a memory-mapped file.  
  
### To fix by checking the following possible causes  
  
1.  Disk full.  
  
     Free up some space and link again.  
  
2.  Trying to link over a network.  
  
     Some networks do not fully support the memory-mapped files used by the linker. Try linking on your local disk.  
  
3.  Bad block on your disk.  
  
     Although the operating system and disk hardware should have detected such an error, you may want to run a disk-checking program.  
  
4.  Out of heap space.  
  
     See [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) for more information.