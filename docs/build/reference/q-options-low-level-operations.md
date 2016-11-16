---
title: "-Q Options (Low-Level Operations) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/q"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Q compiler option [C++]"
  - "-Q compiler option [C++]"
  - "/Q compiler option [C++]"
ms.assetid: 9fa738b9-630a-4bde-bc87-bdfa30552be4
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /Q Options (Low-Level Operations)
You can use the **/Q** compiler options to perform the following low-level compiler operations:  
  
-   [/Qfast_transcendentals (Force Fast Transcendentals)](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md): Generates fast transcendentals.  
  
-   [/QIfist (Suppress _ftol)](../../build/reference/qifist-suppress-ftol.md): Suppresses `_ftol` when a conversion from a floating-point type to an integer type is required (x86 only).  
  
-   [/Qimprecise_fwaits (Remove fwaits Inside Try Blocks)](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md): Removes `fwait` commands inside `try` blocks.  
  
-   [/Qpar (Auto-Parallelizer)](../../build/reference/qpar-auto-parallelizer.md): Enables automatic parallelization of loops that are marked with the [#pragma loop()](../../preprocessor/loop.md) directive.  
  
-   [/Qpar-report (Auto-Parallelizer Reporting Level)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md): Enables reporting levels for automatic parallelization.  
  
-   [/Qsafe_fp_loads](../../build/reference/qsafe-fp-loads.md): Suppresses optimizations for floating-point register loads and for moves between memory and MMX registers.  
  
-   [/Qvec-report (Auto-Vectorizer Reporting Level)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md): Enables reporting levels for automatic vectorization.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)