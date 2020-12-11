---
description: "Learn more about: _fmode"
title: "_fmode"
ms.date: "11/04/2016"
f1_keywords: ["fmode", "_fmode"]
helpviewer_keywords: ["file translation [C++], default mode", "fmode function", "_fmode function"]
ms.assetid: ac6df9eb-e5cc-4c54-aff3-373c21983118
---
# _fmode

The `_fmode` variable sets the default file-translation mode for text or binary translation. This global variable has been deprecated for the more secure functional versions [_get_fmode](../c-runtime-library/reference/get-fmode.md) and [_set_fmode](../c-runtime-library/reference/set-fmode.md), which should be used in place of the global variable. It is declared in Stdlib.h as follows.

## Syntax

```
extern int _fmode;
```

## Remarks

The default setting of `_fmode` is `_O_TEXT` for text-mode translation. `_O_BINARY` is the setting for binary mode.

You can change the value of `_fmode` in three ways:

- Link with Binmode.obj. This changes the initial setting of `_fmode` to `_O_BINARY`, causing all files except `stdin`, `stdout`, and `stderr` to be opened in binary mode.

- Make a call to `_get_fmode` or `_set_fmode` to get or set the `_fmode` global variable, respectively.

- Change the value of `_fmode` directly by setting it in your program.

## See also

[Global Variables](../c-runtime-library/global-variables.md)<br/>
[_get_fmode](../c-runtime-library/reference/get-fmode.md)<br/>
[_set_fmode](../c-runtime-library/reference/set-fmode.md)
