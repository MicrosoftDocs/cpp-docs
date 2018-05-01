---
title: "Expression Evaluator Error CXX0033 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0033"
  - "CXX0033"
ms.assetid: 0bd62c5b-de89-481f-9b12-88fe84805afe
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0033
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Evaluator Error CXX0033](https://docs.microsoft.com/cpp/error-messages/tool-errors/expression-evaluator-error-cxx0033).  
  
  
error in OMF type information  
  
 The executable file did not have a valid object module format (OMF) for debugging.  
  
 This error is identical to CAN0033.  
  
### To fix by checking the following possible causes  
  
1.  The executable file was not created with the linker released with this version of Visual C++. Relink the object code using the current version of LINK.exe.  
  
2.  The .exe file may have been corrupted. Recompile and relink the program.

