---
description: "Learn more about: /volatilemetadata"
title: "/volatilemetadata (Generate metadata on volatile memory accesses)"
ms.date: 5/28/2024
f1_keywords: ["/volatilemetadata"]
helpviewer_keywords: ["/volatilemetadata", "-volatilemetadata compiler option", "/volatilemetadata compiler option", "volatilemetadata"]
---
# `/volatilemetadata` (Generate metadata on volatile memory accesses)

Generate metadata on volatile memory accesses to improve performance when running x64 code on ARM.

## Syntax

```cpp
/volatilemetdata[-]
```

## Arguments

**`-`**\
Turns off `/volatileMetadata`. This may result in worse performance when your code runs in emulation mode on ARM because the emulator pessimistically assumes that every load/store needs a barrier.

## Remarks

Starting with Visual Studio 2019 16.10, `/volatileMetadata` is on by default when generating x64 code. It improves the emulation performance of x64 code on ARM by generating metadata that identifies volatile memory addresses. An emulator can use this metadata improve performance by not using acquire/release semantics on accesses it knows aren't volatile. Without this metadata, the emulator assumes that all addresses are volatile, and uses acquire and release semantics to access them.

One side effect `/volatileMetadata` is you may see `npad` macros in the generated code. This macro expands to a specified number of `NOP` instructions that create an address to associate with the memory barrier. That address is then recorded in the metadata.

`/volatileMetadata` can be disabled by using `/volatileMetadata-`.

`/volatileMetadata` is ignored when targeting x86.

## Requirements

Visual Studio 2019 version 16.10 or later.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
