---
title: "Compiler Error C3834 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3834"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3834"
ms.assetid: 059e0dc4-300b-4e74-b6c2-41a57831fe2a
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3834
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3834](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3834).  
  
  
illegal explicit cast to a pinning pointer; use a pinned local variable instead  
  
 Explicit casts to a pinned pointer are not allowed.  
  
## Example  
 The following sample generates C3834.  
  
```  
// C3834.cpp  
// compile with: /clr  
int main() {  
   int x = 33;  
  
   pin_ptr<int> p = safe_cast<pin_ptr<int> >(&x);   // C3834  
   pin_ptr<int> p2 = &x;   // OK  
}  
```  
  
## Example  
 The following sample generates C3834.  
  
```  
// C3834_b.cpp  
// compile with: /clr:oldSyntax  
using namespace System;  
  
int main() {  
   const __wchar_t * pS = reinterpret_cast<const __wchar_t __pin*>(S"hello");   // C3834  
  
   // OK   
   // declare a pinning variable  
   String __pin* ppin = S"Hello";  
  
   // cast pinning variable to unmanaged type  
   const __wchar_t * pS2 = reinterpret_cast<__wchar_t*>(ppin);     
  
   pS2 += 6;  
}  
```

