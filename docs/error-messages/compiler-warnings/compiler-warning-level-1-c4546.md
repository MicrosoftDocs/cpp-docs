---
title: "Compiler Warning (level 1) C4546 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4546"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4546"
ms.assetid: 071e1709-3841-46c1-8e71-96109cd22041
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
# Compiler Warning (level 1) C4546
function call before comma missing argument list  
  
 The compiler detected an ill-formed comma expression.  
  
 This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Example  
 The following sample generates C4546:  
  
```  
// C4546.cpp  
// compile with: /W1  
#pragma warning (default : 4546)  
void f(int i) {  
   i++;  
}  
  
int main() {  
   int i = 0, k = 0;  
  
   if ( f, k )   // C4546  
   // try the following line instead  
   // if ( f(i), k )  
      i++;  
}  
```