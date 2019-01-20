---
title: "ANSI C Compliance"
ms.date: "11/04/2016"
f1_keywords: ["Ansi"]
helpviewer_keywords: ["underscores, leading", "compatibility [C++], ANSI C", "compliance with ANSI C", "conventions [C++], Microsoft extensions", "underscores", "naming conventions [C++], Microsoft library", "ANSI [C++], C standard", "Microsoft extensions naming conventions"]
ms.assetid: 6be271bf-eecf-491a-a928-0ee2dd60e3b9
---
# ANSI C Compliance

The naming convention for all Microsoft-specific identifiers in the run-time system (such as functions, macros, constants, variables, and type definitions) is ANSI-compliant. In this documentation, any run-time function that follows the ANSI/ISO C standards is noted as being ANSI compatible. ANSI-compliant applications should only use these ANSI compatible functions.

The names of Microsoft-specific functions and global variables begin with a single underscore. These names can be overridden only locally, within the scope of your code. For example, when you include Microsoft run-time header files, you can still locally override the Microsoft-specific function named `_open` by declaring a local variable of the same name. However, you cannot use this name for your own global function or global variable.

The names of Microsoft-specific macros and manifest constants begin with two underscores, or with a single leading underscore immediately followed by an uppercase letter. The scope of these identifiers is absolute. For example, you cannot use the Microsoft-specific identifier **_UPPER** for this reason.

## See also

- [Compatibility](../c-runtime-library/compatibility.md)
