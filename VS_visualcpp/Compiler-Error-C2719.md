---
title: "Compiler Error C2719"
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
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
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
# Compiler Error C2719
'parameter': formal parameter with __declspec(align('#')) won't be aligned  
  
 The [align](../VS_visualcpp/align--C---.md) `__declspec` modifier is not permitted on function parameters. Function parameter alignment is controlled by the calling convention used. For more information, see [Calling Conventions](../VS_visualcpp/Calling-Conventions.md).  
  
 The following sample generates C2719 and shows how to fix it:  
  
```  
// C2719.cpp  
void func(int __declspec(align(32)) i);   // C2719  
// try the following line instead  
// void func(int i);  
```