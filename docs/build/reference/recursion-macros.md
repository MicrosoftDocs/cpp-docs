---
title: "Recursion macros"
description: "Describes the macros you use to call NMAKE in recursive sessions."
ms.date: "11/20/2019"
helpviewer_keywords: ["NMAKE program, recursion macros", "recursion macros", "macros, recursion"]
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
no-loc: [MAKE, MAKEDIR, MAKEFLAGS]
---
# Recursion macros

Use recursion macros to call NMAKE recursively. Recursive sessions inherit command-line and environment-variable macros and Tools.ini information. They don't inherit makefile-defined inference rules or `.SUFFIXES` and `.PRECIOUS` specifications. There are three ways to pass macros to a recursive NMAKE session: Set an environment variable with a :::no-loc text="SET"::: command before the recursive call. Define a macro in the command for the recursive call. Or, define a macro in Tools.ini.

|Macro|Definition|
|-----------|----------------|
|**MAKE**|Command used originally to invoke NMAKE.<br /><br /> The `$(MAKE)` macro gives the full path to nmake.exe.|
|**MAKEDIR**|Current directory when NMAKE was invoked.|
|**MAKEFLAGS**|Options currently in effect. Use as `/$(MAKEFLAGS)`. The **/F** option isn't included.|

## See also

[Special NMAKE macros](special-nmake-macros.md)
