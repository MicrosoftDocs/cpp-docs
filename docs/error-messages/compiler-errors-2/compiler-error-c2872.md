---
title: "Compiler Error C2872 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2872"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2872"
ms.assetid: c619ef97-6e0e-41d7-867c-f8d28a07d553
caps.latest.revision: 11
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
# Compiler Error C2872
'symbol' : ambiguous symbol  
  
 The compiler cannot determine which symbol you are referring to.  
  
 C2872 can occur if a header file includes a [using Directive](../../misc/using-directive-cpp.md), and a subsequent header file is `#include`'d and contains a type that is also in the namespace specified in the `using` directive. Specify a `using` directive only after all your header files are specified with `#include`.  
  
 For more information about C2872, see [http://support.microsoft.com/default.aspx?scid=kb;en-us;316317](http://support.microsoft.com/default.aspx?scid=kb;en-us;316317).  
  
 The following sample generates C2872:  
  
```  
// C2872.cpp  
namespace A {  
   int i;  
}  
  
using namespace A;  
int i;  
int main() {  
   ::i++;   // ok  
   A::i++;   // ok  
   i++;   // C2872 ::i or A::i?  
}  
```