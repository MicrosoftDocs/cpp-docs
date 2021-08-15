---
description: "Learn more about: Storage of Unions"
title: "Storage of Unions"
ms.date: "11/04/2016"
helpviewer_keywords: ["storage, union", "union keyword [C], storage", "union keyword [C]"]
ms.assetid: b33d246a-8d20-41c4-89b2-ab05f1428792
---
# Storage of Unions

The storage associated with a union variable is the storage required for the largest member of the union. When a smaller member is stored, the union variable can contain unused memory space. All members are stored in the same memory space and start at the same address. The stored value is overwritten each time a value is assigned to a different member. For example:

```
union         /* Defines a union named x */
{
    char *a, b;
    float f[20];
} x;
```

The members of the `x` union are, in order of their declaration, a pointer to a **`char`** value, a **`char`** value, and an array of **`float`** values. The storage allocated for `x` is the storage required for the 20-element array `f`, since `f` is the longest member of the union. Because no tag is associated with the union, its type is unnamed or "anonymous."

## See also

[Union Declarations](../c-language/union-declarations.md)
