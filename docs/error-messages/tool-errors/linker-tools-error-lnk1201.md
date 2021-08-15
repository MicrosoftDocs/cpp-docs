---
description: "Learn more about: Linker Tools Error LNK1201"
title: "Linker Tools Error LNK1201"
ms.date: "11/04/2016"
f1_keywords: ["LNK1201"]
helpviewer_keywords: ["LNK1201"]
ms.assetid: 64c3f496-a428-4b54-981e-faa82ef9c8a1
---
# Linker Tools Error LNK1201

error writing to program database 'filename'; check for insufficient disk space, invalid path, or insufficient privilege

LINK could not write to the program database (PDB) for the output file.

### To fix by checking the following possible causes

1. File is corrupt. Delete the PDB file and relink.

1. Not enough disk space to write the file.

1. Drive is not available, possibly due to a network problem.

1. The debugger is active on the program you are trying to link.

1. Out of heap space.  See [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) for more information.
