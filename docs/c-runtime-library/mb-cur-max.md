---
description: "Learn more about: MB_CUR_MAX"
title: "MB_CUR_MAX"
ms.date: "10/18/2017"
f1_keywords: ["MB_CUR_MAX", "CTYPE/MB_CUR_MAX"]
helpviewer_keywords: ["MB_CUR_MAX constant"]
ms.assetid: fab22609-c14d-4c19-991c-bd09ff30e604
---
# `MB_CUR_MAX`

A macro that indicates the maximum number of bytes in a multibyte character for the current locale.

## Syntax

```cpp
#include <stdlib.h>
```

## Remarks

Context: ANSI multibyte- and wide-character conversion functions

The value of `MB_CUR_MAX` is the maximum number of bytes in a multibyte character for the current locale.

## See also

[`_mbclen`, `mblen`, `_mblen_l`](./reference/mbclen-mblen-mblen-l.md)\
[`mbstowcs`, `_mbstowcs_l`](./reference/mbstowcs-mbstowcs-l.md)\
[`mbtowc`, `_mbtowc_l`](./reference/mbtowc-mbtowc-l.md)\
[`___mb_cur_max_func`, `___mb_cur_max_l_func`, `__p___mb_cur_max`, `__mb_cur_max`](./mb-cur-max-func-mb-cur-max-l-func-p-mb-cur-max-mb-cur-max.md)\
[Standard types](./standard-types.md)\
[`wcstombs`, `_wcstombs_l`](./reference/wcstombs-wcstombs-l.md)\
[`wctomb`, `_wctomb_l`](./reference/wctomb-wctomb-l.md)\
[Data type constants](./data-type-constants.md)\
[Global constants](./global-constants.md)
