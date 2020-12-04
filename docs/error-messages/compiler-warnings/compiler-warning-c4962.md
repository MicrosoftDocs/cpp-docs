---
description: "Learn more about: Compiler Warning C4962"
title: "Compiler Warning C4962"
ms.date: "11/04/2016"
f1_keywords: ["C4962"]
helpviewer_keywords: ["C4962"]
ms.assetid: 62b156fe-04e5-4a6e-9339-6ab148185f87
---
# Compiler Warning C4962

'function' : Profile-guided optimizations disabled because optimizations caused profile data to become inconsistent"

A function was not compiled with /LTCG:PGO, because count (profile) data for the function was unreliable. Redo profiling to regenerate the .pgc file that contains the unreliable profile data for that function.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
