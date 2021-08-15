---
description: "Learn more about: /IMPORTS (DUMPBIN)"
title: "/IMPORTS (DUMPBIN)"
ms.date: "11/04/2016"
f1_keywords: ["/imports"]
helpviewer_keywords: ["IMPORTS dumpbin option", "/IMPORTS dumpbin option", "-IMPORTS dumpbin option"]
ms.assetid: 6a296216-2b1b-40f8-8736-cd4553a22456
---
# /IMPORTS (DUMPBIN)

```
/IMPORTS[:file]
```

This option displays the list of DLLs (both statically linked and [delay loaded](linker-support-for-delay-loaded-dlls.md)) that are imported to an executable file or DLL and all the individual imports from each of these DLLs.

The optional `file` specification allows you to specify that the imports for only that DLL will be displayed. For example:

```
dumpbin /IMPORTS:msvcrt.dll
```

## Remarks

The output displayed by this option is similar to the [/EXPORTS](dash-exports.md) output.

Only the [/HEADERS](headers.md) DUMPBIN option is available for use on files produced with the [/GL](gl-whole-program-optimization.md) compiler option.

## See also

[DUMPBIN Options](dumpbin-options.md)
