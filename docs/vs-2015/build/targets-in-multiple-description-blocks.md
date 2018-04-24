---
title: "Targets in Multiple Description Blocks | Microsoft Docs"
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
  - "description blocks"
  - "blocks, multiple description"
  - "multiple description blocks"
ms.assetid: 8618dcd9-c11d-4562-91a7-0c904ed438a8
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Targets in Multiple Description Blocks
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Targets in Multiple Description Blocks](https://docs.microsoft.com/cpp/build/targets-in-multiple-description-blocks).  
  
  
To update a target in more than one description block using different commands, specify two consecutive colons (::) between targets and dependents.  
  
```  
target.lib :: one.asm two.asm three.asm  
    ml one.asm two.asm three.asm  
    lib target one.obj two.obj three.obj  
target.lib :: four.c five.c  
    cl /c four.c five.c  
    lib target four.obj five.obj  
```  
  
## See Also  
 [Targets](../build/targets.md)

