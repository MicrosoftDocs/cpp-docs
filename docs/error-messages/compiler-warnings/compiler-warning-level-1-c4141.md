---
title: "Compiler Warning (level 1) C4141 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4141"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4141"]
ms.assetid: 6ce8c058-7f4c-41cf-93e7-90a466744656
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4141

'modifier' : used more than once

## Example

```
// C4141.cpp
// compile with: /W1 /LD
inline inline void func ();   // C4141
```