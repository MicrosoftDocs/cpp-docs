---
description: "Learn more about: EOF, WEOF"
title: "EOF, WEOF"
ms.date: "11/04/2016"
f1_keywords: ["EOF", "STDIO/EOF", "WEOF", "CORECRT_WSTDIO/WEOF"]
helpviewer_keywords: ["EOF constant", "WEOF constant", "end of file"]
ms.assetid: a7150563-cdae-4cdf-9798-ad509990e505
---
# `EOF`, `WEOF`

## Syntax

```C
#include <stdio.h>
```

## Remarks

`EOF` is returned by an I/O routine when the end-of-file (or in some cases, an error) is encountered.

`WEOF` yields the return value, of type **`wint_t`**, used to signal the end of a wide stream, or to report an error condition.

## See also

[`putc`, `putwc`](./reference/putc-putwc.md)\
[`ungetc`, `ungetwc`](./reference/ungetc-ungetwc.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](./reference/scanf-scanf-l-wscanf-wscanf-l.md)\
[`fflush`](./reference/fflush.md)\
[`fclose`, `_fcloseall`](./reference/fclose-fcloseall.md)\
[`_ungetch`, `_ungetwch`, `_ungetch_nolock`, `_ungetwch_nolock`](./reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)\
[`_putch`, `_putwch`](./reference/putch-putwch.md)\
[`isascii`, `__isascii`, `iswascii`](./reference/isascii-isascii-iswascii.md)\
[Global constants](./global-constants.md)
