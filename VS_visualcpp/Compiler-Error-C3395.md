---
title: "Compiler Error C3395"
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
ms.assetid: 26a9ebc9-ed97-47ce-b436-19aa2bcf6e50
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
# Compiler Error C3395
'function' : __declspec(dllexport) cannot be applied to a function with the \__clrcall calling convention  
  
 `__declspec(dllexport)` and [__clrcall](../VS_visualcpp/__clrcall.md) are not compatible.  For more information, see [dllexport, dllimport](../VS_visualcpp/dllexport--dllimport.md).  
  
 The following sample generates C3395:  
  
```  
// C3395.cpp  
// compile with: /clr /c  
  
__declspec(dllexport) void __clrcall Test(){}   // C3395  
void __clrcall Test2(){}   // OK  
__declspec(dllexport) void Test3(){}   // OK  
```