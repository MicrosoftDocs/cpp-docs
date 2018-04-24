---
title: "Compiler Error C3842 | Microsoft Docs"
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
  - "C3842"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3842"
ms.assetid: 41a1a44a-c618-40a2-8d26-7da27d14095d
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3842
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3842](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3842).  
  
  
function': 'const' and 'volatile' qualifiers on member functions of WinRT or managed types are not supported  
  
 [const](../../cpp/const-cpp.md) and [volatile](../../cpp/volatile-cpp.md) are not supported on member functions of Windows Runtime or managed types.  
  
 The following sample generates C3842:  
  
```  
// C3842a.cpp  
// compile with: /clr /c  
public ref struct A {  
   void f() const {}   // C3842  
   void f() volatile {}   // C3842  
  
   void f() {}  
};  
```

