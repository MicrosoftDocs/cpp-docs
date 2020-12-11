---
description: "Learn more about: Specifying an Inline File"
title: "Specifying an Inline File"
ms.date: "11/04/2016"
helpviewer_keywords: ["NMAKE program, inline files", "inline files [C++], specifying NMAKE", "files [C++], inline"]
ms.assetid: 393eccfb-3fc9-4bac-a30c-8ac8d221cca3
---
# Specifying an Inline File

Specify two angle brackets (<<) in the command where *filename* is to appear. The angle brackets cannot be a macro expansion.

## Syntax

```
<<[filename]
```

## Remarks

When the command is run, the angle brackets are replaced by *filename*, if specified, or by a unique NMAKE-generated name. If specified, *filename* must follow angle brackets without a space or tab. A path is permitted. No extension is required or assumed. If *filename* is specified, the file is created in the current or specified directory, overwriting any existing file by that name; otherwise, it is created in the TMP directory (or the current directory, if the TMP environment variable is not defined). If a previous *filename* is reused, NMAKE replaces the previous file.

## See also

[Inline Files in a Makefile](inline-files-in-a-makefile.md)
