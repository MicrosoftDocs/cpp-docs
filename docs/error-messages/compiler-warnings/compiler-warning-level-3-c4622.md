---
description: "Learn more about: Compiler Warning (level 3) C4622"
title: "Compiler Warning (level 3) C4622"
ms.date: "11/04/2016"
f1_keywords: ["C4622"]
helpviewer_keywords: ["C4622"]
ms.assetid: d3c879f0-4492-4f4b-b26d-230993f3a933
---
# Compiler Warning (level 3) C4622

Overwriting debug information formed during creation of the precompiled header in object file: 'file'

CodeView information in the specified file was lost when it was compiled with the [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (Use Precompiled Headers) option.

Rename the object file (using [/Fo](../../build/reference/fo-object-file-name.md)) when creating or using the precompiled header file, and link using the new object file.
