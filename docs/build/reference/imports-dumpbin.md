---
title: "-IMPORTS (DUMPBIN) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/imports"]
dev_langs: ["C++"]
helpviewer_keywords: ["IMPORTS dumpbin option", "/IMPORTS dumpbin option", "-IMPORTS dumpbin option"]
ms.assetid: 6a296216-2b1b-40f8-8736-cd4553a22456
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /IMPORTS (DUMPBIN)

```
/IMPORTS[:file]
```

This option displays the list of DLLs (both statically linked and [delay loaded](../../build/reference/linker-support-for-delay-loaded-dlls.md)) that are imported to an executable file or DLL and all the individual imports from each of these DLLs.

The optional `file` specification allows you to specify that the imports for only that DLL will be displayed. For example:

```
dumpbin /IMPORTS:msvcrt.dll
```

## Remarks

The output displayed by this option is similar to the [/EXPORTS](../../build/reference/dash-exports.md) output.

Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option.

## See Also

[DUMPBIN Options](../../build/reference/dumpbin-options.md)