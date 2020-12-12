---
description: "Learn more about: __addgsbyte, __addgsword, __addgsdword, __addgsqword"
title: "__addgsbyte, __addgsword, __addgsdword, __addgsqword"
ms.date: "09/02/2019"
f1_keywords: ["__addgsdword", "__addgsqword", "__addgsword_cpp", "__addgsword", "__addgsbyte_cpp", "__addgsqword_cpp", "__addgsbyte", "__addgsdword_cpp"]
helpviewer_keywords: ["__addgsword intrinsic", "__addgsqword intrinsic", "__addgsdword intrinsic", "__addgsbyte intrinsic"]
ms.assetid: 4fa03e69-d849-49ed-ba37-1d3aa23c2a21
---
# __addgsbyte, __addgsword, __addgsdword, __addgsqword

**Microsoft Specific**

Add a value to a memory location specified by an offset relative to the beginning of the `GS` segment.

## Syntax

```C
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

### Parameters

*Offset*\
[in] The offset from the beginning of `GS`.

*Data*\
[in] The value to add to the memory location.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__addgsbyte`|x64|
|`__addgsword`|x64|
|`__addgsdword`|x64|
|`__addgsqword`|x64|

**Header file** \<intrin.h>

## Remarks

These routines are only available as an intrinsic.

**END Microsoft Specific**

## See also

[__incgsbyte, \__incgsword, \__incgsdword, \__incgsqword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)\
[__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)\
[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
