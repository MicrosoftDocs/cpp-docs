---
title: "Compiler Warning C4746"
description: "Learn more about: Compiler Warning C4746"
ms.date: 11/04/2016
f1_keywords: ["C4746"]
helpviewer_keywords: ["C4746"]
---
# Compiler Warning C4746

> volatile access of '\<expression>' is subject to /volatile:[iso\|ms] setting; consider using __iso_volatile_load/store intrinsic functions.

## Remarks

C4746 is emitted whenever a volatile variable is accessed directly. It's intended to help developers identify code locations that are affected by the specific volatile model currently specified (which can be controlled with the [`/volatile`](../../build/reference/volatile-volatile-keyword-interpretation.md) compiler option). In particular, it can be useful in locating compiler-generated hardware memory barriers when `/volatile:ms` is used.

The __iso_volatile_load/store intrinsics can be used to explicitly access volatile memory without being affected by the volatile model. Using these intrinsics will not trigger C4746.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.
