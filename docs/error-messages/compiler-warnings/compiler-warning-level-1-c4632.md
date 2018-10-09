---
title: "Compiler Warning (level 1) C4632 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4632"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4632"]
ms.assetid: 9e35d205-cf21-4e34-8bd5-e1e7b0e2cdd3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4632

XML document comment: file - access denied: reason

The path to .xdc file (`file`) was not valid, and no .xdc file created.

The following sample generates C4632:

```
// C4632.cpp
// compile with: /clr /docv:\\falsedir /LD /W1
// C4632 expected

/// Text for class MyClass.
public ref class MyClass {};
```