---
title: "Search Paths for Dependents | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["NMAKE program, dependents", "dependents, NMAKE"]
ms.assetid: bf998e47-da74-48b5-891d-d3d8ce57264b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Search Paths for Dependents
Each dependent has an optional search path, specified as follows:  
  
## Syntax  
  
```  
{directory[;directory...]}dependent  
```  
  
## Remarks  
 NMAKE looks for a dependent first in the current directory, and then in directories in the order specified. A macro can specify part or all of a search path. Enclose directory names in braces ({ }); separate multiple directories with a semicolon (;). No spaces or tabs are allowed.  
  
## See Also  
 [Dependents](../build/dependents.md)