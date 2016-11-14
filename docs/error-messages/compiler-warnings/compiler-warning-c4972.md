---
title: "Compiler Warning C4972 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4972"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4972"
ms.assetid: d18e8e65-b2ef-4d75-a207-fbd0c17c9060
caps.latest.revision: 4
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
# Compiler Warning C4972
Directly modifying or treating the result of an unbox operation as an lvalue is unverifiable  
  
 Dereferencing a handle to a value type, also known as unboxing, and then assigning to it is not verifiable.  
  
 For more information, see [Boxing](../../windows/boxing-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C4972.  
  
```  
// C4972.cpp  
// compile with: /clr:safe  
using namespace System;  
ref struct R {  
   int ^ p;   // a value type  
};  
  
int main() {  
   R ^ r = gcnew R;  
   *(r->p) = 10;   // C4972  
  
   // OK  
   r->p = 10;  
   Console::WriteLine( r->p );  
   Console::WriteLine( *(r->p) );  
}  
```