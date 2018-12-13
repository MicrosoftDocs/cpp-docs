---
title: "alloca (C++) - Visual Studio"
ms.date: "12/14/2018"
ms.topic: "reference"
ms.assetid: 2b209335-e3a0-4934-93f0-3b5925d22918
---
# alloca

[_alloca](../c-runtime-library/reference/alloca.md) is required to be 16-byte aligned and additionally required to use a frame pointer.

The stack that is allocated needs to include space below it for parameters of subsequently called functions, as discussed in [Stack Allocation](stack-allocation.md).

## See Also

[Stack Usage](stack-usage.md)