---
title: "Underflow of Floating-Point Values"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
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
# Underflow of Floating-Point Values
**ANSI 4.5.1** Whether the mathematics functions set the integer expression `errno` to the value of the macro `ERANGE` on underflow range errors  
  
 A floating-point underflow does not set the expression `errno` to `ERANGE`. When a value approaches zero and eventually underflows, the value is set to zero.  
  
## See Also  
 [Library Functions](../VS_visualcpp/Library-Functions.md)