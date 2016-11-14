---
title: "Compiler Warning (level 1) C4172 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4172"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4172"
ms.assetid: a8d2bf65-d8b1-4fe3-8340-a223d7e7fde6
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
# Compiler Warning (level 1) C4172
returning address of local variable or temporary  
  
 A function returns the address of a local variable or temporary object. Local variables and temporary objects are destroyed when a function returns, so the address returned is not valid.  
  
 Redesign the function so that it does not return the address of a local object.  
  
 The following sample generates C4172:  
  
```  
// C4172.cpp  
// compile with: /W1 /LD  
float f = 10;  
  
const double& bar() {  
// try the following line instead  
// const float& bar() {  
   return f;   // C4172  
}  
```