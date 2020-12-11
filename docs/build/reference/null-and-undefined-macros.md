---
description: "Learn more about: Null and Undefined Macros"
title: "Null and Undefined Macros"
ms.date: "11/04/2016"
helpviewer_keywords: ["NMAKE program, undefined macros", "Null macros in NMAKE", "macros, null and undefined", "undefined macros and NMAKE", "NMAKE program, null macros"]
ms.assetid: 1db4611a-1755-4328-b00f-d35365af8b6c
---
# Null and Undefined Macros

Both null and undefined macros expand to null strings, but a macro defined as a null string is considered defined in preprocessing expressions. To define a macro as a null string, specify no characters except spaces or tabs after the equal sign (=) in a command line or command file, and enclose the null string or definition in double quotation marks (" "). To undefine a macro, use **!UNDEF.** For more information, see [Makefile Preprocessing Directives](makefile-preprocessing-directives.md).

## See also

[Defining an NMAKE Macro](defining-an-nmake-macro.md)
