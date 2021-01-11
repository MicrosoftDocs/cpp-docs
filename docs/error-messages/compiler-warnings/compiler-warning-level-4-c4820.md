---
description: "Learn more about: Compiler Warning (level 4) C4820"
title: "Compiler Warning (level 4) C4820"
ms.date: "11/04/2016"
f1_keywords: ["C4820"]
helpviewer_keywords: ["C4820"]
ms.assetid: 17aa29f4-c287-49b8-bc43-8ed82ffed5ea
---
# Compiler Warning (level 4) C4820

'bytes' bytes padding added after construct 'member_name'

The type and order of elements caused the compiler to add padding to the end of a struct. See [align](../../cpp/align-cpp.md) for more information on padding in a struct.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4820:

```cpp
// C4820.cpp
// compile with: /W4 /c
#pragma warning(default : 4820)

// Delete the following 4 lines to resolve.
__declspec(align(2)) struct MyStruct {
   char a;
   int i;   // C4820
};

// OK
#pragma pack(1)
__declspec(align(1)) struct MyStruct2 {
   char a;
   int i;
};
```
