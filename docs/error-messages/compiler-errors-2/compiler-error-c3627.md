---
title: "Compiler Error C3627 | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3627"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3627"
ms.assetid: 905ad0a0-8c49-4187-b66e-b375f5a1fae5
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
# Compiler Error C3627
Only a value type can be boxed  
  
 Only value classes can be boxed.  
  
 The following sample generates C3627:  
  
```  
// C3627.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__value class vA {  
};  
  
__gc class A {  
};  
  
int main()  
{  
   A* a;  
   __box(a);   // C3627  
  
   // box a value type  
   vA va;  
   __box(va);  
}  
```