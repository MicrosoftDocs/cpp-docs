---
title: "Compiler Warning (level 1) C4711 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4711"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4711"]
ms.assetid: 270506ab-fead-4328-b714-2978113be238
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4711
function 'function' selected for inline expansion  
  
 The compiler performed inlining on the given function, although it was not marked for inlining.  
  
 C4711 is enabled if [/Ob2](../../build/reference/ob-inline-function-expansion.md) is specified.  
  
 Inlining is performed at the compiler's discretion. This warning is informational.  
  
 This warning is off by default. To enable a warning, use [#pragma warning](../../preprocessor/warning.md). See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.