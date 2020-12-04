---
description: "Learn more about: register Storage-Class Specifier"
title: "register Storage-Class Specifier"
ms.date: "11/04/2016"
helpviewer_keywords: ["register variables", "register storage class"]
ms.assetid: 7577bf48-88ec-4191-873c-ef4217a4034e
---
# register Storage-Class Specifier

**Microsoft Specific**

The Microsoft C/C++ compiler does not honor user requests for register variables. However, for portability all other semantics associated with the **`register`** keyword are honored by the compiler. For example, you cannot apply the unary address-of operator (**&**) to a register object nor can the **`register`** keyword be used on arrays.

**END Microsoft Specific**

## See also

[Storage-Class Specifiers for Internal-Level Declarations](../c-language/storage-class-specifiers-for-internal-level-declarations.md)
