---
title: "Compiler Error C3274"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C3274"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3274"
ms.assetid: 1f03f18e-b569-48eb-9249-11c70122a305
caps.latest.revision: 11
ms.author: "corob"
manager: "douge"
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
# Compiler Error C3274
__finally/finally without matching try  
  
 A [__finally](../cpp/try-finally-statement.md) or [finally](../cli/finally.md) statement was found without a matching `try`. To resolve this, either delete the `__finally` statement or add a `try` statement for the `__finally`.  
  
 The following sample generates C3274:  
  
```  
// C3274.cpp  
// compile with: /clr  
// C3274 expected  
using namespace System;  
int main() {  
   try {  
      try {  
         throw gcnew ApplicationException();  
      }  
      catch(...) {  
         Console::Error->WriteLine(L"Caught an exception");  
      }  
      finally {  
         Console::WriteLine(L"In finally");  
      }  
   } finally {  
      Console::WriteLine(L"In finally");  
   }  
  
   // Uncomment the following 3 lines to resolve.  
   // try {  
   //   throw gcnew ApplicationException();  
   // }  
  
   finally {  
      Console::WriteLine(L"In finally");  
   }  
   Console::WriteLine(L"**FAIL**");  
}  
```