---
title: "Compiler Error C2196 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2196"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2196"
ms.assetid: fd2f6a58-48ce-4e58-96f8-e37720feb8e7
caps.latest.revision: 8
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
# Compiler Error C2196
case value 'value' already used.  
  
 A switch statement uses the same case value more than once.  
  
 The following sample generates C2196:  
  
```  
// C2196.cpp  
int main() {  
   int i = 0;  
   switch( i ) {  
   case 0:  
      break;  
   case 0:   // C2196  
   // try the following line instead  
   // case 1:  
      break;  
   }  
}  
```