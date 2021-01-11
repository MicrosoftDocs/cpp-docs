---
description: "Learn more about: __incgsbyte, __incgsword, __incgsdword, __incgsqword"
title: "__incgsbyte, __incgsword, __incgsdword, __incgsqword"
ms.date: "09/02/2019"
f1_keywords: ["__incgsdword", "__incgsqword_cpp", "__incgsword_cpp", "__incgsword", "__incgsbyte", "__incgsbyte_cpp", "__incgsqword", "__incgsdword_cpp"]
helpviewer_keywords: ["__incgsbyte intrinsic", "__incgsword intrinsic", "__incgsqword intrinsic", "__incgsdword intrinsic"]
ms.assetid: 06bfdf4f-7643-4fe0-8455-60ce3068073e
---
# __incgsbyte, __incgsword, __incgsdword, __incgsqword

**Microsoft Specific**

Add one to the value at a memory location specified by an offset relative to the beginning of the `GS` segment.

## Syntax

```C
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

### Parameters

*Offset*\
[in] The offset from the beginning of `GS`.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__incgsbyte`|x64|
|`__incgsword`|x64|
|`__incgsdword`|x64|
|`__incgsqword`|x64|

**Header file** \<intrin.h>

## Remarks

These routines are only available as an intrinsic.

**END Microsoft Specific**

## See also

[\__addgsbyte, \__addgsword, \__addgsdword, \__addgsqword](../intrinsics/addgsbyte-addgsword-addgsdword-addgsqword.md)\
[\__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)\
[\__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
