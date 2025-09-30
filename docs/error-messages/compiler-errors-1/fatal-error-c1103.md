---
title: "Fatal Error C1103"
description: "Learn more about: Fatal Error C1103"
ms.date: 11/04/2016
f1_keywords: ["C1103"]
helpviewer_keywords: ["C1103"]
---
# Fatal Error C1103

> fatal error importing progid: 'message'

## Remarks

The compiler detected a problem importing a type library.  For example, you cannot specify a type library with progid and also specify `no_registry`.

For more information, see [#import Directive](../../preprocessor/hash-import-directive-cpp.md).

## Example

The following example will generate C1103:

```cpp
// C1103.cpp
#import "progid:a.b.id.1.5" no_registry auto_search   // C1103
```
