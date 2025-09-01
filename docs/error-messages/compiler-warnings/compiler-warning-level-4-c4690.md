---
title: "Compiler Warning (level 4) C4690"
description: "Learn more about: Compiler Warning (level 4) C4690"
ms.date: 07/03/2018
f1_keywords: ["C4690"]
helpviewer_keywords: ["C4690"]
---
# Compiler Warning (level 4) C4690

> \[ emitidl( pop ) ] : more pops than pushes

## Remarks

The [emitidl](../../windows/attributes/emitidl.md) attribute was popped one more time that it was pushed.

## Example

The following example generates C4690. To fix this issue, make sure the attribute is popped exactly as many times as it is pushed.

```cpp
// C4690.cpp
// compile with: /c /W4
[emitidl(pop)];   // C4690
class x {};
```
