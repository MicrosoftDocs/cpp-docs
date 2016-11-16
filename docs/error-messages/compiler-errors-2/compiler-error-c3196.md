---
title: "Compiler Error C3196 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3196"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3196"
ms.assetid: d9c38a13-191d-472d-aa2b-f61a6459d16c
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
# Compiler Error C3196
'keyword' : used more than once  
  
 A keyword was used more than once.  
  
 The following sample generates C3196:  
  
```  
// C3196.cpp  
// compile with: /clr  
ref struct R abstract abstract {};   // C3196  
ref struct S abstract {};   // OK  
```