---
description: "Learn more about: __addfsbyte, __addfsword, __addfsdword"
title: "__addfsbyte, __addfsword, __addfsdword"
ms.date: "09/02/2019"
f1_keywords: ["__addfsbyte_cpp", "__addfsdword", "__addfsword_cpp", "__addfsbyte", "__addfsword", "__addfsdword_cpp"]
helpviewer_keywords: ["__addfsdword intrinsic", "__addfsword intrinsic", "__addfsbyte intrinsic"]
ms.assetid: 706c70df-6b52-4401-9268-2977ed8ad715
---
# __addfsbyte, __addfsword, __addfsdword

**Microsoft Specific**

Add a value to a memory location specified by an offset relative to the beginning of the `FS` segment.

## Syntax

```C
void __addfsbyte(
   unsigned long Offset,
   unsigned char Data
);
void __addfsword(
   unsigned long Offset,
   unsigned short Data
);
void __addfsdword(
   unsigned long Offset,
   unsigned long Data
);
```

### Parameters

*Offset*\
[in] The offset from the beginning of `FS`.

*Data*\
[in] The value to add to the memory location.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__addfsbyte`|x86|
|`__addfsword`|x86|
|`__addfsdword`|x86|

**Header file** \<intrin.h>

## Remarks

These routines are available only as intrinsics.

**END Microsoft Specific**

## See also

[__incfsbyte, \__incfsword, \__incfsdword](../intrinsics/incfsbyte-incfsword-incfsdword.md)\
[__readfsbyte, \__readfsdword, \__readfsqword, \__readfsword](../intrinsics/readfsbyte-readfsdword-readfsqword-readfsword.md)\
[__writefsbyte, \__writefsdword, \__writefsqword, \__writefsword](../intrinsics/writefsbyte-writefsdword-writefsqword-writefsword.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
