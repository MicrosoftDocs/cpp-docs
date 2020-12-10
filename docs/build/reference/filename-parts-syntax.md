---
description: "Learn more about: Filename-Parts Syntax"
title: "Filename-Parts Syntax"
ms.date: "11/04/2016"
helpviewer_keywords: ["syntax, filename-parts", "filename-parts syntax in NMAKE", "NMAKE program, syntax"]
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
---
# Filename-Parts Syntax

Filename-parts syntax in commands represents components of the first dependent filename (which may be an implied dependent). Filename components are the file's drive, path, base name, and extension as specified, not as it exists on disk. Use **%s** to represent the complete filename. Use **%&#124;**[*parts*]**F** (a vertical bar character follows the percent symbol) to represent parts of the filename, where *parts* can be zero or more of the following letters, in any order.

|Letter|Description|
|------------|-----------------|
|No letter|Complete name (same as **%s**)|
|**d**|Drive|
|**p**|Path|
|**f**|File base name|
|**e**|File extension|

For example, if the filename is c:\prog.exe:

- %s will be c:\prog.exe

- %&#124;F will be c:\prog.exe

- %&#124;dF will be c

- %&#124;pF will be c:\

- %&#124;fF will be prog

- %&#124;eF will be exe

## See also

[Commands in a Makefile](commands-in-a-makefile.md)
