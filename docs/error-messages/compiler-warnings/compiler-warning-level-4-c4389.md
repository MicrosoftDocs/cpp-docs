---
title: "Compiler Warning (level 4) C4389 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "c4389"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4389"
ms.assetid: fc0e3a8e-f766-437c-b7f1-e61abb2a8765
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
# Compiler Warning (level 4) C4389
'operator' : signed/unsigned mismatch  
  
 An operation involved signed and unsigned variables. This could result in a loss of data.  
  
 The following sample generates C4389:  
  
```  
// C4389.cpp  
// compile with: /W4  
#pragma warning(default: 4389)  
  
int main()  
{  
   int a = 9;  
   unsigned int b = 10;  
   if (a == b)   // C4389  
      return 0;  
   else  
      return 0;  
};  
```