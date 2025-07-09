---
title: "Compiler Error C2006"
description: "Learn more about: Compiler Error C2006"
ms.date: "01/28/2025"
f1_keywords: ["C2006"]
helpviewer_keywords: ["C2006"]
---
# Compiler Error C2006

> 'directive': expected "FILENAME" or \<FILENAME>

## Remarks

Directives such as [#include](../../preprocessor/hash-include-directive-c-cpp.md) or [#import](../../preprocessor/hash-import-directive-cpp.md) require a filename. To resolve the error, ensure the filename is valid and enclosed in either double quotes or angle brackets.

## Example

The following sample generates C2006:

```cpp
// C2006.cpp
// compile with: /c
#include iostream     // C2006
#include 'iostream'   // C2006
#include <iostream>   // OK
```
