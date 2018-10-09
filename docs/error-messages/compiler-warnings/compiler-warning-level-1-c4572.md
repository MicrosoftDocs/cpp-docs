---
title: "Compiler Warning (level 1) C4572 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4572"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4572"]
ms.assetid: 482dee5a-29bd-4fc3-b769-9dfd4cd2a964
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4572

[ParamArray] attribute is deprecated under /clr, use '...' instead

An obsolete style for specifying a variable argument list was used. When compiling for the CLR, use ellipsis syntax instead of <xref:System.ParamArrayAttribute>. For more information, see [Variable Argument Lists (...) (C++/CLI)](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md).

## Example

The following sample generates C4572.

```
// C4572.cpp
// compile with: /clr /W1
void Func([System::ParamArray] array<int> ^);   // C4572
void Func2(... array<int> ^){}   // OK

int main() {
   Func2(1, 2, 3);
}
```