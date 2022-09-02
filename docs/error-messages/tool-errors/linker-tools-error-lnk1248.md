---
description: "Learn more about: Linker Tools Error LNK1248"
title: "Linker Tools Error LNK1248"
ms.date: 08/31/2022
f1_keywords: ["LNK1248"]
helpviewer_keywords: ["LNK1248"]
---
# Linker Tools Error LNK1248

> image size ('*output_size*') exceeds maximum allowable size (*maximum_size*)

## Remarks

The linker determined that the size of an output file will exceed the largest possible size for a 32-bit program image or object file (PE or COFF file).

To resolve this issue if the file is an executable or DLL, you may want to refactor your program to move some functionality into a separate DLL. If the file is an object file, you may want to refactor your source file into multiple translation units. If the file is a *`.iobj`* file created by [`/LTCGOUT` (Name LTCG incremental object file)](../../build/reference/ltcgout.md) and you aren't using **`/LTCG:INCREMENTAL`**, then remove the **`/LTCGOUT`** option. If you're using **`/LTCG:INCREMENTAL`**, then consider refactoring your executable to reduce the size of the component that causes the error.

## See also

[`/GL` (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md)\
[`/LTCG` (Link-time code generation)](../../build/reference/ltcg-link-time-code-generation.md)
