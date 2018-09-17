---
title: "-ALLOWISOLATION | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/ALLOWISOLATION"]
dev_langs: ["C++"]
helpviewer_keywords: ["-ALLOWISOLATION editbin option", "/ALLOWISOLATION editbin option", "ALLOWISOLATION editbin option"]
ms.assetid: 91430344-f64f-491a-a5a5-7ea3b21cbe68
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /ALLOWISOLATION

Specifies behavior for manifest lookup.

## Syntax

```

/ALLOWISOLATION[:NO]
```

## Remarks

**/ALLOWISOLATION** causes the operating system to do manifest lookups and loads.

**/ALLOWISOLATION** is the default.

**/ALLOWISOLATION:NO** indicates that executables are loaded as if there were no manifest, and causes [EDITBIN Reference](../../build/reference/editbin-reference.md) to set the `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` bit in the optional header's `DllCharacteristics` field.

When isolation is disabled for an executable, the Windows loader doesn't try to find an application manifest for the newly created process. The new process doesn't have a default activation context, even if there is a manifest in the executable itself or if there is a manifest that has the name *executable-name*.exe.manifest.

## See Also

[EDITBIN Options](../../build/reference/editbin-options.md)<br/>
[/ALLOWISOLATION (Manifest Lookup)](../../build/reference/allowisolation-manifest-lookup.md)
[Manifest Files Reference](/windows/desktop/SbsCs/manifest-files-reference)