---
title: "main Function Restrictions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Main"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "main function, restrictions on using"
ms.assetid: 7b3df731-344b-44a8-850c-11cbcbfbfa83
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# main Function Restrictions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [main Function Restrictions](https://docs.microsoft.com/cpp/cpp/main-function-restrictions).  
  
Several restrictions apply to the **main** function that do not apply to any other C++ functions. The **main** function:  
  
-   Cannot be overloaded (see [Overloading](../misc/overloading-cpp.md)).  
  
-   Cannot be declared as **inline**.  
  
-   Cannot be declared as **static**.  
  
-   Cannot have its address taken.  
  
-   Cannot be called.  
  
## See Also  
 [main: Program Startup](../cpp/main-program-startup.md)





