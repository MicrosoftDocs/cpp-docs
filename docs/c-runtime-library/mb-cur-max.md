---
title: "MB_CUR_MAX | Microsoft Docs"
ms.custom: ""
ms.date: "10/18/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["MB_CUR_MAX"]
dev_langs: ["C++"]
helpviewer_keywords: ["MB_CUR_MAX constant"]
ms.assetid: fab22609-c14d-4c19-991c-bd09ff30e604
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# MB_CUR_MAX

A macro that indicates the maximum number of bytes in a multibyte character for the current locale.

## Syntax

`#include <stdlib.h>`

## Remarks

Context: ANSI multibyte- and wide-character conversion functions

The value of `MB_CUR_MAX` is the maximum number of bytes in a multibyte character for the current locale.

## See Also

[_mbclen, mblen, _mblen_l](../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
[mbstowcs, _mbstowcs_l](../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
[mbtowc, _mbtowc_l](../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
[&#95;&#95;&#95;mb_cur_max_func, &#95;&#95;&#95;mb_cur_max_l_func, &#95;&#95;p&#95;&#95;&#95;mb_cur_max, &#95;&#95;mb_cur_max](../c-runtime-library/mb-cur-max-func-mb-cur-max-l-func-p-mb-cur-max-mb-cur-max.md)   
[Standard Types](../c-runtime-library/standard-types.md)   
[wcstombs, _wcstombs_l](../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
[wctomb, _wctomb_l](../c-runtime-library/reference/wctomb-wctomb-l.md)   
[Data Type Constants](../c-runtime-library/data-type-constants.md)   
[Global Constants](../c-runtime-library/global-constants.md)