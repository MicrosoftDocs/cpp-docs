---
description: "Learn more about: Compiler Error C3415"
title: "Compiler Error C3415"
ms.date: "11/04/2016"
f1_keywords: ["C3415"]
helpviewer_keywords: ["C3415"]
ms.assetid: fa2db8ab-2820-4ec3-a740-fb5e2adcfb29
---
# Compiler Error C3415

multiple 'section_name' sections found with different attributes ('value')

Conflicting values were specified in [section](../../preprocessor/section.md) pragmas.

`value` is the current setting for the section, as specified in ntimage.h. For example:

```
// Section contains extended relocations.
#define IMAGE_SCN_LNK_NRELOC_OVFL            0x01000000
// Section can be discarded.
#define IMAGE_SCN_MEM_DISCARDABLE            0x02000000
// Section is not cachable.
#define IMAGE_SCN_MEM_NOT_CACHED             0x04000000
// Section is not pageable.
#define IMAGE_SCN_MEM_NOT_PAGED              0x08000000
// Section is shareable.
#define IMAGE_SCN_MEM_SHARED                 0x10000000
// Section is executable.
#define IMAGE_SCN_MEM_EXECUTE                0x20000000
// Section is readable.
#define IMAGE_SCN_MEM_READ                   0x40000000
// Section is writeable.
#define IMAGE_SCN_MEM_WRITE                  0x80000000
```

The following sample generates C3415:

```cpp
// C3415.cpp
#pragma section("mysec1",write)
#pragma section("mysec1",read)   // C3415
```
