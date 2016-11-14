---
title: "Compiler Error C2095 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2095"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2095"
ms.assetid: 44f8ada1-974f-4e81-a408-33ac6695aa53
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
# Compiler Error C2095
'function' : actual parameter has type 'void' : parameter 'number'  
  
 The parameter passed to the function is type `void`, which is not allowed. Use a pointer to void ( `void *`) instead.  
  
 The `number` indicates which parameter is `void`.