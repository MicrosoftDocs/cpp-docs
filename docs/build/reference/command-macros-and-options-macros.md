---
title: "Command macros and options macros"
description: "Describes the predefined NMAKE macros for build tools and their options."
ms.date: "11/20/2019"
helpviewer_keywords: ["options macros", "command macros in NMAKE", "macros, options macros", "macros, command macros"]
ms.assetid: 50dff03c-0dc3-4a8a-9a17-57e0e4ea9bac
no-loc: [AS, AFLAGS, CC, CFLAGS, CPP, CPPFLAGS, CXX, CXXFLAGS, RC, RFLAGS, ias, ml, ml64, cl, rc]
---
# Command macros and options macros

Command macros are predefined for Microsoft products. Options macros represent options to these products and are undefined by default. Both are used in predefined inference rules and can be used in description blocks or user-defined inference rules. Command macros can be redefined to represent part or all of a command line, including options. Options macros generate a null string if left undefined.

|Microsoft product|Command macro|Defined as|Options macro|
|-----------------------|-------------------|----------------|-------------------|
|Macro Assembler|**AS**|ml, ias, or ml64|**AFLAGS**|
|C Compiler|**CC**|cl|**CFLAGS**|
|C++ Compiler|**CPP**|cl|**CPPFLAGS**|
|C++ Compiler|**CXX**|cl|**CXXFLAGS**|
|Resource Compiler|**RC**|rc|**RFLAGS**|

## See also

[Special NMAKE Macros](special-nmake-macros.md)
