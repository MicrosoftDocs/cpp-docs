---
title: "Running NMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "09/05/2018"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["targets, building", "response files, NMAKE", "targets", "command files", "NMAKE program, targets", "NMAKE program, running", "command files, NMAKE"]
ms.assetid: 0421104d-8b7b-4bf3-86c1-928d9b7c1a8c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Running NMAKE

## Syntax

> **NMAKE** [*option* ...] [*macros* ...] [*targets* ...] [**\@**<em>commandfile</em> ...]

## Remarks

NMAKE builds only specified *targets* or, if none is specified, the first target in the makefile. The first makefile target can be a [pseudotarget](../build/pseudotargets.md) that builds other targets. NMAKE uses makefiles specified with /F; if /F is not specified, it uses the Makefile file in the current directory. If no makefile is specified, it uses inference rules to build command-line *targets*.

The *commandfile* text file (or response file) contains command-line input. Other input can precede or follow \@*commandfile*. A path is permitted. In *commandfile*, line breaks are treated as spaces. Enclose macro definitions in quotation marks if they contain spaces.

## What do you want to know more about?

[NMAKE options](../build/nmake-options.md)  

[Tools.ini and NMAKE](../build/tools-ini-and-nmake.md)  

[Exit codes from NMAKE](../build/exit-codes-from-nmake.md)  

## See Also

[NMAKE Reference](../build/nmake-reference.md)