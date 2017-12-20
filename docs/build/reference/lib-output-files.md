---
title: "LIB Output Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Lib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "output files, LIB"
ms.assetid: e73d2f9b-a42d-402b-b7e3-3a94bebb317e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# LIB Output Files
The output files produced by LIB depend on the mode in which it is being used, as shown in the following table.  
  
|Mode|Output|  
|----------|------------|  
|Default (building or modifying a library)|COFF library (.lib)|  
|Extracting a member with /EXTRACT|Object (.obj) file|  
|Building an export file and import library with /DEF|Import library (.lib) and export (.exp) file|  
  
## See Also  
 [Overview of LIB](../../build/reference/overview-of-lib.md)