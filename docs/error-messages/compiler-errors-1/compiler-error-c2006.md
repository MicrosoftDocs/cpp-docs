---
description: "Learn more about: Compiler Error C2006"
title: "Compiler Error C2006"
ms.date: "11/04/2016"
f1_keywords: ["C2006"]
helpviewer_keywords: ["C2006"]
ms.assetid: caaed6f7-ceb9-4742-8820-d66657c0b04d
---
# Compiler Error C2006

'directive' expected a filename, found 'token'

Directives such as [#include](../../preprocessor/hash-include-directive-c-cpp.md) or [#import](../../preprocessor/hash-import-directive-cpp.md) require a filename. To resolve the error, make sure *token* is a valid filename. Also, put the filename in double quotes or angle brackets.

The following sample generates C2006:

```cpp
// C2006.cpp
#include stdio.h   // C2006
```

Possible resolution:

```cpp
// C2006b.cpp
// compile with: /c
#include <stdio.h>
```
