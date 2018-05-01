---
title: "Tools.ini and NMAKE | Microsoft Docs"
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
  - "NMAKE program, reading files"
  - "Tools.ini and NMake"
ms.assetid: ebd5eab6-ddf4-430e-bf4a-1db5bb84e344
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Tools.ini and NMAKE
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Tools.ini and NMAKE](https://docs.microsoft.com/cpp/build/tools-ini-and-nmake).  
  
  
NMAKE reads Tools.ini before it reads makefiles, unless /R is used. It looks for Tools.ini first in the current directory and then in the directory specified by the INIT environment variable. The section for NMAKE settings in the initialization file begins with `[NMAKE]` and can contain any makefile information. Specify a comment on a separate line beginning with a number sign (#).  
  
## See Also  
 [Running NMAKE](../build/running-nmake.md)

