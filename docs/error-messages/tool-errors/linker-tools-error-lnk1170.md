---
description: "Learn more about: Linker tools Error LNK1170"
title: "Linker tools Error LNK1170"
ms.date: 05/17/2022
f1_keywords: ["LNK1170"]
helpviewer_keywords: ["LNK1170"]
ms.assetid: e079d518-f184-48cd-8b38-969bf137af54
---
# Linker tools Error LNK1170

> line in command file contains *maximum-length* or more characters

The build failed because a line in a command response file was too long. A line in an automatically generated response file may be too long for many reasons. For example, this error may occur if the number of object file names is too high. Or, if the combined lengths of the paths included in object file names is too long.

The appropriate fix for this issue depends on the cause. For example, if it's caused by long paths in object file names, you may try to shorten the directory names in the path. Or, move the project tree into a directory closer to the root of the drive. You may want to break up how response files are generated and consumed by your build system, for instance, by generating some code as static libraries.
