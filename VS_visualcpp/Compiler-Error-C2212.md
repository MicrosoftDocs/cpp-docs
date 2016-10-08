---
title: "Compiler Error C2212"
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
ms.assetid: 3fdab304-272c-4d07-bfd4-fad75170e536
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
# Compiler Error C2212
'identifier' : __based not available for pointers to functions  
  
 Pointers to functions cannot be declared `__based`. If you need code-based data, use the `__declspec` keyword or the `data_seg` pragma.