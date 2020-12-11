---
description: "Learn more about: Compiler Warning (level 1) C4727"
title: "Compiler Warning (level 1) C4727"
ms.date: "08/19/2019"
f1_keywords: ["C4727"]
helpviewer_keywords: ["C4727"]
ms.assetid: 991b0087-3a50-40f5-9cdb-cdc367cd472c
---
# Compiler Warning (level 1) C4727

"PCH named pch_file with same timestamp found in obj_file_1 and obj_file_2.  Using first PCH.

> [!NOTE]
> In Visual Studio 2017 and earlier, the precompiled header is called *stdafx.h* by default, and in Visual Studio 2019 and later, it is called *pch.h* by default.

C4727 occurs when compiling multiple compilands with **/Yc**, and where the compiler was able to mark all .obj files with the same .pch timestamp.

To resolve, compile one source file with **/Yc /c** (creates pch), and the others compile separately with **/Yu /c** (uses pch), then link them together.

So, if you did the following and it generates C4727:

::: moniker range="<=msvc-150"

**cl /clr /GL a.cpp b.cpp c.cpp /Ycstdafx.h**

You would do the following instead:

**cl /clr /GL a.cpp /Ycstdafx.h /c**

**cl /clr /GL b.cpp c.cpp /Yustdafx.h /link a.obj**

::: moniker-end

::: moniker range=">=msvc-160"

**cl /clr /GL a.cpp b.cpp c.cpp /Ycpch.h**

You would do the following instead:

**cl /clr /GL a.cpp /Ycpch.h /c**

**cl /clr /GL b.cpp c.cpp /Yupch.h /link a.obj**

::: moniker-end

For more information, see

- [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md)

- [/Yu (Use Precompiled Header File)](../../build/reference/yu-use-precompiled-header-file.md)
