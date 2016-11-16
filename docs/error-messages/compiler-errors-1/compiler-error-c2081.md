---
title: "Compiler Error C2081 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2081"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2081"
ms.assetid: 7db9892d-364d-4178-a49d-f8398ece09a0
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
# Compiler Error C2081
'identifier' : name in formal parameter list illegal  
  
 The identifier caused a syntax error.  
  
 This error can be caused by using the old style for the formal parameter list. You must specify the type of formal parameters in the formal parameter list.  
  
 The following sample generates C2081:  
  
```  
// C2081.c  
void func( int i, j ) {}  // C2081, no type specified for j  
```  
  
 Possible resolution:  
  
```  
// C2081b.c  
// compile with: /c  
void func( int i, int j ) {}  
```