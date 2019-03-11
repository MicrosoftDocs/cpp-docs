---
title: "__addgsbyte, __addgsword, __addgsdword, __addgsqword"
ms.date: "11/04/2016"
f1_keywords: ["__addgsdword", "__addgsqword", "__addgsword_cpp", "__addgsword", "__addgsbyte_cpp", "__addgsqword_cpp", "__addgsbyte", "__addgsdword_cpp"]
helpviewer_keywords: ["__addgsword intrinsic", "__addgsqword intrinsic", "__addgsdword intrinsic", "__addgsbyte intrinsic"]
ms.assetid: 4fa03e69-d849-49ed-ba37-1d3aa23c2a21
---
# __addgsbyte, __addgsword, __addgsdword, __addgsqword

**Microsoft Specific**

Add a value to a memory location specified by an offset relative to the beginning of the `GS` segment.

## Syntax

```
void __addgsbyte(
   unsigned long Offset,
   unsigned char Data
);
void __addgsword(
   unsigned long Offset,
   unsigned short Data
);
void __addgsdword(
   unsigned long Offset,
   unsigned long Data
);
void __addgsqword(
   unsigned long Offset,
   unsigned __int64 Data
);
```

#### Parameters

*Offset*<br/>
[in] The offset from the beginning of `GS`.

*Data*<br/>
[in] The value to add to the memory location.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__addgsbyte`|x64|
|`__addgsword`|x64|
|`__addgsdword`|x64|
|`__addgsqword`|x64|

## Remarks

These routines are only available as an intrinsic.

**END Microsoft Specific**

## See also

[__incgsbyte, \__incgsword, \__incgsdword, \__incgsqword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)<br/>
[__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)<br/>
[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)<br/>
[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
