---
description: "Learn more about: hybrid_patchable (C++)"
title: "hybrid_patchable (C++)"
ms.date: 1/15/2025
f1_keywords: ["hybrid_patchable"]
helpviewer_keywords: ["__declspec keyword [C++], hybrid_patchable", "hybrid_patchable __declspec keyword"]
---
# `hybrid_patchable` (C++)

**Microsoft Specific**

Use `__declspec(hybrid_patchable)` to mark a function as a hybrid patchable function. This attribute is used to generate a fast-forward sequence of instructions that are executed before the function is called.

## Syntax

> `__declspec(hybrid_patchable)`

## Remarks

This is an ARM64EC-only feature.

**Example:**

```cpp
__declspec(hybrid_patchable) int Example()
{
    return 1;
}
```

Generates the following fast-forward sequence:

```
EXP+#Example:
  00000001400CE000: 48 8B C4           mov         rax,rsp
  00000001400CE003: 48 89 58 20        mov         qword ptr [rax+20h],rbx
  00000001400CE007: 55                 push        rbp
  00000001400CE008: 5D                 pop         rbp
  00000001400CE009: E9 BA 7A F3 FF     jmp         #Example
  00000001400CE00E: CC                 int         3
  00000001400CE00F: CC                 int         3 
```

**END Microsoft Specific**

## See also

[`__declspec`](../cpp/declspec.md)\
[Fast-Forward sequences](/windows/arm/arm64ec-abi)