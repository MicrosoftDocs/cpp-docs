---
title: "Compiler Warning C4956 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4956"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4956"]
ms.assetid: 9154f2d1-d49f-4e07-90d2-0e9bc028011a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning C4956
'type' : this type is not verifiable  
  
 This warning is generated when [/clr:safe](../../build/reference/clr-common-language-runtime-compilation.md) is specified and your code contains a type that is not verifiable.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 This warning is issued as an error and can be disabled with the [warning](../../preprocessor/warning.md) pragma or the [/wd](../../build/reference/compiler-option-warning-level.md) compiler option.  
  
 The following sample generates C4956:  
  
```  
// C4956.cpp  
// compile with: /clr:safe  
int* p;   // C4956  
```