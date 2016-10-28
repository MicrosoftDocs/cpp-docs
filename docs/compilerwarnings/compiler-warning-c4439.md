---
title: "Compiler Warning C4439"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C4439"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4439"
ms.assetid: 9449958f-f407-4824-829b-9e092f2af97d
caps.latest.revision: 6
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
# Compiler Warning C4439
'function' : function definition with a managed type in the signature must have a __clrcall calling convention  
  
 The compiler implicitly replaced a calling convention with [__clrcall](../cpp/__clrcall.md). To resolve this warning, remove the `__cdecl` or `__stdcall` calling convention.  
  
 C4439 is always issued as an error. You can turn off this warning with the `#pragma warning` or **/wd**; see [warning](../c/warning.md) or [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md) for more information.  
  
## Example  
 The following sample generates C4439.  
  
```  
// C4439.cpp  
// compile with: /clr  
void __stdcall f( System::String^ arg ) {}   // C4439  
void __clrcall f2( System::String^ arg ) {}   // OK  
void f3( System::String^ arg ) {}   // OK  
```