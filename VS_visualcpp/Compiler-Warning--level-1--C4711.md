---
title: "Compiler Warning (level 1) C4711"
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
ms.assetid: 270506ab-fead-4328-b714-2978113be238
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
# Compiler Warning (level 1) C4711
function 'function' selected for inline expansion  
  
 The compiler performed inlining on the given function, although it was not marked for inlining.  
  
 C4711 is enabled if [/Ob2](../VS_visualcpp/-Ob--Inline-Function-Expansion-.md) is specified.  
  
 Inlining is performed at the compiler's discretion. This warning is informational.  
  
 This warning is off by default. To enable a warning, use [#pragma warning](../VS_visualcpp/warning.md). See [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md) for more information.