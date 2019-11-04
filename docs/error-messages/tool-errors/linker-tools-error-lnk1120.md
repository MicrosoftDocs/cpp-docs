---
title: "Linker tools error LNK1120"
description: "Describes the LNK1120 linker error, which reports the number of unresolved external symbol errors in the link."
ms.date: "10/31/2019"
f1_keywords: ["LNK1120"]
helpviewer_keywords: ["LNK1120"]
ms.assetid: 56aa7d36-921f-4daf-b44d-cca0d4fb1b51
---
# Linker tools error LNK1120

> *number* unresolved externals

Error LNK1120 reports the number of [unresolved external symbol](linker-tools-error-lnk2001.md#what-is-an-unresolved-external-symbol) errors in the current link.

Each unresolved external symbol first gets reported by a [LNK2001](linker-tools-error-lnk2001.md) or [LNK2019](linker-tools-error-lnk2019.md) error. The LNK1120 message comes last, and shows the unresolved symbol error count.

> [!IMPORTANT]
> **You don't need to fix this error.** This error goes away when you correct all of the LNK2001 and LNK2019 linker errors before it in the build output. Always fix issues starting at the first reported error. Later errors may be caused by earlier ones, and go away when the earlier errors are fixed.
