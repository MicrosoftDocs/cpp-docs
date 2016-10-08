---
title: "Compiler Warning (level 4) C4092"
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
ms.assetid: 396ae826-a892-4327-bd66-f4762376d72b
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
# Compiler Warning (level 4) C4092
sizeof returns 'unsigned long'  
  
 The operand of the `sizeof` operator was very large, so `sizeof` returned an unsigned **long**. This warning occurs under the Microsoft extensions ([/Ze](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)). Under ANSI compatibility (/Za), the result is truncated instead.