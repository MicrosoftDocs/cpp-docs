---
description: "Learn more about: .Ilk Files as Linker Input"
title: ".Ilk Files as Linker Input"
ms.date: "11/04/2016"
helpviewer_keywords: ["ILK files", ".ilk files"]
ms.assetid: 7324c104-9e5d-423d-b268-b59f92607bf2
---
# .Ilk Files as Linker Input

When linking incrementally, LINK updates the .ilk status file that it created during the first incremental link. This file has the same base name as the .exe file or the .dll file, and it has the extension .ilk. During subsequent incremental links, LINK updates the .ilk file. If the .ilk file is missing, LINK performs a full link and creates a new .ilk file. If the .ilk file is unusable, LINK performs a nonincremental link. For details about incremental linking, see the [Link Incrementally (/INCREMENTAL)](incremental-link-incrementally.md) option.

## See also

[LINK Input Files](link-input-files.md)<br/>
[MSVC Linker Options](linker-options.md)
