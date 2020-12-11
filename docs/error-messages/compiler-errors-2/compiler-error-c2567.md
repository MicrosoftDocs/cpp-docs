---
description: "Learn more about: Compiler Error C2567"
title: "Compiler Error C2567"
ms.date: "11/04/2016"
f1_keywords: ["C2567"]
helpviewer_keywords: ["C2567"]
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
---
# Compiler Error C2567

unable to open metadata in 'file', file may have been deleted or moved

A metadata file that was referenced in source (with `#using`) was not found in the same directory by the compiler back end process as it was by the compiler front end process. See [#using Directive](../../preprocessor/hash-using-directive-cpp.md) for more information.

C2567 could be caused if you compile with **/c** on one machine and then attempt a link-time code generation on another machine. For more information, see [/LTCG (Link-time Code Generation)](../../build/reference/ltcg-link-time-code-generation.md)).

It might also indicate that your computer had no  more memory.

To correct this error, make sure that the metadata file is in the same directory location for all phases of the build process.
