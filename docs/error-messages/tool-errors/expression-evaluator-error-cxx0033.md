---
title: "Expression Evaluator Error CXX0033 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Expression Evaluator Error CXX0033
error in OMF type information  
  
 The executable file did not have a valid object module format (OMF) for debugging.  
  
 This error is identical to CAN0033.  
  
### To fix by checking the following possible causes  
  
1.  The executable file was not created with the linker released with this version of Visual C++. Relink the object code using the current version of LINK.exe.  
  
2.  The .exe file may have been corrupted. Recompile and relink the program.