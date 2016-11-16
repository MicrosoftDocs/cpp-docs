---
title: "Expression Evaluator Error CXX0019 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Expression Evaluator Error CXX0019
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