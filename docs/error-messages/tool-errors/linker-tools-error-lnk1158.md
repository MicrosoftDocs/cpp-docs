---
description: "Learn more about: Linker Tools Error LNK1158"
title: "Linker Tools Error LNK1158"
ms.date: "11/04/2016"
f1_keywords: ["LNK1158"]
helpviewer_keywords: ["LNK1158"]
ms.assetid: 45febf16-d9e1-42db-af91-532e2717fd6a
---
# Linker Tools Error LNK1158

cannot run 'filename'

The given executable file called by [LINK](../../build/reference/linking.md) is not in the directory that contains LINK nor in a directory specified in the PATH environment variable.

For example, you will get this error if you try to use the PGOPTIMIZE parameter to the [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) linker option on a machine with a 32-bit operating system.
