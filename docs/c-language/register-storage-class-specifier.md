---
description: "Learn more about: register storage-class specifier"
title: "register storage-class specifier"
ms.date: 10/19/2021
helpviewer_keywords: ["register variables", "register storage class"]
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
---
# `register` storage-class specifier

**Microsoft Specific**

The Microsoft C/C++ compiler doesn't honor user requests for register variables. However, for portability all other semantics associated with the **`register`** keyword are honored by the compiler. For example, you can't apply the unary address-of operator (**`&`**) to a register object nor can the **`register`** keyword be used on arrays.

**END Microsoft Specific**

## See also

[Storage-class specifiers for internal-level declarations](../c-language/storage-class-specifiers-for-internal-level-declarations.md)
