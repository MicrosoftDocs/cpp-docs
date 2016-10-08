---
title: "Compiler Warning C4746"
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
ms.assetid: 5e79ab46-6031-499a-a986-716c866b6c0e
caps.latest.revision: 2
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
# Compiler Warning C4746
volatile access of '<expression\>' is subject to /volatile:[iso&#124;ms] setting; consider using __iso_volatile_load/store intrinsic functions.  
  
 C4746 is emitted whenever a volatile variable is accessed directly. It is intended to help developers identify code locations that are affected by the specific volatile model currently specified (which can be controlled with the [/volatile](../VS_visualcpp/-volatile--volatile-Keyword-Interpretation-.md) compiler option). In particular, it can be useful in locating compiler-generated hardware memory barriers when /volatile:ms is used.  
  
 The __iso_volatile_load/store intrinsics can be used to explicitly access volatile memory without being affected by the volatile model. Using these intrinsics will not trigger C4746.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md) for more information.