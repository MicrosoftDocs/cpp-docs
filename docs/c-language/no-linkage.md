---
description: "Learn more about: No Linkage"
title: "No Linkage"
ms.date: "11/04/2016"
helpviewer_keywords: ["no linkage", "linkage [C++], none"]
ms.assetid: 5a413082-1034-4e04-b76b-8d14668bf434
---
# No Linkage

If a declaration for an identifier within a block does not include the **`extern`** storage-class specifier, the identifier has no linkage and is unique to the function.

The following identifiers have no linkage:

- An identifier declared to be anything other than an object or a function

- An identifier declared to be a function parameter

- A block-scope identifier for an object declared without the **`extern`** storage-class specifier

If an identifier has no linkage, declaring the same name again (in a declarator or type specifier) in the same scope level generates a symbol redefinition error.

## See also

[Using extern to Specify Linkage](../cpp/extern-cpp.md)
