---
title: "Compiler Error C2341"
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
ms.assetid: aa2a7da5-e1c8-4225-9939-5bdc50158f31
caps.latest.revision: 9
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
# Compiler Error C2341
'section name' : segment must be defined using #pragma data_seg, code_seg or section prior to use  
  
 An [allocate](../VS_visualcpp/allocate.md) statement refers to a segment not yet defined by [code_seg](../VS_visualcpp/code_seg.md), [data_seg](../VS_visualcpp/data_seg.md), or [section](../VS_visualcpp/section.md) pragmas.  
  
 The following sample generates C2341:  
  
```  
// C2341.cpp  
// compile with: /c  
__declspec(allocate(".test"))   // C2341  
int j = 1;  
```  
  
 Possible resolution:  
  
```  
// C2341b.cpp  
// compile with: /c  
#pragma data_seg(".test")  
__declspec(allocate(".test"))  
int j = 1;  
```