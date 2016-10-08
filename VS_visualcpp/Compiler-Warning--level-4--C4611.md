---
title: "Compiler Warning (level 4) C4611"
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
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
caps.latest.revision: 7
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
# Compiler Warning (level 4) C4611
interaction between 'function' and C++ object destruction is non-portable  
  
 On some platforms, functions that include **catch** may not support C++ object semantics of destruction when out of scope.  
  
 To avoid unexpected behavior, avoid using **catch** in functions that have constructors and destructors.  
  
 This warning is only issued once; see [pragma warning](../VS_visualcpp/warning.md).