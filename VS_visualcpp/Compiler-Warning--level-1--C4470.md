---
title: "Compiler Warning (level 1) C4470"
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
ms.assetid: f52a3eaa-a235-4747-a47d-9ec4ad4cb0ea
caps.latest.revision: 10
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
# Compiler Warning (level 1) C4470
floating-point control pragmas ignored under /clr  
  
 The float-control pragmas:  
  
-   [fenv_access](../VS_visualcpp/fenv_access.md)  
  
-   [float_control](../VS_visualcpp/float_control.md)  
  
-   [fp_contract](../VS_visualcpp/fp_contract.md)  
  
 have no effect under [/clr](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md).  
  
 The following sample generates C4470:  
  
```  
// C4470.cpp  
// compile with: /clr /W1 /LD  
#pragma float_control(except, on)   // C4470  
```