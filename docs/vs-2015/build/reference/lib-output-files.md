---
title: "LIB Output Files | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Lib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "output files, LIB"
ms.assetid: e73d2f9b-a42d-402b-b7e3-3a94bebb317e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# LIB Output Files
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [LIB Output Files](https://docs.microsoft.com/cpp/build/reference/lib-output-files).  
  
  
The output files produced by LIB depend on the mode in which it is being used, as shown in the following table.  
  
|Mode|Output|  
|----------|------------|  
|Default (building or modifying a library)|COFF library (.lib)|  
|Extracting a member with /EXTRACT|Object (.obj) file|  
|Building an export file and import library with /DEF|Import library (.lib) and export (.exp) file|  
  
## See Also  
 [Overview of LIB](../../build/reference/overview-of-lib.md)

