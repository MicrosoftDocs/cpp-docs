---
description: "Learn more about: Internal Linkage"
title: "Internal Linkage"
ms.date: "11/04/2016"
helpviewer_keywords: ["internal linkage", "linkage [C++], internal"]
ms.assetid: 80be7b51-c930-43db-94d6-4f09a64077bf
---
# Internal Linkage

If the declaration of a file-scope identifier for an object or a function contains the *storage-class-specifier* **`static`**, the identifier has internal linkage. Otherwise, the identifier has external linkage. See [Storage Classes](../c-language/c-storage-classes.md) for a discussion of the *storage-class-specifier* nonterminal.

Within one translation unit, each instance of an identifier with internal linkage denotes the same identifier or function. Internally linked identifiers are unique to a translation unit.

## See also

[Using extern to Specify Linkage](../cpp/extern-cpp.md)
