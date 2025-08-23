---
description: "Learn more about: Compiler Error C3859"
title: "Compiler Error C3859"
ms.date: 02/22/2022
f1_keywords: ["C3859"]
helpviewer_keywords: ["C3859"]
---
# Compiler Error C3859

> Failed to create virtual memory for PCH

The message has one of the following notes:
>The system returned code *error code*: *OS error message*\
>PCH: Address is not a multiple of the system's allocation granularity\
>PCH: The chunk has not been previously reserved\
>PCH: Commit size too large\
>PCH: Unable to commit memory across file map\
>PCH: Exhausted chunk list before committing all bytes\
>PCH: Unexpected end of chunk list while trying to free\
>PCH: Shouldn't be hitting a file map in the decommit case\
>PCH: Invalid chunk\
>PCH: Map size too large\
>PCH: Unable to map file: memory already committed\
>PCH: File map already in place\
>PCH: Unable to get the requested block of memory\
>Consider using /Fp to allow the compiler to reserve the memory early

## Remarks

There isn't enough virtual memory allocated for your [precompiled header (PCH)](../../build/creating-precompiled-header-files.md). If your precompiled header uses an explicit `#pragma hdrstop` directive, use the **`/Zm`** compiler flag to specify a larger value for the precompiled header file. Otherwise, consider reducing the number of parallel compilation processes in your build. For more information, see [`/Zm` (Specify precompiled header memory allocation limit)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).

This diagnostic shows up mostly in two scenarios: 

The first scenario is that the system is overloaded with multiple `/Yu` compile requests at the same time. Setting the maximum starting virtual memory size typically resolves this issue.

The second scenario is when the the Windows loader injects a DLL into the process at startup. That injected DLL can allocate memory that conflicts with where the PCH must reside. For example, `msbuild.exe` injects `FileTracker.dll` into every `CL.exe` process at startup. In this scenario, using the [`/Fp` (Name .pch file)](../../build/reference/fp-name-dot-pch-file.md) flag ensures that the memory for the PCH is allocated as early as possible in the `CL.exe` process, before any injected DLLs try to occupy the address space. These failures can be intermittent because Windows Address Space Layout Randomization (ASLR) allocates memory at different addresses across different process invocations. Without `/Fp`, memory for the PCH can't be allocated until the compiler finds the header file `#include` specified in the `/Yu` command line option or the `#pragma hdrstop`. By this time, it's much more likely that the memory required by the PCH is already reserved.
