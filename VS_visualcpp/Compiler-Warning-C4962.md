---
title: "Compiler Warning C4962"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 62b156fe-04e5-4a6e-9339-6ab148185f87
caps.latest.revision: 10
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning C4962
'function' : Profile-guided optimizations disabled because optimizations caused profile data to become inconsistent"  
  
 A function was not compiled with /LTCG:PGO, because count (profile) data for the function was unreliable. Redo profiling to regenerate the .pgc file that contains the unreliable profile data for that function.  
  
 This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md).