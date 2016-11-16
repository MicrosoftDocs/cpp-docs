---
title: "Compiler Warning (level 1) C4145 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4145"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4145"
ms.assetid: 0440777a-cca2-4159-aff5-e67a254ad64a
caps.latest.revision: 7
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
# Compiler Warning (level 1) C4145
'expression1' : relational expression as switch expression; possible confusion with 'expression2'  
  
 A `switch` statement uses a relational expression as its control expression, which results in a Boolean value for the **case** statements. Did you mean *expression2*?  
  
## Example  
 The following sample generates C4145:  
  
```  
// C4145.cpp  
// compile with: /W1  
int main() {  
   int i = 0;  
   switch(i == 1) {   // C4145, use i instead of i == 1 to resolve  
      case 1:  
         break;  
      default:  
         break;  
   }  
}  
```