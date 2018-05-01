---
title: ".DOSSEG | Microsoft Docs"
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
  - ".DOSSEG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".DOSSEG directive"
ms.assetid: 175ad470-0a2b-4e2b-b078-65e224fec040
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .DOSSEG
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [.DOSSEG](https://docs.microsoft.com/cpp/assembler/masm/dot-dosseg).  
  
  
Orders the segments according to the MS-DOS segment convention: CODE first, then segments not in DGROUP, and then segments in DGROUP.  
  
## Syntax  
  
```  
  
.DOSSEG  
  
```  
  
## Remarks  
 The segments in DGROUP follow this order: segments not in BSS or STACK, then BSS segments, and finally STACK segments. Primarily used for ensuring CodeView support in MASM stand-alone programs. Same as [DOSSEG](../../assembler/masm/dosseg.md).  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

