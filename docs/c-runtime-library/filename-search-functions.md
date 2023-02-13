---
description: "Learn more about: Filename Search Functions"
title: "Filename Search Functions"
ms.date: "11/04/2016"
api_location: ["msvcr100.dll", "msvcr120.dll", "msvcr90.dll", "msvcrt.dll", "msvcr80.dll", "msvcr110.dll", "msvcr110_clr0400.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
helpviewer_keywords: ["file names [C++], searching for", "_find function", "wfind function", "find function", "_wfind function"]
---
# Filename search functions

These functions search for and close searches for specified file names:

- [`_findnext`, `_wfindnext`](./reference/findnext-functions.md)

- [`_findfirst`, `_wfindfirst`](./reference/findfirst-functions.md)

- [`_findclose`](./reference/findclose.md)

## Remarks

The `_findfirst` function provides information about the first instance of a file name that matches the file specified in the `filespec` argument. You can use in `filespec` any combination of wildcard characters that is supported by the host operating system.

The functions return file information in a `_finddata_t` structure, which is defined in `IO.h`. Various functions in the family use many variations on the `_finddata_t` structure. The basic `_finddata_t` structure includes the following elements:

`unsigned attrib`\
File attribute.

`time_t time_create`\
Time of file creation (`-1L` for FAT file systems). This time is stored in UTC format. To convert to the local time, use [`localtime_s`](./reference/localtime-s-localtime32-s-localtime64-s.md).

`time_t time_access`\
Time of the last file access (`-1L` for FAT file systems). This time is stored in UTC format. To convert to the local time, use `localtime_s`.

`time_t time_write`\
Time of the last write to file. This time is stored in UTC format. To convert to the local time, use `localtime_s`.

`_fsize_t size`\
Length of the file in bytes.

`char name`[ `_MAX_PATH`]
`NULL`-terminated name of matched file or directory, without the path.

In file systems that don't support the creation and last access times of a file, such as the FAT system, the `time_create` and `time_access` fields are always `-1L`.

`_MAX_PATH` is defined in `Stdlib.h` as 260 bytes.

You can't specify target attributes (such as `_A_RDONLY`) to limit the find operation. These attributes are returned in the `attrib` field of the `_finddata_t` structure and can have the following values (defined in `IO.h`). Users shouldn't rely on these attributes being the only values possible for the `attrib` field.

`_A_ARCH`\
Archive. Set whenever the file is changed and cleared by the **`BACKUP`** command. Value: `0x20`.

`_A_HIDDEN`\
Hidden file. Not often seen with the `DIR` command, unless you use the **`/AH`** option. Returns information about normal files and files that have this attribute. Value: `0x02`.

`_A_NORMAL`\
Normal. File has no other attributes set and can be read or written to without restriction. Value: `0x00`.

`_A_RDONLY`\
Read-only. File can't be opened for writing and a file that has the same name can't be created. Value: `0x01`.

`_A_SUBDIR`\
Subdirectory. Value: `0x10`.

`_A_SYSTEM`\
System file. Not ordinarily seen with the **`DIR`** command, unless the **`/A`** or **`/A:S`** option is used. Value: `0x04`.

`_findnext` finds the next name, if any, that matches the `filespec` argument specified in an earlier call to `_findfirst`. The `fileinfo` argument should point to a structure initialized by the previous call to `_findfirst`. If a match is found, the `fileinfo` structure contents are changed as described earlier. Otherwise, it's left unchanged. `_findclose` closes the specified search handle and releases all associated resources for both `_findfirst` and `_findnext`. The handle returned by either `_findfirst` or `_findnext` must first be passed to `_findclose`, before modification operations, such as deleting, can be performed on the directories that form the paths passed to them.

You can nest the `_find` functions. For example, if a call to `_findfirst` or `_findnext` finds the file that is a subdirectory, a new search can be initiated with another call to `_findfirst` or `_findnext`.

`_wfindfirst` and `_wfindnext` are wide-character versions of `_findfirst` and `_findnext`. The structure argument of the wide-character versions has the `_wfinddata_t` data type, which is defined in `IO.h` and in `Wchar.h`. The fields of this data type are the same as the fields of the `_finddata_t` data type, except that in `_wfinddata_t` the `name` field is of type **`wchar_t`** instead of type **`char`**. Otherwise, `_wfindfirst` and `_wfindnext` behave identically to `_findfirst` and `_findnext`.

`_findfirst` and `_findnext` use the 64-bit time type. If you must use the old 32-bit time type, you can define `_USE_32BIT_TIME_T`. The versions of these functions that have the `32` suffix in their names use the 32-bit time type, and the ones with the `64` suffix use the 64-bit time type.

Functions `_findfirst32i64`, `_findnext32i64`, `_wfindfirst32i64`, and `_wfindnext32i64` also behave identically to the 32-bit time type versions of these functions except they use and return 64-bit file lengths. Functions `_findfirst64i32`, `_findnext64i32`, `_wfindfirst64i32`, and `_wfindnext64i32` use the 64-bit time type but use 32-bit file lengths. These functions use appropriate variations of the `_finddata_t` type in which the fields have different types for the time and the file size.

`_finddata_t` is actually a macro that evaluates to `_finddata64i32_t` (or `_finddata32_t` if `_USE_32BIT_TIME_T` is defined). The following table summarizes the variations on `_finddata_t`:

| Structure | Time type | File size type |
|---|---|---|
| `_finddata_t`, `_wfinddata_t` | `__time64_t` | `_fsize_t` |
| `_finddata32_t`, `_wfinddata32_t` | `__time32_t` | `_fsize_t` |
| `__finddata64_t`, `_wfinddata64_t` | `__time64_t` | **`__int64`** |
| `_finddata32i64_t`, `_wfinddata32i64_t` | `__time32_t` | **`__int64`** |
| `_finddata64i32_t`, `_wfinddata64i32_t` | `__time64_t` | `_fsize_t` |

`_fsize_t` is a **`typedef`** for **`unsigned long`** (32 bits).

## Example

```c
// crt_find.c
// This program uses the 32-bit _find functions to print
// a list of all files (and their attributes) with a .C extension
// in the current directory.

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <time.h>

int main( void )
{
   struct _finddata_t c_file;
   intptr_t hFile;

   // Find first .c file in current directory
   if( (hFile = _findfirst( "*.c", &c_file )) == -1L )
      printf( "No *.c files in current directory!\n" );
   else
   {
      printf( "Listing of .c files\n\n" );
      printf( "RDO HID SYS ARC  FILE         DATE %25c SIZE\n", ' ' );
      printf( "--- --- --- ---  ----         ---- %25c ----\n", ' ' );
      do {
         char buffer[30];
         printf( ( c_file.attrib & _A_RDONLY ) ? " Y  " : " N  " );
         printf( ( c_file.attrib & _A_HIDDEN ) ? " Y  " : " N  " );
         printf( ( c_file.attrib & _A_SYSTEM ) ? " Y  " : " N  " );
         printf( ( c_file.attrib & _A_ARCH )   ? " Y  " : " N  " );
         ctime_s( buffer, _countof(buffer), &c_file.time_write );
         printf( " %-12s %.24s  %9ld\n",
            c_file.name, buffer, c_file.size );
      } while( _findnext( hFile, &c_file ) == 0 );
      _findclose( hFile );
   }
}
```

```Output
Listing of .c files

RDO HID SYS ARC  FILE         DATE                           SIZE
--- --- --- ---  ----         ----                           ----
N   N   N   Y   blah.c       Wed Feb 13 09:21:42 2002       1715
N   N   N   Y   test.c       Wed Feb 06 14:30:44 2002        312
```

## See also

[System calls](./system-calls.md)
