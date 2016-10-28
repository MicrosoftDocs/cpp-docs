---
title: "Compiler Error C2048"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C2048"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2048"
ms.assetid: 44704726-85fc-42f0-afb9-194df8c4ca7c
caps.latest.revision: 8
ms.author: "corob"
manager: "douge"
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
# Compiler Error C2048
more than one default  
  
 A `switch` statement contains multiple `default` labels. Delete one of the `default` labels to resolve the error.  
  
 The following sample generates C2048:  
  
```  
// C2048.cpp  
int main() {  
   int a = 1;  
   switch (a) {  
      case 1:  
         a = 0;  
      default:  
         a = 2;  
      default:   // C2048  
         a = 3;  
   }  
}  
```  
  
 Possible resolution:  
  
```  
// C2048b.cpp  
int main() {  
   int a = 1;  
   switch (a) {  
      case 1:  
         a = 0;  
      default:  
         a = 2;  
   }  
}  
```