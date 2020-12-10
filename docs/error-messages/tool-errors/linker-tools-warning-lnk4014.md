---
description: "Learn more about: Linker Tools Warning LNK4014"
title: "Linker Tools Warning LNK4014"
ms.date: "11/04/2016"
f1_keywords: ["LNK4014"]
helpviewer_keywords: ["LNK4014"]
ms.assetid: 394903e9-3ded-4ea4-b7c0-a3535d4b4da4
---
# Linker Tools Warning LNK4014

cannot find member object "objectname"

LIB could not find `objectname` in the library.

The **/REMOVE** and **/EXTRACT** options require the full name of the member object that is to be deleted or copied to a file. The full name includes the path of the original object file. To see the full names of member objects in a library, use DUMPBIN [/ARCHIVEMEMBERS](../../build/reference/archivemembers.md) or LIB [/LIST](../../build/reference/managing-a-library.md).
