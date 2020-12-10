---
description: "Learn more about: Linker Tools Warning LNK4099"
title: "Linker Tools Warning LNK4099"
ms.date: "11/04/2016"
f1_keywords: ["LNK4099"]
helpviewer_keywords: ["LNK4099"]
ms.assetid: 358170a4-07cd-43fe-918f-82c32757ffc5
---
# Linker Tools Warning LNK4099

PDB 'filename' was not found with 'object/library' or at 'path'; linking object as if no debug info

The linker was unable to find your .pdb file. Copy it into the directory that contains `object/library`.

To find the name of the .pdb file associated with the object file:

1. Extract an object file from the library with [lib](../../build/reference/lib-reference.md) **/extract:**`objectname`**.obj** `xyz`**.lib**.

1. Check the path to the .pdb file with **dumpbin /section:.debug$T /rawdata** `objectname`**.obj**.

You could also compile with [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), so the pdb doesn't need to be used, or remove the [/DEBUG](../../build/reference/debug-generate-debug-info.md) linker option if you do not have .pdb files for the objects you are linking.
