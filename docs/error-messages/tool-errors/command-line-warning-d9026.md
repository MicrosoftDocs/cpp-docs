---
description: "Learn more about: Command-Line Warning D9026"
title: "Command-Line Warning D9026"
ms.date: "11/04/2016"
f1_keywords: ["D9026"]
helpviewer_keywords: ["D9026"]
ms.assetid: 149fe5e3-5329-4be8-b871-49dfd423aaba
---
# Command-Line Warning D9026

options apply to entire command line

An option was specified on a command after a filename was specified. The option was applied to the file that preceded it.

For example, in the command

```
CL verdi.c /G5 puccini.c
```

the file VERDI.c will be compiled using the /G5 option, not the /G4 default.

This behavior is different from that of some previous versions, which applied only the options specified before the filename, resulting in VERDI.c being compiled using /G4 and PUCCINI.c being compiled using /G5.
