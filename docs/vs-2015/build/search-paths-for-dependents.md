---
title: "Search Paths for Dependents | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NMAKE program, dependents"
  - "dependents, NMAKE"
ms.assetid: bf998e47-da74-48b5-891d-d3d8ce57264b
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Search Paths for Dependents
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Search Paths for Dependents](https://docs.microsoft.com/cpp/build/search-paths-for-dependents).  
  
  
Each dependent has an optional search path, specified as follows:  
  
## Syntax  
  
```  
{directory[;directory...]}dependent  
```  
  
## Remarks  
 NMAKE looks for a dependent first in the current directory, and then in directories in the order specified. A macro can specify part or all of a search path. Enclose directory names in braces ({ }); separate multiple directories with a semicolon (;). No spaces or tabs are allowed.  
  
## See Also  
 [Dependents](../build/dependents.md)

