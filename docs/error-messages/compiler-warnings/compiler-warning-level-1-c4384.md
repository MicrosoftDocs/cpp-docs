---
title: "Compiler Warning (level 1) C4384"
description: "Learn more about: Compiler Warning (level 1) C4384"
ms.date: 11/04/2016
f1_keywords: ["C4384"]
helpviewer_keywords: ["C4384"]
---
# Compiler Warning (level 1) C4384

> `#pragma` '*pragma_name*' should only be used at global scope

## Remarks

A `pragma` directive that must be applied at a global scope, was found in a different scope.

The warning applies to the following `pragma` directives:
* [`detect_mismatch`](../../preprocessor/detect-mismatch.md)
* `extern_absolute`
* [`make_public`](../../preprocessor/make-public.md)

## Example

The following example generates C4384.

```cpp
// C4384.cpp
// compile with: /c /W1
namespace n {
   #pragma make_public(N::C)   // C4384
   namespace N {
      class C {};
   }
}
```
