---
title: "LIB Input Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["Lib"]
dev_langs: ["C++"]
helpviewer_keywords: ["input files, LIB"]
ms.assetid: e1236f0d-cd90-446b-b900-f311f456085c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# LIB Input Files
The input files expected by LIB depend on the mode in which it is being used, as shown in the following table.  
  
|Mode|Input|  
|----------|-----------|  
|Default (building or modifying a library)|COFF object (.obj) files, COFF libraries (.lib), 32-bit Object Model Format (OMF) object (.obj) files|  
|Extracting a member with /EXTRACT|COFF library (.lib)|  
|Building an export file and import library with /DEF|Module-definition (.def) file, COFF object (.obj) files, COFF libraries (.lib), 32-bit OMF object (.obj) files|  
  
> [!NOTE]
>  OMF libraries created by the 16-bit version of LIB cannot be used as input to the 32-bit version of LIB.  
  
## See Also  
 [Overview of LIB](../../build/reference/overview-of-lib.md)