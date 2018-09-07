---
title: "Compiler Warning (level 1) C4615 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4615"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4615"]
ms.assetid: 7b107c01-0da2-4e01-8b40-93813e30b94c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4615
\#pragma warning : unknown user warning type  
  
 An invalid warning specifier was used with **pragma** [warning](../../preprocessor/warning.md). To resolve the error, use a valid warning specifier.  
  
 The following sample generates C4615:  
  
```  
// C4615.cpp  
// compile with: /W1 /LD  
#pragma warning(enable : 4401)   // C4615, 'enable' not valid specifier  
  
// use the code below to resolve the error  
// #pragma warning(default : 4401)  
```