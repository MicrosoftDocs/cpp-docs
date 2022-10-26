---
description: "Learn more about: Low-Level I/O"
title: "Low-Level I/O"
ms.date: "11/04/2016"
helpviewer_keywords: ["I/O [CRT], low-level", "I/O [CRT], functions", "low-level I/O routines", "file handles [C++]", "file handles [C++], I/O functions"]
---
# Low-level I/O

These functions invoke the operating system directly for lower-level operation than that provided by stream I/O. Low-level input and output calls don't buffer or format data.

Low-level routines can access the standard streams opened at program startup using the following predefined file descriptors.

| Stream | File Descriptor |
|---|---|
| **`stdin`** | 0 |
| **`stdout`** | 1 |
| **`stderr`** | 2 |

Low-level I/O routines set the [`errno`](./errno-doserrno-sys-errlist-and-sys-nerr.md) global variable when an error occurs. You must include `STDIO.H` when you use low-level functions only if your program requires a constant that is defined in `STDIO.H`, such as the end-of-file indicator (`EOF`).

## Low-level I/O functions

| Function | Use |
|---|---|
| [`_close`](./reference/close.md) | Close file |
| [`_commit`](./reference/commit.md) | Flush file to disk |
| [`_creat`, `_wcreat`](./reference/creat-wcreat.md) | Create file |
| [`_dup`](./reference/dup-dup2.md) | Return next available file descriptor for given file |
| [`_dup2`](./reference/dup-dup2.md) | Create second descriptor for given file |
| [`_eof`](./reference/eof.md) | Test for end of file |
| [`_lseek`, `_lseeki64`](./reference/lseek-lseeki64.md) | Reposition file pointer to given location |
| [`_open`, `_wopen`](./reference/open-wopen.md) | Open file |
| [`_read`](./reference/read.md) | Read data from file |
| [`_sopen`, `_wsopen`](./reference/sopen-wsopen.md), [`_sopen_s`, `_wsopen_s`](./reference/sopen-s-wsopen-s.md) | Open file for file sharing |
| [`_tell`, `_telli64`](./reference/tell-telli64.md) | Get current file-pointer position |
| [`_umask`](./reference/umask.md), [`_umask_s`](./reference/umask-s.md) | Set file-permission mask |
| [`_write`](./reference/write.md) | Write data to file |

`_dup` and `_dup2` are typically used to associate the predefined file descriptors with different files.

## See also

[Input and output](./input-and-output.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)\
[System calls](./system-calls.md)
