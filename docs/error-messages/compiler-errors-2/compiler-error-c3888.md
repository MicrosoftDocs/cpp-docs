---
description: "Learn more about: Compiler Error C3888"
title: "Compiler Error C3888"
ms.date: "11/04/2016"
f1_keywords: ["C3888"]
helpviewer_keywords: ["C3888"]
ms.assetid: 40820812-79c5-4dcd-a19d-b4164d25fc8a
---
# Compiler Error C3888

'name' : the const expression associated with this literal data member is not supported by C++/CLI

The *name* data member that is declared with the [literal](../../extensions/literal-cpp-component-extensions.md) keyword is initialized with a value the compiler does not support. The compiler supports only constant integral, enum, or string types. The likely cause for the **C3888** error is that the data member is initialized with a byte array.

### To correct this error

1. Check that the declared literal data member is a supported type.

## See also

[literal](../../extensions/literal-cpp-component-extensions.md)
