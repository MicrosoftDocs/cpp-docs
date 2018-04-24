---
title: "Expression Evaluator Error CXX0019 | Microsoft Docs"
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
  - "CXX0019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CXX0019"
  - "CAN0019"
ms.assetid: 4c6431fd-3310-4a61-934d-58b070b330fe
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0019
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Evaluator Error CXX0019](https://docs.microsoft.com/cpp/error-messages/tool-errors/expression-evaluator-error-cxx0019).  
  
  
bad type cast  
  
 The C expression evaluator cannot perform the type cast as written.  
  
 This error is identical to CAN0019.  
  
### To fix by checking the following possible causes  
  
1.  The specified type is unknown.  
  
2.  There were too many levels of pointer types. For example, the type cast  
  
    ```  
    (char **)h_message  
    ```  
  
     cannot be evaluated by the C expression evaluator.

