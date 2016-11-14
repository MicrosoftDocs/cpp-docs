---
title: "Compiler Warning (level 1) C4138 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4138"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4138"
ms.assetid: 65ebf929-bba0-4237-923b-c1b66adfe17d
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
# Compiler Warning (level 1) C4138
'*/' found outside of comment  
  
 The closing-comment delimiter is not preceded by an opening-comment delimiter. The compiler assumes a space between the asterisk (**\***) and the forward slash (/).  
  
## Example  
  
```  
// C4138a.cpp  
// compile with: /W1  
int */*comment*/ptr;   // C4138 Ambiguous first delimiter causes warning  
int main()  
{  
}  
```  
  
 This warning can be caused by trying to nest comments.  
  
 This warning may be resolved if you comment out sections of code that contain comments, enclose the code in an **#if/#endif** block, and set the controlling expression to zero:  
  
```  
// C4138b.cpp  
// compile with: /W1  
#if 0  
int my_variable;   /* Declaration currently not needed */  
#endif  
int main()  
{  
}  
```