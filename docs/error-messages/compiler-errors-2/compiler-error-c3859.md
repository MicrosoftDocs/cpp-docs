---
description: "Learn more about: Compiler Error C3859"
title: "Compiler Error C3859"
ms.date: 02/22/2022
f1_keywords: ["C3859"]
helpviewer_keywords: ["C3859"]
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
---
# Compiler Error C3859

> Failed to create virtual memory for PCH

The error will have one of the following continuations:
>PCH: Address is not a multiple of the system's allocation granularity
>PCH: The chunk has not been previously reserved
>PCH: Commit size too large
>PCH: Unable to commit memory across file map
>PCH: Exhausted chunk list before committing all bytes
>PCH: Unexpected end of chunk list while trying to free
>PCH: Shouldn't be hitting a file map in the decommit case
>PCH: Invalid chunk
>PCH: Map size too large
>PCH: Unable to map file: memory already committed
>PCH: File map already in place
>PCH: Unable to get the requested block of memory
>consider using /Fp to allow the compiler to reserve the memory early

The virtual memory allocated for your precompiled header is too small for the amount of data the compiler is trying to put in it. If your precompiled header uses an explicit `#pragma hdrstop` directive, use the **`/Zm`** compiler flag to specify a larger value for the precompiled header file. Otherwise, consider reducing the number of parallel compilation processes in your build. For more information, see [`/Zm` (Specify precompiled header memory allocation limit)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).

