---
description: "Learn more about: Path Field Limits"
title: "Path Field Limits"
ms.date: "11/04/2016"
f1_keywords: ["_MAX_EXT", "_MAX_DIR", "_MAX_PATH", "_MAX_FNAME", "_MAX_DRIVE"]
helpviewer_keywords: ["path field constants", "MAX_FNAME constant", "_MAX_DIR constant", "_MAX_DRIVE constant", "paths, maximum limit", "_MAX_PATH constant", "MAX_DRIVE constant", "_MAX_FNAME constant", "_MAX_EXT constant", "MAX_DIR constant", "MAX_EXT constant"]
ms.assetid: 2b5d0e43-1347-45b4-8397-24a8a45c444e
---
# Path Field Limits

## Syntax

```cpp
#include <stdlib.h>
```

## Remarks

These constants define the maximum length for the path and for the individual fields within the path.

|Constant|Meaning|
|--------------|-------------|
|`_MAX_DIR`|Maximum length of directory component|
|`_MAX_DRIVE`|Maximum length of drive component|
|`_MAX_EXT`|Maximum length of extension component|
|`_MAX_FNAME`|Maximum length of filename component|
|`_MAX_PATH`|Maximum length of full path|

> [!NOTE]
> The C Runtime supports path lengths up to 32768 characters in length, but it is up to the operating system, specifically the file system, to support these longer paths. The sum of the fields should not exceed `_MAX_PATH` for full backwards compatibility with FAT32 file systems. The Windows NTFS file system supports paths up to 32768 characters in length, but only when using the Unicode APIs. When using long path names, prefix the path with the characters \\\\?\ and use the Unicode versions of the C Runtime functions.

## See also

[Global Constants](../c-runtime-library/global-constants.md)
