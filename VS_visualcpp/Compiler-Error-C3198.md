---
title: "Compiler Error C3198"
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
ms.assetid: ec4ecf61-0067-4aa4-b443-a91013a1e59d
caps.latest.revision: 8
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
# Compiler Error C3198
invalid use of floating-point pragmas: fenv_access pragma operates only in precise mode  
  
 [fenv_access](../VS_visualcpp/fenv_access.md) pragma was used under an [/fp](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md) setting other than **/fp:precise**.  
  
 The following sample generates C3198:  
  
```  
// C3198.cpp  
// compile with: /fp:fast  
#pragma fenv_access(on)   // C3198  
```