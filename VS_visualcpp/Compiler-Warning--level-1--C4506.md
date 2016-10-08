---
title: "Compiler Warning (level 1) C4506"
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
ms.assetid: aa682869-65d1-4dad-ba32-198f10b44f91
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
# Compiler Warning (level 1) C4506
no definition for inline function 'function'  
  
 The given function was declared and marked for inlining but was not defined.  
  
 The compiler did not inline the function.  
  
 Make sure that external functions to be inlined are declared with the `extern` keyword.