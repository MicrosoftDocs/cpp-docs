---
title: "abort Function (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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

The **abort** function does not close files that are open or temporary. It does not flush stream buffers.
It terminates execution of a program abnormally. It’s defined in ‘stdlib.h’ header and is prototyped below

    void abort(void);

## See Also

[Library Functions](../c-language/library-functions.md)
