---
title: "Intrinsics and Inline Assembly"
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
ms.topic: article
ms.assetid: 8affd4bb-279d-46f3-851f-8be0a9c5ed3f
caps.latest.revision: 10
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
# Intrinsics and Inline Assembly
One of the constraints for the x64 compiler is to have no inline assembler support. This means that functions that cannot be written in C or C++ will either have to be written as subroutines or as intrinsic functions supported by the compiler. Certain functions are performance sensitive while others are not. Performance-sensitive functions should be implemented as intrinsic functions.  
  
 The intrinsics supported by the compiler are described in [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md).  
  
## See Also  
 [x64 Software Conventions](../VS_visualcpp/x64-Software-Conventions.md)