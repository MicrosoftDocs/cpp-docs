---
description: "Learn more about: Compiler Error C3551"
title: "Compiler Error C3551"
ms.date: "11/04/2016"
f1_keywords: ["C3551"]
helpviewer_keywords: ["C3551"]
ms.assetid: c8ee23da-6568-40db-93a6-3ddb7ac47712
---
# Compiler Error C3551

"expected a late specified return type"

If you use the **`auto`** keyword as a placeholder for the return type of a function, you must provide a late-specified return type. In the following example, the late-specified return type of function `myFunction` is a pointer to an array of four elements of type **`int`**.

```
auto myFunction()->int(*)[4];
```

## See also

[auto](../../cpp/auto-cpp.md)
