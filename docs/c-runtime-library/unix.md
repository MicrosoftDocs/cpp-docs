---
title: "UNIX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["unix"]
dev_langs: ["C++"]
helpviewer_keywords: ["UNIX", "POSIX compatibility", "POSIX file names", "UNIX, compatibility"]
ms.assetid: 40792414-7a5b-415d-bfa8-2bfb1ebb3731
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# UNIX

If you plan to port your programs to UNIX, follow these guidelines:

- Do not remove header files from the SYS subdirectory. You can place the SYS header files elsewhere only if you do not plan to transport your programs to UNIX.

- Use the UNIX-compatible path delimiter in routines that take strings representing paths and filenames as arguments. UNIX supports only the forward slash (/) for this purpose, whereas Win32 operating systems support both the backslash (\\) and the forward slash (/). Thus this documentation uses UNIX-compatible forward slashes as path delimiters in `#include` statements, for example. (However, the Windows operating system command shell, CMD.EXE, does not support the forward slash in commands entered at the command prompt.)

- Use paths and filenames that work correctly in UNIX, which is case sensitive. The file allocation table (FAT) file system in Win32 operating systems is not case sensitive; the NTFS file system preserves case for directory listings but ignores case in file searches and other system operations.

    > [!NOTE]
    >  In this version of Visual C++, UNIX compatibility information has been removed from the function descriptions.

## See Also

[Compatibility](../c-runtime-library/compatibility.md)