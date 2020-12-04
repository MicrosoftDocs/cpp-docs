---
description: "Learn more about: Linker Tools Error LNK1106"
title: "Linker Tools Error LNK1106"
ms.date: "11/04/2016"
f1_keywords: ["LNK1106"]
helpviewer_keywords: ["LNK1106"]
ms.assetid: 528f7e65-04be-4966-b8af-9276837c7cda
---
# Linker Tools Error LNK1106

invalid file or disk full: cannot seek to location

The tool could not read or write to `location` in a memory-mapped file.

### To fix by checking the following possible causes

1. Disk full.

   Free up some space and link again.

1. Trying to link over a network.

   Some networks do not fully support the memory-mapped files used by the linker. Try linking on your local disk.

1. Bad block on your disk.

   Although the operating system and disk hardware should have detected such an error, you may want to run a disk-checking program.

1. Out of heap space.

   See [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) for more information.
