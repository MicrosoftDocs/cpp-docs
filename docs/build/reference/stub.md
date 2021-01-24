---
description: "Learn more about: STUB"
title: "STUB"
ms.date: "11/04/2016"
f1_keywords: ["STUB"]
helpviewer_keywords: ["STUB .def file statement"]
ms.assetid: 0a3b9643-19ed-47e9-8173-ee16bc8ed056
---
# STUB

When used in a module definition file that builds a virtual device driver (VxD), allows you to specify a file name that contains an IMAGE_DOS_HEADER structure (defined in WINNT.H) to be used in the virtual device driver (VxD), rather than the default header.

```
STUB:filename
```

## Remarks

An equivalent way to specify *filename* is with the [/STUB](stub-ms-dos-stub-file-name.md) linker option.

STUB is valid in a module definition file only when building a VxD.

## See also

[Rules for Module-Definition Statements](rules-for-module-definition-statements.md)
