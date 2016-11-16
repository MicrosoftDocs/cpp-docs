---
title: "Compiler Error C3199 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3199"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3199"
ms.assetid: e7a478d3-115a-40a3-991b-c7454fd2e28e
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
# Compiler Error C3199
invalid use of floating-point pragmas: exceptions are not supported in non-precise mode  
  
 The [float_control](../../preprocessor/float-control.md) pragma was used to specify floating-point exception model under an [/fp](../../build/reference/fp-specify-floating-point-behavior.md) setting other than **/fp:precise**.  
  
 The following sample generates C3199:  
  
```  
// C3199.cpp  
// compile with: /fp:fast  
#pragma float_control(except, on)   // C3199  
```