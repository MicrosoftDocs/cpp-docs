---
description: "Learn more about: EOF, WEOF"
title: "EOF, WEOF"
ms.date: "11/04/2016"
helpviewer_keywords: ["EOF function", "WEOF function", "end of file"]
ms.assetid: a7150563-cdae-4cdf-9798-ad509990e505
---
# EOF, WEOF

## Syntax

```
#include <stdio.h>
```

## Remarks

EOF is returned by an I/O routine when the end-of-file (or in some cases, an error) is encountered.

WEOF yields the return value, of type **wint_t**, used to signal the end of a wide stream, or to report an error condition.

## See also

[putc, putwc](../c-runtime-library/reference/putc-putwc.md)<br/>
[ungetc, ungetwc](../c-runtime-library/reference/ungetc-ungetwc.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[fflush](../c-runtime-library/reference/fflush.md)<br/>
[fclose, _fcloseall](../c-runtime-library/reference/fclose-fcloseall.md)<br/>
[_ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock](../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)<br/>
[_putch, _putwch](../c-runtime-library/reference/putch-putwch.md)<br/>
[isascii, __isascii, iswascii](../c-runtime-library/reference/isascii-isascii-iswascii.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
