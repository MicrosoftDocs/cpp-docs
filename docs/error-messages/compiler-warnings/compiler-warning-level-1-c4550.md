---
title: "Compiler Warning (level 1) C4550 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4550"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4550"
ms.assetid: f902b4ed-5f17-48ea-b693-92f4fb8c8054
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
# Compiler Warning (level 1) C4550
expression evaluates to a function which is missing an argument list  
  
 A dereferenced pointer to a function is missing an argument list.  
  
## Example  
  
```  
// C4550.cpp  
// compile with: /W1  
bool f()  
{  
   return true;  
}  
  
typedef bool (*pf_t)();  
  
int main()  
{  
   pf_t pf = f;  
   if (*pf) {}  // C4550  
   return 0;  
}  
```