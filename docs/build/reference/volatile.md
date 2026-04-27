---
description: "Learn more about: /volatileMetadata"
title: "/volatileMetadata (Generate metadata on volatile memory accesses)"
ms.date: 04/27/2026
f1_keywords: ["/volatileMetadata"]
helpviewer_keywords: ["/volatileMetadata", "-volatileMetadata compiler option", "/volatileMetadata compiler option", "volatileMetadata"]
---
# `/volatileMetadata` (Generate metadata on volatile memory accesses)

Generate metadata for volatile memory accesses to improve performance when running x64 or x86 code on ARM64.

## Syntax

```cpp
/volatileMetadata[-]
```

## Remarks

Starting with Visual Studio 2022 18.6, `/volatileMetadata` is off by default and must be explicitly enabled. To explicitly disable it, use `/volatileMetadata-`. `/volatileMetadata` improves the emulation performance of x64 and x86 code on ARM64 by generating metadata that identifies volatile memory addresses. An emulator can use this metadata to improve performance by not using acquire/release semantics on those accesses it knows aren't volatile. Without this metadata, the emulator assumes that all addresses are volatile and uses acquire and release semantics.

One side effect of `/volatileMetadata` is you may see `npad` macros used in the generated code. This macro expands to a specified number of `NOP` instructions that create an address to associate with a memory barrier. That address is then recorded in the metadata to indicate that acquire/release semantics should be used to access it.

> [!NOTE]
> In Visual Studio 2019 version 16.10 through Visual Studio 2022, `/volatileMetadata` was on by default. Starting with Visual Studio 2022 18.6, `/volatileMetadata` is off by default.

## Requirements

Visual Studio 2019 version 16.10 or later.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
