---
title: "Fatal Error C1383 | Microsoft Docs"
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
  - "C1383"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1383"
ms.assetid: ca224d14-d687-4fd6-80c2-8b82f28924ea
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1383
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1383](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1383).  
  
  
compiler option /GL is incompatible with the installed version of common language runtime  
  
 C1383 occurs when you are using a previous version of the common language runtime with a newer compiler, and when you compile with **/clr** and **/GL.**  
  
 To resolve, either do not use **/GL** with **/clr** or install the version of the common language runtime that shipped with your compiler.  
  
 For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) and [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md).

