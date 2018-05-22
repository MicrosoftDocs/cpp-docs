---
title: "Compiler Warning (level 1) C4711 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4711"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4711"
ms.assetid: 270506ab-fead-4328-b714-2978113be238
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4711
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4711](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4711).  
  
  
function 'function' selected for inline expansion  
  
 The compiler performed inlining on the given function, although it was not marked for inlining.  
  
 C4711 is enabled if [/Ob2](../../build/reference/ob-inline-function-expansion.md) is specified.  
  
 Inlining is performed at the compiler's discretion. This warning is informational.  
  
 This warning is off by default. To enable a warning, use [#pragma warning](../../preprocessor/warning.md). See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

