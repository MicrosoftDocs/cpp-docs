---
title: "Compiler Error C3292 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3292"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3292"]
ms.assetid: ead485cc-5471-4e10-b361-300589ff5b70
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3292
the cli namespace cannot be reopened  
  
 The cli namespace cannot be declared in your code.  For more information, see [Platform, default, and cli Namespaces](../../windows/platform-default-and-cli-namespaces-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3292.  
  
```  
// C3292.cpp  
// compile with: /clr /c  
namespace cli {};   // C3292  
```