---
description: "Learn more about: Dumping delay-loaded imports"
title: "Dump delay-loaded imports"
ms.date: "01/19/2021"
helpviewer_keywords: ["delay-loaded imports, dumping", "imports (delay-loaded)", "delay-loaded imports"]
---
# Dump delay-loaded imports

Delay-loaded imports can be dumped by using [`dumpbin /imports`](imports-dumpbin.md). These imports show up with slightly different information than standard imports. They're segregated into their own section of the `/imports` list, and are explicitly labeled as delay-loaded imports. If there's unload information present in the image, that is noted. If there's bind information present, the time and date stamp of the target DLL is noted along with the bound addresses of the imports.

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
