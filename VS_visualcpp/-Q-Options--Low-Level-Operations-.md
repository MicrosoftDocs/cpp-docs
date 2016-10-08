---
title: "-Q Options (Low-Level Operations)"
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
H1: /Q Options (Low-Level Operations)
ms.assetid: 9fa738b9-630a-4bde-bc87-bdfa30552be4
caps.latest.revision: 24
manager: ghogen
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
# -Q Options (Low-Level Operations)
You can use the **/Q** compiler options to perform the following low-level compiler operations:  
  
-   [/Qfast_transcendentals (Force Fast Transcendentals)](../VS_visualcpp/-Qfast_transcendentals--Force-Fast-Transcendentals-.md): Generates fast transcendentals.  
  
-   [/QIfist (Suppress _ftol)](../VS_visualcpp/-QIfist--Suppress-_ftol-.md): Suppresses `_ftol` when a conversion from a floating-point type to an integer type is required (x86 only).  
  
-   [/Qimprecise_fwaits (Remove fwaits Inside Try Blocks)](../VS_visualcpp/-Qimprecise_fwaits--Remove-fwaits-Inside-Try-Blocks-.md): Removes `fwait` commands inside `try` blocks.  
  
-   [/Qpar (Auto-Parallelizer)](../VS_visualcpp/-Qpar--Auto-Parallelizer-.md): Enables automatic parallelization of loops that are marked with the [#pragma loop()](../VS_visualcpp/loop.md) directive.  
  
-   [/Qpar-report (Auto-Parallelizer Reporting Level)](../VS_visualcpp/-Qpar-report--Auto-Parallelizer-Reporting-Level-.md): Enables reporting levels for automatic parallelization.  
  
-   [/Qsafe_fp_loads](../VS_visualcpp/-Qsafe_fp_loads.md): Suppresses optimizations for floating-point register loads and for moves between memory and MMX registers.  
  
-   [/Qvec-report (Auto-Vectorizer Reporting Level)](../VS_visualcpp/-Qvec-report--Auto-Vectorizer-Reporting-Level-.md): Enables reporting levels for automatic vectorization.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)