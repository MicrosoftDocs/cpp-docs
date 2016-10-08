---
title: "Compiler Error C2129"
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
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
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
# Compiler Error C2129
static function 'function' declared but not defined  
  
 A forward reference is made to a `static` function that is never defined.  
  
 A `static` function must be defined within file scope. If the function is defined in another file, it must be declared `extern`.