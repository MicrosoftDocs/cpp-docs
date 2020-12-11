---
description: "Learn more about: Where to Define Macros"
title: "Where to Define Macros"
ms.date: "11/04/2016"
helpviewer_keywords: ["defining macros", "macros, NMAKE", "NMAKE program, defining macros"]
ms.assetid: 0fc59ec5-5f58-4644-b7da-7b021f7001af
---
# Where to Define Macros

Define macros in a command line, command file, makefile, or the Tools.ini file.

In a makefile or the Tools.ini file, each macro definition must appear on a separate line and cannot start with a space or tab. Spaces or tabs around the equal sign are ignored. All [string characters](defining-an-nmake-macro.md) are literal, including surrounding quotation marks and embedded spaces.

In a command line or command file, spaces and tabs delimit arguments and cannot surround the equal sign. If `string` has embedded spaces or tabs, enclose either the string itself or the entire macro in double quotation marks (" ").

## See also

[Defining an NMAKE Macro](defining-an-nmake-macro.md)
