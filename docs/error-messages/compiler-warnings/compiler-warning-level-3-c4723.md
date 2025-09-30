---
title: "Compiler Warning (level 3) C4723"
description: "Describes the MSVC compiler warning C4723 for potential divide by zero."
ms.date: 07/08/2020
f1_keywords: ["C4723"]
helpviewer_keywords: ["C4723"]
---
# Compiler Warning (level 3) C4723

> potential divide by 0

## Remarks

The second operand in a divide operation evaluated to zero at compile time, giving undefined results.

This warning is issued only when optimizations are enabled.

The compiler may have generated the zero operand.
