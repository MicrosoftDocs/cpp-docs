---
title: "/TLS (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["/TLS"]
helpviewer_keywords: ["/TLS dumpbin option", "-TLS dumpbin option"]
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
---
# /TLS

Displays the IMAGE_TLS_DIRECTORY structure from an executable.

## Remarks

/TLS displays the fields of the TLS structure as well as the addresses of the TLS callback functions.

If a program does not use thread local storage, its image will not contain a TLS structure.  See [thread](../../cpp/thread.md) for more information.

IMAGE_TLS_DIRECTORY is defined in winnt.h.

## See Also

[DUMPBIN Options](dumpbin-options.md)