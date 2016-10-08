---
title: "Compiler Error C3862"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: ba547366-4189-4077-8c00-ab45e08a9533
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Compiler Error C3862
'function': cannot compile an unmanaged function with /clr:pure or /clr:safe  
  
 A compilation with **/clr:pure** or **/clr:safe** will produce an MSIL only image, an image with no native (unmanaged) code.  Therefore, you cannot use the `unmanaged` pragma in a **/clr:pure** or **/clr:safe** compilation.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md) and [managed, unmanaged](../VS_visualcpp/managed--unmanaged.md).  
  
## Example  
 The following sample generates C3862:  
  
```  
// C3862.cpp  
// compile with: /clr:pure /c  
#pragma unmanaged  
void f() {}   // C3862  
```