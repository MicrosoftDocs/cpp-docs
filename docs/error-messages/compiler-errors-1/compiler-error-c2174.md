---
title: "Compiler Error C2174 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2174"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2174"
ms.assetid: 161d563c-76e9-47e9-9142-7812e9ea169e
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
# Compiler Error C2174
'function' : actual parameter has type 'void' : parameter number1, parameter list number2  
  
 Parameter `number1` passed to parameter list `number2` is a `void` parameter. Parameters cannot have type `void`. Use `void*` instead.