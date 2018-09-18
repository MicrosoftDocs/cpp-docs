---
title: "Command-Line Warning D9043 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["D9043"]
dev_langs: ["C++"]
helpviewer_keywords: ["D9043"]
ms.assetid: 9263e28d-217b-414c-bfb6-86efd3c27a77
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Command-Line Warning D9043

invalid value 'warning_level' for 'compiler_option'; assuming '4999'; Code Analysis warnings are not associated with warning levels

## Example

The following sample generates C9043.

```
// D9043.cpp
// compile with: /analyze /w16001
// D9043 warning expected
int main() {}
```