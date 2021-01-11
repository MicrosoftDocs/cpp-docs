---
description: "Learn more about: Expressions in Makefile Preprocessing"
title: "Expressions in Makefile Preprocessing"
ms.date: "11/04/2016"
helpviewer_keywords: ["preprocessing makefiles", "expressions [C++], makefile preprocessing", "makefiles, preprocessing"]
ms.assetid: 37f0f413-97e0-452c-a83f-3c9002c44c92
---
# Expressions in Makefile Preprocessing

The **!IF** or **!ELSE IF** `constantexpression` consists of integer constants (in decimal or C-language notation), string constants, or commands. Use parentheses to group expressions. Expressions use C-style signed long integer arithmetic; numbers are in 32-bit two's-complement form in the range - 2147483648 to 2147483647.

Expressions can use operators that act on constant values, exit codes from commands, strings, macros, and file-system paths.

## What do you want to know more about?

[Makefile preprocessing operators](makefile-preprocessing-operators.md)

[Executing a program in preprocessing](executing-a-program-in-preprocessing.md)

## See also

[Makefile Preprocessing](makefile-preprocessing.md)
