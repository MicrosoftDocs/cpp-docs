---
description: "Learn more about: /LINENUMBERS"
title: "/LINENUMBERS"
ms.date: "11/04/2016"
f1_keywords: ["/linenumbers"]
helpviewer_keywords: ["LINENUMBERS dumpbin option", "line numbers", "-LINENUMBERS dumpbin option", "/LINENUMBERS dumpbin option"]
ms.assetid: 1681d582-2c2f-484e-9920-109959549055
---
# /LINENUMBERS

```
/LINENUMBERS
```

## Remarks

This option displays COFF line numbers. Line numbers exist in an object file if it was compiled with Program Database (/Zi), C7 Compatible (/Z7), or Line Numbers Only (/Zd). An executable file or DLL contains COFF line numbers if it was linked with Generate Debug Info (/DEBUG).

Only the [/HEADERS](headers.md) DUMPBIN option is available for use on files produced with the [/GL](gl-whole-program-optimization.md) compiler option.

## See also

[DUMPBIN Options](dumpbin-options.md)
