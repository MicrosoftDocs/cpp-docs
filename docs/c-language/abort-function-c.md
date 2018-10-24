---
title: "abort Function (C) | Microsoft Docs"
ms.custom: ""
ms.date: "10/24/2018"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["abort function"]
ms.assetid: caa62d67-ffc4-4481-87a4-0c1e2b0f537c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# abort Function (C)

**ANSI 4.10.4.1** The behavior of the **abort** function with regard to open and temporary files

The **abort** function does not close files that are open or temporary. It does not flush stream buffers. For more information, see [abort](../c-runtime-library/reference/abort.md).

## See Also

[Library Functions](../c-language/library-functions.md)
