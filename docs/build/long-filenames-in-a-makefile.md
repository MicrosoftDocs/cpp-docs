---
title: "Long Filenames in a Makefile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["NMAKE program, long filenames", "long filenames"]
ms.assetid: 626d56fc-8879-46ba-9c2d-dd386c78cccc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Long Filenames in a Makefile
Enclose long filenames in double quotation marks, as follows:  
  
```  
all : "VeryLongFileName.exe"  
```  
  
## See Also  
 [Contents of a Makefile](../build/contents-of-a-makefile.md)