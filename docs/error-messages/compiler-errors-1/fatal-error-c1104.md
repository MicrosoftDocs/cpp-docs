---
title: "Fatal Error C1104"
description: "Learn more about: Fatal Error C1104"
ms.date: 11/04/2016
f1_keywords: ["C1104"]
helpviewer_keywords: ["C1104"]
---
# Fatal Error C1104

> fatal error importing libid: 'message'

## Remarks

The compiler detected a problem importing a type library.  For example, you cannot specify a type library with libid and also specify `no_registry`.

For more information, see [#import Directive](../../preprocessor/hash-import-directive-cpp.md).

## Example

The following example will generate C1104:

```cpp
// C1104.cpp
#import "libid:11111111.1111.1111.1111.111111111111" version("4.0") lcid("9") no_registry auto_search   // C1104
```
