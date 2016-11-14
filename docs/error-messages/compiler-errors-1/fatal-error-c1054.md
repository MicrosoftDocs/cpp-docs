---
title: "Fatal Error C1054 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1054"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1054"
ms.assetid: 9cfb7307-b22a-4418-b7c0-2621b0ab5b1b
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
# Fatal Error C1054
compiler limit : initializers nested too deeply  
  
 The code exceeds the nesting limit on initializers (10-15 levels, depending on the combination of types being initialized).  
  
### To fix by using the following possible solutions  
  
1.  Simplify the data types being initialized to reduce nesting.  
  
2.  Initialize variables in separate statements after the declaration.