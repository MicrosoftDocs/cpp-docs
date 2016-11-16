---
title: "Compiler Warning (level 1) C4920 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4920"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4920"
ms.assetid: 1e501f2e-93c1-4d27-a4fa-54fc86271ae7
caps.latest.revision: 6
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
# Compiler Warning (level 1) C4920
enum enum member member=value already seen in enum enum as member=value  
  
 If a .tlb that you pass to #import has the same symbol defined in two or more enums, this warning indicates that subsequent identical symbols are ignored and will be commented out in the .tlh file.  
  
 Assuming a .tlb that contains:  
  
```  
library MyLib  
{  
    typedef enum {  
        enumMember = 512  
    } AProblem;  
  
    typedef enum {  
        enumMember = 1024  
    } BProblem;  
};  
```  
  
 the following samples generates C4920,  
  
```  
// C4920.cpp  
// compile with: /W1  
#import "t4920.tlb"   // C4920  
  
int main() {  
}  
```