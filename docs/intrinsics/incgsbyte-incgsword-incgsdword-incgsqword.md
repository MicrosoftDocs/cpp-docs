---
title: "__incgsbyte, __incgsword, __incgsdword, __incgsqword"
ms.date: "11/04/2016"
f1_keywords: ["__incgsdword", "__incgsqword_cpp", "__incgsword_cpp", "__incgsword", "__incgsbyte", "__incgsbyte_cpp", "__incgsqword", "__incgsdword_cpp"]
helpviewer_keywords: ["__incgsbyte intrinsic", "__incgsword intrinsic", "__incgsqword intrinsic", "__incgsdword intrinsic"]
ms.assetid: 06bfdf4f-7643-4fe0-8455-60ce3068073e
---
# __incgsbyte, __incgsword, __incgsdword, __incgsqword

**Microsoft Specific**

Add one to the value at a memory location specified by an offset relative to the beginning of the `GS` segment.

## Syntax

```
void __incgsbyte(
   unsigned long Offset
);
void __incgsword(
   unsigned long Offset
);
void __incgsdword(
   unsigned long Offset
);
void __incgsqword(
   unsigned long Offset
);
```

#### Parameters

*Offset*<br/>
[in] The offset from the beginning of `GS`.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__incgsbyte`|x64|
|`__incgsword`|x64|
|`__incgsdword`|x64|
|`__incgsqword`|x64|

## Remarks

These routines are only available as an intrinsic.

**END Microsoft Specific**

## See Also

[__addgsbyte, \__addgsword, \__addgsdword, \__addgsqword](../intrinsics/addgsbyte-addgsword-addgsdword-addgsqword.md)<br/>
[__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)<br/>
[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)<br/>
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
