---
title: "Compiler Warning (level 1) C4627 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4627"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4627"]
ms.assetid: 8840f3e6-b496-423a-8635-eb55d5f854a2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4627
'\<identifier>': skipped when looking for precompiled header use  
  
 While searching for the location where a precompiled header is used, the compiler encountered an `#include` directive for the *\<identifier>* include file. The compiler ignores the `#include` directive, but issues warning **C4627** if the precompiled header does not already contain the *\<identifier>* include file.  
  
## See Also  
 [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)