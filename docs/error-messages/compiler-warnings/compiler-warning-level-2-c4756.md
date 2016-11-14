---
title: "Compiler Warning (level 2) C4756 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4756"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4756"
ms.assetid: 5a16df83-6b82-4619-83bd-319af4ef1d1d
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
# Compiler Warning (level 2) C4756
overflow in constant arithmetic  
  
 The compiler generated an exception while doing constant arithmetic during compilation.  
  
 The following sample generates C4756:  
  
```  
// C4756.cpp  
// compile with: /W2 /Od  
int main()  
{  
   float f = 1e100+1e100;   // C4756  
}  
```