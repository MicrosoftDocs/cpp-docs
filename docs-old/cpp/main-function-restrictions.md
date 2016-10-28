---
title: "main Function Restrictions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "Main"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "main function, restrictions on using"
ms.assetid: 7b3df731-344b-44a8-850c-11cbcbfbfa83
caps.latest.revision: 8
ms.author: "mblome"
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
# main Function Restrictions
Several restrictions apply to the **main** function that do not apply to any other C++ functions. The **main** function:  
  
-   Cannot be overloaded (see [Overloading](../notintoc/overloading---c---.md)).  
  
-   Cannot be declared as **inline**.  
  
-   Cannot be declared as **static**.  
  
-   Cannot have its address taken.  
  
-   Cannot be called.  
  
## See Also  
 [main: Program Startup](../cpp/main--program-startup.md)