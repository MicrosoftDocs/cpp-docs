---
title: "__readgsbyte, __readgsdword, __readgsqword, __readgsword"
ms.date: "11/04/2016"
f1_keywords: ["__readgsbyte", "__readgsdword", "__readgsqword", "__readgsword"]
helpviewer_keywords: ["__readgsword intrinsic", "__readgsdword intrinsic", "__readgsqword intrinsic", "__readgsbyte intrinsic"]
ms.assetid: f822632d-854c-4558-a71b-cdfc3eea2236
---
# __readgsbyte, __readgsdword, __readgsqword, __readgsword

**Microsoft Specific**

Read memory from a location specified by an offset relative to the beginning of the GS segment.

## Syntax

```
unsigned char __readgsbyte(
   unsigned long Offset
);
unsigned short __readgsword(
   unsigned long Offset
);
unsigned long __readgsdword(
   unsigned long Offset
);
unsigned __int64 __readgsqword(
   unsigned long Offset
);
```

#### Parameters

*Offset*<br/>
[in] The offset from the beginning of `GS` to read from.

## Return Value

The memory contents of the byte, word, double word, or quadword (as indicated by the name of the function called) at the location `GS:[Offset]`.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__readgsbyte`|x64|
|`__readgsdword`|x64|
|`__readgsqword`|x64|
|`__readgsword`|x64|

**Header file** \<intrin.h>

## Remarks

These intrinsics are only available in kernel mode, and the routines are only available as intrinsics.

**END Microsoft Specific**

## See Also

[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)<br/>
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)