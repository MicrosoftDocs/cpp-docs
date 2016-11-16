---
title: "bad_function_call Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::bad_function_call"
  - "functional/std::tr1::bad_function_call"
  - "std.tr1.bad_function_call"
  - "bad_function_call"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_function_call class [TR1]"
ms.assetid: b70a0268-43ff-4f3b-a283-faf1cb172d4c
caps.latest.revision: 20
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
# bad_function_call Class
Reports a bad function call.  
  
## Syntax  
  
```  
class bad_function_call  
 : public std::exception {  
 };  
```  
  
## Remarks  
 The class describes an exception thrown to indicate that a call to `operator()` on a [function Class](../standard-library/function-class.md)
