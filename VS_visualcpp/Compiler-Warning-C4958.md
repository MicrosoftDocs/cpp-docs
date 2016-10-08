---
title: "Compiler Warning C4958"
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
ms.assetid: e79b9e9c-d572-4a3a-a3b6-60962b70864a
caps.latest.revision: 12
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
# Compiler Warning C4958
'operation' : pointer arithmetic is not verifiable  
  
 Using pointer arithmetic will produce an unverifiable image.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../VS_visualcpp/Pure-and-Verifiable-Code--C---CLI-.md).  
  
 This warning is issued as an error and can be disabled with the [warning](../VS_visualcpp/warning.md) pragma or the [/wd](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md) compiler option.  
  
 The following sample generates C4958:  
  
```  
// C4958.cpp  
// compile with: /clr:safe  
// #pragma warning( disable : 4958 )  
using namespace System;  
  
int main( ) {  
   Int32 arr[] = new Int32[10];  
   Int32* p = &arr[0];  
   p++;   // C4958  
}  
```  
  
 The compiler implements array operations with pointer arithmetic. Therefore, native arrays are not verifiable; use a CLR array instead. For more information, see [array](../VS_visualcpp/Arrays--C---Component-Extensions-.md).  
  
 The following sample generates C4958:  
  
```  
// C4958b.cpp  
// compile with: /clr:safe  
// #pragma warning( disable : 4958 )  
  
int main() {  
   int array[5];  
   array[4] = 0;   // C4958  
}  
```