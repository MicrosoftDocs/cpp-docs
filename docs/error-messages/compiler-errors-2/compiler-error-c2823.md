---
title: "Compiler Error C2823 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2823"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2823"
ms.assetid: 982b1b35-1a7c-456e-b711-f80cfe2d571e
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
# Compiler Error C2823
a typedef template is illegal  
  
 Templates are not allowed in [typedef](http://msdn.microsoft.com/en-us/cc96cf26-ba93-4179-951e-695d1f5fdcf1) definitions.  
  
 The following sample generates C2823:  
  
```  
// C2823.cpp  
template<class T>  
typedef struct x {  
   T i;   // C2823 can't use T, specify data type and delete template  
   int i;   // OK  
} x1;  
```