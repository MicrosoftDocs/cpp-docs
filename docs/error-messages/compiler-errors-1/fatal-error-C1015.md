---
description: "Learn more about: Fatal Error C1015"
title: "Fatal Error C1015"
ms.date: 08/17/2022
f1_keywords: ["C1015"]
helpviewer_keywords: ["C1015"]
---
# Fatal Error C1015

> header-names '*header-name*' and '*header-name*' identify the same header and cannot be used as both `/headerUnit:quote` and `/headerUnit:angle` arguments; please provide this header-name only once

Don't include a header unit using both double-quotes and angle brackets. Use only one form, consistent with the **`/headerUnit:quote`** or **`/headerUnit:angle`** compiler option. For more information, see [`/headerUnit` (Use header unit IFC)](../../build/reference/headerunit.md).
