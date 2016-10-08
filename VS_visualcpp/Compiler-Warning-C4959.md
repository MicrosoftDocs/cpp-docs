---
title: "Compiler Warning C4959"
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
ms.assetid: 3a128f3e-4d8a-4565-ba1a-5d32fdeb5982
caps.latest.revision: 11
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
# Compiler Warning C4959
cannot define unmanaged struct 'type' in /clr:safe because accessing its members yields unverifiable code  
  
 Accessing a member of an unmanaged type will produce an unverifiable (peverify.exe) image.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../VS_visualcpp/Pure-and-Verifiable-Code--C---CLI-.md).  
  
 This warning is issued as an error and can be disabled with the [warning](../VS_visualcpp/warning.md) pragma or the [/wd](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md) compiler option.  
  
 The following sample generates C4959:  
  
```  
// C4959.cpp  
// compile with: /clr:safe  
  
// Uncomment the following line to resolve.  
// #pragma warning( disable : 4959 )  
struct X {  
   int data;  
};  
  
int main() {  
   X x;  
   x.data = 10;   // C4959  
}  
```