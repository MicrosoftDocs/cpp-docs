---
description: "Learn more about: Reusing Inline Files"
title: "Reusing Inline Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["inline files, reusing NMAKE", "revising inline files", "NMAKE program, inline files"]
ms.assetid: d42dbffb-2cef-4ccb-9a1f-20b8ef81481c
---
# Reusing Inline Files

To reuse an inline file, specify <<*filename* where the file is defined and first used, then reuse *filename* without << later in the same or another command. The command to create the inline file must run before all commands that use the file.

## See also

[Inline Files in a Makefile](inline-files-in-a-makefile.md)
