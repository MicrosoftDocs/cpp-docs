---
title: "Compiler Warning (level 4) C4690 | Microsoft Docs"
ms.custom: ""
ms.date: "07/03/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4690"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4690"]
ms.assetid: 080a0ea1-458b-477b-a37a-4a34c94709ff
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4690

> \[ emitidl( pop ) ] : more pops than pushes

## Remarks

The [emitidl](../../windows/emitidl.md) attribute was popped one more time that it was pushed.

## Example

The following sample generates C4690. To fix this issue, make sure the attribute is popped exactly as many times as it is pushed.

```cpp
// C4690.cpp
// compile with: /c /W4
[emitidl(pop)];   // C4690
class x {};
```
