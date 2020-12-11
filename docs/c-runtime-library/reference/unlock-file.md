---
description: "Learn more about: _unlock_file"
title: "_unlock_file"
ms.date: "4/2/2020"
api_name: ["_unlock_file", "_o__unlock_file"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_unlock_file", "unlock_file"]
helpviewer_keywords: ["files [C++], unlocking", "unlock_file function", "_unlock_file function", "unlocking files"]
ms.assetid: cf380a51-6d3a-4f38-bd64-2d4fb57b4369
---
# _unlock_file

Unlocks a file, allowing other processes to access the file.

## Syntax

```C
void _unlock_file(
   FILE* file
);
```

### Parameters

*file*<br/>
File handle.

## Remarks

The **_unlock_file** function unlocks the file specified by *file*. Unlocking a file allows access to the file by other processes. This function should not be called unless **_lock_file** was previously called on the *file* pointer. Calling **_unlock_file** on a file that isn't locked may result in a deadlock. For an example, see [_lock_file](lock-file.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_unlock_file**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_lock_file](lock-file.md)<br/>
