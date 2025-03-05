---
description: "Learn more about: hybrid_patchable (C++)"
title: "hybrid_patchable (C++)"
ms.date: 1/15/2025
f1_keywords: ["hybrid_patchable"]
helpviewer_keywords: ["__declspec keyword [C++], hybrid_patchable", "hybrid_patchable __declspec keyword"]
---
# `hybrid_patchable` (C++)

**Microsoft Specific**

Use `__declspec(hybrid_patchable)` to mark a function as a hybrid patchable function. This attribute generates a fast-forward sequence. Fast-forward sequences are small x64 functions which contain no real logic, and tail-call the real Arm64EC function. Because fast-forward sequences are primarily used for hooking, if they are unaltered, execution is transferred directly to the Arm64EC function.

## Syntax

> `__declspec(hybrid_patchable)`

## Remarks

`__declspec(hybrid_patchable)` is an ARM64EC-only feature.

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
[Fast-Forward sequences](/windows/arm/arm64ec-abi#fast-forward-sequences)