---
title: "No Linkage | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["no linkage", "linkage [C++], none"]
ms.assetid: 5a413082-1034-4e04-b76b-8d14668bf434
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# No Linkage

If a declaration for an identifier within a block does not include the `extern` storage-class specifier, the identifier has no linkage and is unique to the function.

The following identifiers have no linkage:

- An identifier declared to be anything other than an object or a function

- An identifier declared to be a function parameter

- A block-scope identifier for an object declared without the `extern` storage-class specifier

If an identifier has no linkage, declaring the same name again (in a declarator or type specifier) in the same scope level generates a symbol redefinition error.

## See Also

[Using extern to Specify Linkage](../cpp/using-extern-to-specify-linkage.md)