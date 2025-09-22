---
title: "Linker Tools Warning LNK4037"
description: "Learn more about: Linker Tools Warning LNK4037"
ms.date: 10/04/2017
f1_keywords: ["LNK4037"]
helpviewer_keywords: ["LNK4037"]
---
# Linker Tools Warning LNK4037

> '*symbol*' does not exist; ignored

## Remarks

The decorated name *symbol* could not be ordered by using the [/ORDER](../../build/reference/order-put-functions-in-order.md) option because it could not be found in the program. Check the specification of *symbol* in the order response file. For more information, see the [/ORDER (Put functions in order)](../../build/reference/order-put-functions-in-order.md) linker option.

> [!NOTE]
> LINK cannot order static functions because static function names are not public symbol names. When **/ORDER** is specified, this linker warning is generated for each symbol in the order response file that is either static or not found.
