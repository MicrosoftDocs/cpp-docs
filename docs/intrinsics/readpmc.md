---
title: "__readpmc"
ms.date: "11/04/2016"
f1_keywords: ["__readpmc"]
helpviewer_keywords: ["Read Performance Monitoring Counters instruction", "__readpmc intrinsic", "rdpmc instruction"]
ms.assetid: 14ed45a6-28b6-4635-8437-a597c04b43d4
---
# __readpmc

**Microsoft Specific**

Generates the `rdpmc` instruction, which reads the performance monitoring counter specified by `counter`.

## Syntax

```
unsigned __int64 __readpmc(
   unsigned long counter
);
```

#### Parameters

*counter*<br/>
[in] The performance counter to read.

## Return Value

The value of the specified performance counter.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readpmc`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This intrinsic is available in kernel mode only, and the routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
