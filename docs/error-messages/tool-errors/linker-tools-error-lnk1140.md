---
title: "Linker Tools Error LNK1140"
description: "Learn more about: Linker Tools Error LNK1140"
ms.date: 11/04/2016
f1_keywords: ["LNK1140"]
helpviewer_keywords: ["LNK1140"]
---
# Linker Tools Error LNK1140

> too many modules for program database; link with /PDB:NONE

## Remarks

The project exceeds the maximum number of modules allowed in a program database (PDB) file. This limit was originally 4,096 modules and was later increased to 65,533.

This error can also occur when other PDB size limits are exceeded, such as too many symbols or an excessive number of types.

### To fix by using the following possible solutions

1. Relink using [/PDB:NONE](../../build/reference/pdb-use-program-database.md).
1. Compile some modules without debugging information.
1. Reduce the number of modules.
1. Split your project into multiple smaller libraries or DLLs.
