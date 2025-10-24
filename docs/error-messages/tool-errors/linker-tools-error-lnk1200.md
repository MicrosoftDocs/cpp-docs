---
title: "Linker Tools Error LNK1200"
description: "Learn more about: Linker Tools Error LNK1200"
ms.date: 11/04/2016
f1_keywords: ["LNK1200"]
helpviewer_keywords: ["LNK1200"]
---
# Linker Tools Error LNK1200

> error reading program database 'filename'

## Remarks

The program database (PDB) could not be read.

This error can be caused by file corruption.

If `filename` is the PDB for an object file, recompile the object file using [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).

If `filename` is the PDB for the main output file, and this error occurred during an incremental link, delete the PDB and relink.
