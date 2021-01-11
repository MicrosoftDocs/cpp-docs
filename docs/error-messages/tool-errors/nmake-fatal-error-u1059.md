---
description: "Learn more about: NMAKE Fatal Error U1059"
title: "NMAKE Fatal Error U1059"
ms.date: "08/27/2018"
f1_keywords: ["U1059"]
helpviewer_keywords: ["U1059"]
ms.assetid: b21d9198-9c63-40d0-b589-80e17294ce24
---
# NMAKE Fatal Error U1059

> syntax error : '}' missing in dependent

A search path for a dependent was incorrectly specified. Either a space existed in the path or the closing brace (**}**) was omitted.

The syntax for a directory specification for a dependent is

> **{** *directories* **}dependent**

where *directories* specifies one or more paths, each separated by a semicolon (**;**). No spaces are allowed.

If part or all of a search path is replaced by a macro, make sure no spaces exist in the macro expansion.
