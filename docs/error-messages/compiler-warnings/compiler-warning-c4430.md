---
title: "Compiler Warning C4430 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4430"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4430"
ms.assetid: 12efbfff-aa58-4a86-a7d6-2c6a12d01dd3
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
# Compiler Warning C4430
missing type specifier - int assumed. Note: C++ does not support default-int  
  
 This error can be generated as a result of compiler conformance work that was done for Visual C++ 2005: all declarations must explicitly specify the type; int is no longer assumed.  
  
 C4430 is always issued as an error.  You can turn off this warning with the `#pragma warning` or **/wd**; see [warning](../../preprocessor/warning.md) or [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../../build/reference/compiler-option-warning-level.md) for more information.  
  
## Example  
 The following sample generates C4430.  
  
```  
// C4430.cpp  
// compile with: /c  
struct CMyClass {  
   CUndeclared m_myClass;  // C4430  
   int m_myClass;  // OK  
};  
  
typedef struct {  
   POINT();   // C4430  
   // try the following line instead  
   // int POINT();  
   unsigned x;  
   unsigned y;  
} POINT;  
```