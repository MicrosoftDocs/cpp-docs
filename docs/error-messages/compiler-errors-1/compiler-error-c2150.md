---
title: "Compiler Error C2150 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2150"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2150"
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C2150
'identifier' : bit field must have type 'int', 'signed int', or 'unsigned int'  
  
 bit fields are required to be `int`, `signed``int`, or `unsigned``int`.  
  
 The following sample generates C2150:  
  
```  
// C2150.cpp  
// compile with: /c  
struct A {  
   float a : 8;    // C2150  
   int i : 8;   // OK  
};  
```