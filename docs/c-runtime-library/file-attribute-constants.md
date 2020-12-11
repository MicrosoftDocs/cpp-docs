---
description: "Learn more about: File Attribute Constants"
title: "File Attribute Constants"
ms.date: "11/04/2016"
f1_keywords: ["A_HIDDEN", "_A_NORMAL", "_A_SUBDIR", "_A_RDONLY", "A_NORMAL", "A_SUBDIR", "_A_SYSTEM", "c.constants.file", "_A_HIDDEN", "A_RDONLY", "_A_ARCH", "A_ARCH"]
helpviewer_keywords: ["constants [C++], file attributes", "file attribute constants [C++]", "_A_SYSTEM constant", "files [C++], file attribute constants", "_A_SUBDIR constant", "_A_ARCH constant", "_A_NORMAL constant", "_A_HIDDEN constant", "_A_RDONLY constant"]
ms.assetid: 8dc8ccb9-99f5-446b-876c-7ebecc2f764f
---
# File Attribute Constants

## Syntax

```
#include <io.h>
```

## Remarks

These constants specify the current attributes of the file or directory specified by the function.

The attributes are represented by the following manifest constants:

|Constant|Description|
|-|-|
|`_A_ARCH`| Archive. Set whenever the file is changed, and cleared by the BACKUP command. Value: 0x20|
|`_A_HIDDEN`| Hidden file. Not normally seen with the DIR command, unless the /AH option is used. Returns information about normal files as well as files with this attribute. Value: 0x02|
|`_A_NORMAL`| Normal. File can be read or written to without restriction. Value: 0x00|
|`_A_RDONLY`| Read-only. File cannot be opened for writing, and a file with the same name cannot be created. Value: 0x01|
|`_A_SUBDIR`| Subdirectory. Value: 0x10|
|`_A_SYSTEM`| System file. Not normally seen with the DIR command, unless the /AS option is used. Value: 0x04|

Multiple constants can be combined with the OR operator (&#124;).

## See also

[Filename Search Functions](../c-runtime-library/filename-search-functions.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
