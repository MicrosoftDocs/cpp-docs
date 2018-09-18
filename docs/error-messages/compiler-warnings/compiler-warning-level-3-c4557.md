---
title: "Compiler Warning (level 3) C4557 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4557"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4557"]
ms.assetid: 7d9db716-03b2-4ee5-9b09-ba8aa5aa7e4c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4557

'__assume' contains effect 'effect'

The value passed to an [__assume](../../intrinsics/assume.md) statement2 was modified.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4557:

```
// C4557.cpp
// compile with: /W3
#pragma warning(default : 4557)
int main()
{
   int i;
   __assume(i++);   // C4557
}
```