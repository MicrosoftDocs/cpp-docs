---
title: "Compiler Warning C4962 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4962"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4962"
ms.assetid: 62b156fe-04e5-4a6e-9339-6ab148185f87
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning C4962
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning C4962](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-c4962).  
  
  
function' : Profile-guided optimizations disabled because optimizations caused profile data to become inconsistent"  
  
 A function was not compiled with /LTCG:PGO, because count (profile) data for the function was unreliable. Redo profiling to regenerate the .pgc file that contains the unreliable profile data for that function.  
  
 This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

