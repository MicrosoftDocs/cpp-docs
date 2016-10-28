---
title: "Compiler Error C2674"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C2674"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2674"
ms.assetid: 7cbd70d8-d992-44d7-a5cb-dd8cf9c759d2
caps.latest.revision: 7
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
# Compiler Error C2674
a generic declaration is not allowed in this context  
  
 A generic was declared incorrectly. For more information, see [Generics](../windows/generics---c---component-extensions-.md).  
  
## Example  
 The following sample generates C2674.  
  
```  
// C2674.cpp  
// compile with: /clr /c  
void F(generic <class T> ref class R1);   // C2674  
generic <class T> ref class R2 {};   // OK  
```