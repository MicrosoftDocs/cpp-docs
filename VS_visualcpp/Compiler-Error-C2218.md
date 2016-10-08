---
title: "Compiler Error C2218"
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
ms.assetid: b0f55da4-8edb-4b45-b298-1a091981bd7b
caps.latest.revision: 9
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
# Compiler Error C2218
'__vectorcall' cannot be used with '/arch:IA32'  
  
 The `__vectorcall` calling convention is only supported in native code on x86 and x64 processors that include Streaming SIMD Extensions 2 (SSE2) and above. For more information, see [__vectorcall](../VS_visualcpp/__vectorcall.md).  
  
 To fix this error, change the compiler options to target SSE2, AVX or AVX2 instruction sets. For more information, see [/arch (x86)](../VS_visualcpp/-arch--x86-.md).