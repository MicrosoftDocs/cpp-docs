---
description: "Learn more about: Console and Port I/O"
title: "Console and Port I/O"
ms.date: "11/04/2016"
helpviewer_keywords: ["routines, console and port I/O", "routines", "ports, I/O routines", "I/O [CRT], console", "I/O [CRT], port", "I/O routines, console and port I/O"]
ms.assetid: 0eee1c92-9b3d-41e0-a43a-257e546eeec8
---
# Console and Port I/O

These routines read and write on your console or on the specified port. The console I/O routines are not compatible with stream I/O or low-level I/O library routines. The console or port does not have to be opened or closed before I/O is performed, so there are no open or close routines in this category. In the Windows operating systems, the output from these functions is always directed to the console and cannot be redirected.

## Console and Port I/O Routines

|Routine|Use|
|-------------|---------|
|[_cgets, _cgetws](../c-runtime-library/cgets-cgetws.md), [_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md)|Read string from console|
|[_cprintf, _cwprintf](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md), [_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](../c-runtime-library/reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)|Write formatted data to console|
|[_cputs](../c-runtime-library/reference/cputs-cputws.md)|Write string to console|
|[_cscanf, _cwscanf](../c-runtime-library/reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md), [_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l](../c-runtime-library/reference/cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md)|Read formatted data from console|
|[_getch, _getwch](../c-runtime-library/reference/getch-getwch.md)|Read character from console|
|[_getche, _getwche](../c-runtime-library/reference/getch-getwch.md)|Read character from console and echo it|
|[_inp](../c-runtime-library/inp-inpw-inpd.md)|Read one byte from specified I/O port|
|[_inpd](../c-runtime-library/inp-inpw-inpd.md)|Read double word from specified I/O port|
|[_inpw](../c-runtime-library/inp-inpw-inpd.md)|Read 2-byte word from specified I/O port|
|[_kbhit](../c-runtime-library/reference/kbhit.md)|Check for keystroke at console; use before attempting to read from console|
|[_outp](../c-runtime-library/outp-outpw-outpd.md)|Write one byte to specified I/O port|
|[_outpd](../c-runtime-library/outp-outpw-outpd.md)|Write double word to specified I/O port|
|[_outpw](../c-runtime-library/outp-outpw-outpd.md)|Write word to specified I/O port|
|[_putch, _putwch](../c-runtime-library/reference/putch-putwch.md)|Write character to console|
|[_ungetch, _ungetwch](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)|"Unget" last character read from console so it becomes next character read|

## See also

[Input and Output](../c-runtime-library/input-and-output.md)<br/>
[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
