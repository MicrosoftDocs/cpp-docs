---
title: "Tools.ini and NMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["NMAKE program, reading files", "Tools.ini and NMake"]
ms.assetid: ebd5eab6-ddf4-430e-bf4a-1db5bb84e344
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Tools.ini and NMAKE
NMAKE reads Tools.ini before it reads makefiles, unless /R is used. It looks for Tools.ini first in the current directory and then in the directory specified by the INIT environment variable. The section for NMAKE settings in the initialization file begins with `[NMAKE]` and can contain any makefile information. Specify a comment on a separate line beginning with a number sign (#).  
  
## See Also  
 [Running NMAKE](../build/running-nmake.md)