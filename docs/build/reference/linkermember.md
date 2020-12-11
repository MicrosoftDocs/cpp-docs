---
description: "Learn more about: /LINKERMEMBER"
title: "/LINKERMEMBER"
ms.date: "11/04/2016"
f1_keywords: ["/linkermember"]
helpviewer_keywords: ["/LINKERMEMBER dumpbin option", "LINKERMEMBER dumpbin option", "-LINKERMEMBER dumpbin option"]
ms.assetid: c96868c1-d70e-4651-ae36-c55b58b16406
---
# /LINKERMEMBER

```
/LINKERMEMBER[:{1|2}]
```

## Remarks

This option displays public symbols defined in a library. Specify the 1 argument to display symbols in object order, along with their offsets. Specify the 2 argument to display offsets and index numbers of objects, and then list the symbols in alphabetical order, along with the object index for each. To get both outputs, specify /LINKERMEMBER without the number argument.

Only the [/HEADERS](headers.md) DUMPBIN option is available for use on files produced with the [/GL](gl-whole-program-optimization.md) compiler option.

## See also

[DUMPBIN Options](dumpbin-options.md)
