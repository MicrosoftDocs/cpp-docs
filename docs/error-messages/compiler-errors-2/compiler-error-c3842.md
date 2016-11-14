---
title: "Compiler Error C3842 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Compiler Error C3842
'function': 'const' and 'volatile' qualifiers on member functions of WinRT or managed types are not supported  
  
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