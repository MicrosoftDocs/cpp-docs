---
title: "Resource Compiler Fatal Error RC1102 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC1102"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1102"
ms.assetid: bd2091f8-ef5e-4151-a8d6-98043e9422b6
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
# Resource Compiler Fatal Error RC1102
internal error : too many arguments to RCPP  
  
 Too many arguments were passed to the Resource Compiler preprocessor. Reduce the number of symbols defined with the Define Symbols (/d) option by defining them in your source. This error can also be caused by specifying too many include file search paths using the Include Search Path option (/i).