---
description: "Learn more about: File Handling"
title: "File Handling"
ms.date: "11/04/2016"
f1_keywords: ["c.files"]
helpviewer_keywords: ["files [C++], handling", "files [C++], opening", "files [C++], manipulating"]
ms.assetid: 48119e2e-e94f-4602-b08b-b72440f731d8
---
# File handling

Use these routines to create, delete, and manipulate files and to set and check file-access permissions.

The C run-time libraries have a 512 limit for the number of files that can be open at any one time. Attempting to open more than the maximum number of file descriptors or file streams causes program failure. Use [`_setmaxstdio`](./reference/setmaxstdio.md) to change this number.

## File-handling routines (file descriptor)

These routines operate on files designated by a file descriptor.

| Routine | Use |
|---|---|
| [`_chsize`](./reference/chsize.md),[`_chsize_s`](./reference/chsize-s.md) | Change file size |
| [`_filelength`, `_filelengthi64`](./reference/filelength-filelengthi64.md) | Get file length |
| [`_fstat`, `_fstat32`, `_fstat64`, `_fstati64`, `_fstat32i64`, `_fstat64i32`](./reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md) | Get file-status information on descriptor |
| [`_get_osfhandle`](./reference/get-osfhandle.md) | Return operating-system file handle associated with existing C run-time file descriptor |
| [`_isatty`](./reference/isatty.md) | Check for character device |
| [`_locking`](./reference/locking.md) | Lock areas of file |
| [`_open_osfhandle`](./reference/open-osfhandle.md) | Associate C run-time file descriptor with existing operating-system file handle |
| [`_setmode`](./reference/setmode.md) | Set file-translation mode |

## File-Handling Routines (Path or Filename)

These routines operate on files specified by a path or filename.

| Routine | Use |
|---|---|
| [`_access`, `_waccess`](./reference/access-waccess.md), [`_access_s`, `_waccess_s`](./reference/access-s-waccess-s.md) | Check file-permission setting |
| [`_chmod`, `_wchmod`](./reference/chmod-wchmod.md) | Change file-permission setting |
| [`_fullpath`, `_wfullpath`](./reference/fullpath-wfullpath.md) | Expand a relative path to its absolute path name |
| [`_makepath`, `_wmakepath`](./reference/makepath-wmakepath.md), [`_makepath_s`, `_wmakepath_s`](./reference/makepath-s-wmakepath-s.md) | Merge path components into single, full path |
| [`_mktemp`, `_wmktemp`](./reference/mktemp-wmktemp.md), [`_mktemp_s`, `_wmktemp_s`](./reference/mktemp-s-wmktemp-s.md) | Create unique filename |
| [`remove`, `_wremove`](./reference/remove-wremove.md) | Delete file |
| [`rename`, `_wrename`](./reference/rename-wrename.md) | Rename file |
| [`_splitpath`, `_wsplitpath`](./reference/splitpath-wsplitpath.md), [`_splitpath_s`, `_wsplitpath_s`](./reference/splitpath-s-wsplitpath-s.md) | Parse path into components |
| [`_stat`, `_stat64`, `_stati64`, `_wstat`, `_wstat64`, `_wstati64`](./reference/stat-functions.md) | Get file-status information on named file |
| [`_umask`](./reference/umask.md), [`_umask_s`](./reference/umask-s.md) | Set default permission mask for new files created by program |
| [`_unlink`, `_wunlink`](./reference/unlink-wunlink.md) | Delete file |

## File-Handling Routines (Open File)

These routines open files.

| Routine | Use |
|---|---|
| [`fopen`, `_wfopen`](./reference/fopen-wfopen.md), [`fopen_s`, `_wfopen_s`](./reference/fopen-s-wfopen-s.md) | Opens a file and returns a pointer to the open file. |
| [`_fsopen`, `_wfsopen`](./reference/fsopen-wfsopen.md) | Open a stream with file sharing and returns a pointer to the open file. |
| [`_open`, `_wopen`](./reference/open-wopen.md) | Opens a file and returns a file descriptor to the opened file. |
| [`_sopen`, `_wsopen`](./reference/sopen-wsopen.md), [`_sopen_s`, `_wsopen_s`](./reference/sopen-s-wsopen-s.md) | Open a file with file sharing and returns a file descriptor to the open file. |
| [`_pipe`](./reference/pipe.md) | Creates a pipe for reading and writing. |
| [`freopen`, `_wfreopen`](./reference/freopen-wfreopen.md), [`freopen_s`, `_wfreopen_s`](./reference/freopen-s-wfreopen-s.md) | Reassign a file pointer. |

These routines provide a way to change the representation of the file between a `FILE` structure, a file descriptor, and a Win32 file handle.

| Routine | Use |
|---|---|
| [`_fdopen`, `_wfdopen`](./reference/fdopen-wfdopen.md) | Associates a stream with a file that was previously opened for low-level I/O and returns a pointer to the open stream. |
| [`_fileno`](./reference/fileno.md) | Gets the file descriptor associated with a stream. |
| [`_get_osfhandle`](./reference/get-osfhandle.md) | Return operating-system file handle associated with existing C run-time file descriptor |
| [`_open_osfhandle`](./reference/open-osfhandle.md) | Associates C run-time file descriptor with an existing operating-system file handle. |

The following Win32 functions also open files and pipes:

- [`CreateFile`](/windows/win32/api/fileapi/nf-fileapi-createfilew)

- [`CreatePipe`](/windows/win32/api/namedpipeapi/nf-namedpipeapi-createpipe)

- [`CreateNamedPipe`](/windows/win32/api/winbase/nf-winbase-createnamedpipea)

## See also

[Universal C runtime routines by category](./run-time-routines-by-category.md)\
[Directory control](./directory-control.md)\
[System calls](./system-calls.md)
