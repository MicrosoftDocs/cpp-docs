---
title: "Fatal Error C1026 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1026"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1026"
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
caps.latest.revision: 7
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
# Fatal Error C1026
parser stack overflow, program too complex  
  
 The space required to parse the program caused a compiler stack overflow.  
  
 Decrease the complexity of expressions by:  
  
-   Decreasing nesting in `for` and `switch` statements. Put more deeply nested statements in separate functions.  
  
-   Breaking up long expressions that involve comma operators or function calls.