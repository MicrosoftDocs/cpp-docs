---
description: "Learn more about: Linker Tools Error LNK1140"
title: "Linker Tools Error LNK1140"
ms.date: "11/04/2016"
f1_keywords: ["LNK1140"]
helpviewer_keywords: ["LNK1140"]
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
---
# Linker Tools Error LNK1140

too many modules for program database; link with /PDB:NONE

The project contains more than 4096 modules.

### To fix by using the following possible solutions

1. Relink using [/PDB:NONE](../../build/reference/pdb-use-program-database.md).

1. Compile some modules without debugging information.

1. Reduce the number of modules.
