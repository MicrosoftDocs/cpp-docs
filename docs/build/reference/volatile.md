---
description: "Learn more about: /volatileMetadata"
title: "/volatileMetadata (Generate metadata on volatile memory accesses)"
ms.date: 5/30/2024
f1_keywords: ["/volatileMetadata"]
helpviewer_keywords: ["/volatileMetadata", "-volatileMetadata compiler option", "/volatileMetadata compiler option", "volatileMetadata"]
---
# `/volatileMetadata` (Generate metadata on volatile memory accesses)

Generate metadata for volatile memory accesses to improve performance when running x64 code on ARM64.

## Syntax

```cpp
/volatileMetadata[-]
```

## Arguments

**`-`**\
Turns off `/volatileMetadata`. This may result in worse performance when your code runs in emulation mode on ARM64 because the emulator pessimistically assumes that every load/store needs a barrier.

## Remarks

Starting with Visual Studio 2019 16.10, `/volatileMetadata` is on by default when generating x64 code. It improves the emulation performance of x64 code on ARM64 by generating metadata that identifies volatile memory addresses. An emulator can use this metadata to improve performance by not using acquire/release semantics on those accesses it knows aren't volatile. Without this metadata, the emulator assumes that all addresses are volatile and uses acquire and release semantics.

One side effect of `/volatileMetadata` is you may see `npad` macros used in the generated code. This macro expands to a specified number of `NOP` instructions that create an address to associate with a memory barrier. That address is then recorded in the metadata to indicate that acquire/release semantics should be used to access it.

`/volatileMetadata` is ignored when targeting x86.

`/volatileMetadata` can be disabled by using `/volatileMetadata-`.

## Requirements

Visual Studio 2019 version 16.10 or later.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
