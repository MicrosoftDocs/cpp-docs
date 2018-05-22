---
title: "ML Nonfatal Error A2085 | Microsoft Docs"
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
  - "A2085"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2085"
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2085
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ML Nonfatal Error A2085](https://docs.microsoft.com/cpp/assembler/masm/ml-nonfatal-error-a2085).  
  
  
instruction or register not accepted in current CPU mode**  
  
 An attempt was made to use an instruction, register, or keyword that was not valid for the current processor mode.  
  
 For example, 32-bit registers require [.386](../../assembler/masm/dot-386.md) or above. Control registers such as CR0 require privileged mode [.386P](../../assembler/masm/dot-386p.md) or above. This error will also be generated for the **NEAR32**, **FAR32**, and **FLAT** keywords, which require .**386** or above.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)

