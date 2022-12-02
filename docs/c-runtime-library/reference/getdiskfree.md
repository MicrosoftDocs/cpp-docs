---
description: "Learn more about: _getdiskfree"
title: "_getdiskfree"
ms.date: 05/11/2022
api_name: ["_getdiskfree", "_o__getdiskfree"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["getdiskfree", "_getdiskfree"]
helpviewer_keywords: ["diskfree_t type", "_getdiskfree function", "_diskfree_t type", "disk size", "getdiskfree function"]
---
# `_getdiskfree`

Get information about a disk drive such as total clusters, available clusters, sectors per cluster, and bytes per sector.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned _getdiskfree(
   unsigned drive,
   struct _diskfree_t * driveinfo
);
```

### Parameters

*`drive`*\
The disk drive for which you want information.

*`driveinfo`*\
A **`_diskfree_t`** structure that will be populated with information about the drive.

## Return value

If the function succeeds, the return value is zero. If the function fails, the return value is the error code. The value `errno` is set for any errors that are returned by the operating system. For more information about error conditions that are indicated by `errno`, see [`errno` constants](../errno-constants.md).

## Remarks

The **`_diskfree_t`** structure is defined in Direct.h.

```C
struct _diskfree_t {
   unsigned total_clusters;      // The total number of clusters, both used and available, on the disk.
   unsigned avail_clusters;      // The number of unused clusters on the disk.
   unsigned sectors_per_cluster; // The number of sectors in each cluster.
   unsigned bytes_per_sector;    // The size of each sector in bytes.
};
```

This function validates its parameters. If the *`driveinfo`* pointer is `NULL` or *`drive`* specifies an invalid drive, this function invokes an invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the function returns `EINVAL` and sets `errno` to `EINVAL`. Valid drives range from 0 to 26. A *`drive`* value of 0 specifies the current drive; thereafter, numbers map to letters of the English alphabet such that 1 indicates drive A, 3 indicates drive C, and so on.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_getdiskfree`** | `<direct.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_getdiskfree.c
// compile with: /c
#include <windows.h>
#include <direct.h>
#include <stdio.h>

int main(int argc, char* argv[]) 
{
    ULONG uDriveMask = _getdrives();

    for (unsigned uDrive = 1; uDrive <= 26; ++uDrive) 
    {
        if (uDriveMask & 1)
        {
            struct _diskfree_t df = { 0 };
            unsigned uErr = _getdiskfree(uDrive, &df);
            printf("\nDrive: %c\n", uDrive + 'A' - 1);
            
            if (uErr == 0)
            {
                printf("\tTotal clusters:      %11u\n", df.total_clusters);
                printf("\tAvailable clusters:  %11u\n", df.avail_clusters);
                printf("\tSectors per cluster: %11u\n", df.sectors_per_cluster);
                printf("\tBytes per sector:    %11u\n", df.bytes_per_sector);
            }
            else
            {
                WCHAR errMsg[80];
                unsigned uLen = FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL,
                    uErr, 0, errMsg, sizeof(errMsg), NULL);
                printf("%S\n", errMsg);
            }
        }
        uDriveMask >>= 1;
    }
}
```

```Output
Drive: C
        Total clusters:        249754111
        Available clusters:    160184686
        Sectors per cluster:           8
        Bytes per sector:            512
```

## See also

[Directory control](../directory-control.md)
