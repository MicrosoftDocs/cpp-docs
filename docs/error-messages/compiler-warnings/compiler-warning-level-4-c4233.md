---
description: "Learn more about: Compiler Warning (level 4) C4233"
title: "Compiler Warning (level 4) C4233"
ms.date: "10/25/2017"
f1_keywords: ["C4233"]
helpviewer_keywords: ["C4233"]
ms.assetid: 9aa51fc6-8ef3-43b5-bafb-c9333cf60de3
---
# Compiler Warning (level 4) C4233

> nonstandard extension used : '*keyword*' keyword only supported in C++, not C

The compiler compiled your source code as C rather than C++, and you used a keyword that is only valid in C++. The compiler compiles your source file as C if the extension of the source file is .c or you use [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md).

This warning is automatically promoted to an error. If you wish to modify this behavior, use [#pragma warning](../../preprocessor/warning.md). For example, to make C4233 into a level 4 warning issue, add this line to your source code file:

```cpp
#pragma warning(4:4233)
```
