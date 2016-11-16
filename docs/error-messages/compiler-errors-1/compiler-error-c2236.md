---
title: "Compiler Error C2236 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2236"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2236"
ms.assetid: 0b6771a7-a783-4729-9c3d-7a3339c432cc
caps.latest.revision: 9
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
# Compiler Error C2236
unexpected token 'identifier'. Did you forget a ';'?  
  
 The identifier is already defined as a type and cannot be overridden by a user-defined type.  
  
 The following sample generates C2236:  
  
```  
// C2236.cpp  
// compile with: /c  
int class A {};  // C2236 "int class" is unexpected  
int i;  
class B {};  
```