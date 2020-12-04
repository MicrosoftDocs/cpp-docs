---
description: "Learn more about: /BIND"
title: "/BIND"
ms.date: "11/04/2016"
f1_keywords: ["/bind"]
helpviewer_keywords: ["-BIND editbin option", "entry points, addresses", "BIND editbin option", "entry points", "/BIND editbin option", "import address table"]
ms.assetid: 3772b330-1868-4c90-857d-c31faa867982
---
# /BIND

```
/BIND[:PATH=path]
```

## Remarks

This option sets the addresses of the entry points in the import address table for an executable file or DLL. Use this option to reduce load time of a program.

Specify the program's executable file and DLLs in the *files* argument on the EDITBIN command line. The optional *path* argument to /BIND specifies the location of the DLLs used by the specified files. Separate multiple directories with a semicolon (**;**). If *path* is not specified, EDITBIN searches the directories specified in the PATH environment variable. If *path* is specified, EDITBIN ignores the PATH variable.

By default, the program loader sets the addresses of entry points when it loads a program. The amount of time this process takes varies, depending on the number of DLLs and the number of entry points referenced in the program. If a program has been modified with /BIND, and if the base addresses for the executable file and its DLLs do not conflict with DLLs that are already loaded, the operating system does not need to set these addresses. In a situation where the files are incorrectly based, the operating system relocates the program's DLLs and recalculates the entry-point addresses, which adds to the program's load time.

## See also

[EDITBIN Options](editbin-options.md)
