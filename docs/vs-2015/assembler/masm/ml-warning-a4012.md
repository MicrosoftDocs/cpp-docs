---
title: "ML Warning A4012 | Microsoft Docs"
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
  - "A4012"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A4012"
ms.assetid: 842b1259-9679-4eeb-a02d-672a583a94e5
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Warning A4012
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ML Warning A4012](https://docs.microsoft.com/cpp/assembler/masm/ml-warning-a4012).  
  
  
line number information for segment without class 'CODE'**  
  
 There were instructions in a segment that did not have a class name that ends with "CODE." The assembler did not generate CodeView information for these instructions.  
  
 CodeView cannot process modules with code in segments with class names that do not end with "CODE."  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)

