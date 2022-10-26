---
description: "Learn more about: Console and Port I/O"
title: "Console and Port I/O"
ms.date: "11/04/2016"
helpviewer_keywords: ["routines, console and port I/O", "routines", "ports, I/O routines", "I/O [CRT], console", "I/O [CRT], port", "I/O routines, console and port I/O"]
---
# Console and port I/O

These routines read and write on your console or on the specified port. The console I/O routines aren't compatible with stream I/O or low-level I/O library routines. The console or port doesn't have to be opened or closed before I/O is performed, so there are no open or close routines in this category. In the Windows operating systems, the output from these functions is always directed to the console and can't be redirected.

## Console and port I/O routines

| Routine | Use |
|---|---|
| [`_cgets`, `_cgetws`](./cgets-cgetws.md), [`_cgets_s`, `_cgetws_s`](./reference/cgets-s-cgetws-s.md) | Read string from console |
| [`_cprintf`, `_cwprintf`](./reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md), [`_cprintf_s`, `_cprintf_s_l`, `_cwprintf_s`, `_cwprintf_s_l`](./reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md) | Write formatted data to console |
| [`_cputs`](./reference/cputs-cputws.md) | Write string to console |
| [`_cscanf`, `_cwscanf`](./reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md), [`_cscanf_s`, `_cscanf_s_l`, `_cwscanf_s`, `_cwscanf_s_l`](./reference/cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md) | Read formatted data from console |
| [`_getch`, `_getwch`](./reference/getch-getwch.md) | Read character from console |
| [`_getche`, `_getwche`](./reference/getch-getwch.md) | Read character from console and echo it |
| [`_inp`](./inp-inpw-inpd.md) | Read a byte from the specified I/O port |
| [`_inpd`](./inp-inpw-inpd.md) | Read double word from specified I/O port |
| [`_inpw`](./inp-inpw-inpd.md) | Read 2-byte word from specified I/O port |
| [`_kbhit`](./reference/kbhit.md) | Check for keystroke at console; use before attempting to read from console |
| [`_outp`](./outp-outpw-outpd.md) | Write a byte to the specified I/O port |
| [`_outpd`](./outp-outpw-outpd.md) | Write double word to specified I/O port |
| [`_outpw`](./outp-outpw-outpd.md) | Write word to specified I/O port |
| [`_putch`, `_putwch`](./reference/putch-putwch.md) | Write character to console |
| [`_ungetch`, `_ungetwch`](./reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md) | "Unget" last character read from console so it becomes next character read |

## See also

[Input and output](./input-and-output.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
