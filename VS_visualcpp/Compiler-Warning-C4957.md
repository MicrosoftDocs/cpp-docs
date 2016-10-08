---
title: "Compiler Warning C4957"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: a18c52d4-23e2-44f1-b4b5-f7fa5a7f3987
caps.latest.revision: 15
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning C4957
'cast' : explicit cast from 'cast_from' to 'cast_to' is not verifiable  
  
 A cast will result in an unverifiable image.  
  
 Some casts are safe (for example, a `static_cast` that triggers user-defined conversions and a `const_cast`). A [safe_cast](../VS_visualcpp/safe_cast--C---Component-Extensions-.md) is guaranteed to produce verifiable code.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../VS_visualcpp/Pure-and-Verifiable-Code--C---CLI-.md).  
  
 This warning is issued as an error and can be disabled with the [warning](../VS_visualcpp/warning.md) pragma or the [/wd](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md) compiler option.  
  
 The following sample generates C4957:  
  
```  
// C4957.cpp  
// compile with: /clr:safe  
// #pragma warning( disable : 4957 )  
using namespace System;  
int main() {  
   Object ^ o = "Hello, World!";  
   String ^ s = static_cast<String^>(o);   // C4957  
   String ^ s2 = safe_cast<String^>(o);   // OK  
}  
```