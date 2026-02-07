---
title: "Linker Tools Warning LNK4237"
description: "Learn more about: Linker Tools Warning LNK4237"
ms.date: 11/04/2016
f1_keywords: ["LNK4237"]
helpviewer_keywords: ["LNK4237"]
---
# Linker Tools Warning LNK4237

> /SUBSYSTEM:NATIVE specified when importing from 'dll'; Use /SUBSYSTEM:CONSOLE or /SUBSYSTEM:WINDOWS.

## Remarks

[/SUBSYSTEM:NATIVE](../../build/reference/subsystem-specify-subsystem.md) was specified when building a windows (Win32) application that directly uses one or more of the following:

- kernel32.dll

- gdi32.dll

- user32.dll

- one of the msvcrt\* dlls.

Resolve this warning by not specifying **/SUBSYSTEM:NATIVE**.
