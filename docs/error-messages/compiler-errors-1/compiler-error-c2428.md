---
title: "Compiler Error C2428 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2428"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2428"
ms.assetid: 74aa5714-e930-4f9e-9061-68ccce7f0d38
caps.latest.revision: 7
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
# Compiler Error C2428
'operation' : not allowed on operand of type 'bool'  
  
 You cannot apply a decrement operator to objects of type `bool`.  
  
 The following sample generates C2428:  
  
```  
// C2428.cpp  
void g(bool fFlag) {  
   --fFlag;   // C2428  
   fFlag--;   // C2428  
}  
```