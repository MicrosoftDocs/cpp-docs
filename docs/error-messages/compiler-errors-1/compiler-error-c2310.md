---
title: "Compiler Error C2310 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2310"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2310"
ms.assetid: 1969c682-b97e-43fb-b9a9-f783e7ff1710
caps.latest.revision: 8
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
# Compiler Error C2310
catch handlers must specify one type  
  
 A catch handler specified no type or multiple types.  
  
 The following sample generates C2310:  
  
```  
// C2310.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "Out of memory!";  
   }  
   catch( int ,int) {}   // C2310 two types  
   // try the following line instead  
   // catch( int)  {}  
}  
```