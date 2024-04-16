---
title: "_nolock Functions"
description: "Learn more about: _nolock Functions"
ms.date: "04/14/2024"
helpviewer_keywords: ["_nolock functions", "nolock functions"]
---
# `_nolock` functions

The `_nolock` functions are versions of I/O functions that don't perform any locking. They're provided for users requiring maximum performance. For more information, see [Multithreaded libraries performance](multithreaded-libraries-performance.md).

Use `_nolock` functions only if your program is truly single-threaded or if it does its own locking.

## No lock routines

| Routine | Use |
|---|---|
| [`_fclose_nolock`](reference/fclose-nolock.md) | Closes a stream without locking |
| [`_fflush_nolock`](reference/fflush-nolock.md) | Flushes a stream without locking |
| [`_fgetc_nolock`, `_fgetwc_nolock`](reference/fgetc-nolock-fgetwc-nolock.md) | Reads a character from a stream without locking |
| [`_fread_nolock`](reference/fread-nolock.md) | Reads data from a stream without locking |
| [`_fseek_nolock`, `_fseeki64_nolock`](reference/fseek-nolock-fseeki64-nolock.md) | Moves the file pointer to a specified location without locking |
| [`_ftell_nolock`, `_ftelli64_nolock`](reference/ftell-nolock-ftelli64-nolock.md) | Gets the current position of a file pointer without locking |
| [`_fwrite_nolock`](reference/fwrite-nolock.md) | Writes data to a stream without locking |
| [`_getc_nolock`, `_getwc_nolock`](reference/getc-nolock-getwc-nolock.md) | Reads a character from a stream without locking |
| [`_getch_nolock`, `_getwch_nolock`](reference/getch-nolock-getwch-nolock.md) | Gets a character from the console without echo and without locking |
| [`_getchar_nolock`, `_getwchar_nolock`](reference/getchar-nolock-getwchar-nolock.md) | Reads a character from the standard input without locking |
| [`_getche_nolock`, `_getwche_nolock`](reference/getche-nolock-getwche-nolock.md) | Gets a character from the console with echo and without locking |
| [`_getdcwd_nolock`, `_wgetdcwd_nolock`](reference/getdcwd-nolock-wgetdcwd-nolock.md) | Gets the full path of the current working directory on the specified drive |
| [`_putc_nolock`, `_putwc_nolock`](reference/putc-nolock-putwc-nolock.md) | Writes a character to a stream without locking |
| [`_putch_nolock`, `_putwch_nolock`](reference/putch-nolock-putwch-nolock.md) | Writes a character to the console without locking |
| [`_putchar_nolock`, `_putwchar_nolock`](reference/putchar-nolock-putwchar-nolock.md) | Writes a character to `stdout` without locking |
| [`_ungetc_nolock`, `_ungetwc_nolock`](reference/ungetc-nolock-ungetwc-nolock.md) | Pushes a character back onto the stream without locking |
| [`_ungetch_nolock`, `_ungetwch_nolock`](reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md) | Pushes back the last character that's read from the console without locking |

## See also

[Input and output](input-and-output.md)\
[Universal C runtime routines by category](run-time-routines-by-category.md)
