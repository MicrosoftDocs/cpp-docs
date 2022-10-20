---
description: "Learn more about: _nolock Functions"
title: "_nolock Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["_nolock functions", "nolock functions"]
ms.assetid: 7d651d87-38d2-4303-9897-fdb5f7a3e899
---
# `_nolock` functions

The `_nolock` functions are versions of I/O functions that don't perform any locking. They're provided for users requiring maximum performance. For more information, see [Multithreaded libraries performance](./multithreaded-libraries-performance.md).

Use _nolock functions only if your program is truly single-threaded or if it does its own locking.

## No lock routines

[`_fclose_nolock`](./reference/fclose-nolock.md)

[`_fflush_nolock`](./reference/fflush-nolock.md)

[`_fgetc_nolock`, `_fgetwc_nolock`](./reference/fgetc-nolock-fgetwc-nolock.md)

[`_fread_nolock`](./reference/fread-nolock.md)

[`_fseek_nolock`, `_fseeki64_nolock`](./reference/fseek-nolock-fseeki64-nolock.md)

[`_ftell_nolock`, `_ftelli64_nolock`](./reference/ftell-nolock-ftelli64-nolock.md)

[`_fwrite_nolock`](./reference/fwrite-nolock.md)

[`_getc_nolock`, `_getwc_nolock`](./reference/getc-nolock-getwc-nolock.md)

[`_getch_nolock`, `_getwch_nolock`](./reference/getch-nolock-getwch-nolock.md)

[`_getchar_nolock`, `_getwchar_nolock`](./reference/getchar-nolock-getwchar-nolock.md)

[`_getche_nolock`, `_getwche_nolock`](./reference/getche-nolock-getwche-nolock.md)

[`_getdcwd_nolock`, `_wgetdcwd_nolock`](./reference/getdcwd-nolock-wgetdcwd-nolock.md)

[`_putc_nolock`, `_putwc_nolock`](./reference/putc-nolock-putwc-nolock.md)

[`_putch_nolock`, `_putwch_nolock`](./reference/putch-nolock-putwch-nolock.md)

[`_putchar_nolock`, `_putwchar_nolock`](./reference/putchar-nolock-putwchar-nolock.md)

[`_ungetc_nolock`, `_ungetwc_nolock`](./reference/ungetc-nolock-ungetwc-nolock.md)

[`_ungetch_nolock`, `_ungetwch_nolock`](./reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)

## See also

[Input and output](./input-and-output.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
