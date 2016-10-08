---
title: "Linker Tools Error LNK1164"
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
ms.assetid: da89765c-affa-4f88-b170-6d6b19a577cf
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
# Linker Tools Error LNK1164
section section alignment (number) greater than /ALIGN value  
  
 The alignment size for the given section in the object file exceeds the value specified with the [/ALIGN](../VS_visualcpp/-ALIGN--Section-Alignment-.md) option. The **/ALIGN** value must be a power of 2 and must equal or exceed the section alignment given in the object file.  
  
 Either recompile with a smaller section alignment or increase the **/ALIGN** value.