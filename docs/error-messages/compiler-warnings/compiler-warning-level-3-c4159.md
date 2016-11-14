---
title: "Compiler Warning (level 3) C4159 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4159"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4159"
ms.assetid: e2cf964e-f4b8-4b2c-9569-1abb94307232
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
# Compiler Warning (level 3) C4159
\#pragma pragma(pop,...) : has popped previously pushed identifier 'identifier'  
  
 Your source code contains a **push** instruction with an identifier for a pragma followed by a **pop** instruction without an identifier. As a result, ***identifier*** is popped, and subsequent uses of ***identifier*** may cause unexpected behavior.  
  
 To avoid this warning, give an identifier in the **pop** instruction. For example:  
  
```  
// C4159.cpp  
// compile with: /W3  
#pragma pack(push, f)  
#pragma pack(pop)   // C4159  
  
// using the identifier resolves the warning  
// #pragma pack(pop, f)  
  
int main()  
{  
}  
```