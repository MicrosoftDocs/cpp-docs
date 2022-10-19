---
title: "UNIX"
description: "Guidelines for porting your program to Unix."
ms.date: "11/04/2016"
ms.topic: "conceptual"
f1_keywords: ["unix"]
helpviewer_keywords: ["UNIX", "POSIX compatibility", "POSIX file names", "UNIX, compatibility"]
ms.assetid: 40792414-7a5b-415d-bfa8-2bfb1ebb3731
---
# UNIX

If you plan to port your programs to UNIX, follow these guidelines:

- Don't remove header files from the SYS subdirectory. You can place the SYS header files elsewhere only if you don't plan to transport your programs to UNIX.

- Use the UNIX-compatible path delimiter in routines that take strings representing paths and filenames as arguments. UNIX supports only the forward slash (/) for this purpose, but Win32 operating systems support both the backslash (\\) and the forward slash (/). This documentation uses UNIX-compatible forward slashes as path delimiters in `#include` statements, for example. (However, the Windows operating system command shell, CMD.EXE, doesn't support the forward slash in commands entered at the command prompt.)

- Use paths and filenames that work correctly in UNIX, which is case-sensitive. The file allocation table (FAT) file system in Win32 operating systems isn't case-sensitive. The NTFS file system preserves case for directory listings, but ignores case in file searches and other system operations.

> [!NOTE]
> In this version of Visual C++, UNIX compatibility information has been removed from the function descriptions.

## See also

[Compatibility](./compatibility.md)
