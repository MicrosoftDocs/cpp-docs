---
title: "Compiler Error C2154"
description: "Learn more about: Compiler Error C2154"
ms.date: 09/21/2025
f1_keywords: ["C2154"]
helpviewer_keywords: ["C2154"]
---
# Compiler Error C2154

> '*type*': only enumeration type is allowed as an argument to compiler intrinsic type trait '__underlying_type'

## Remarks

You can only get the underlying type of an [enumeration](../../cpp/enumerations-cpp.md) type.

## Example

The following example generates C2154:

```cpp
// C2154.cpp
// compile with: /c

struct S {};
enum E {};
enum class EC {};

__underlying_type(S) s;     // C2154
__underlying_type(int) i;   // C2154
__underlying_type(E) e;     // OK
__underlying_type(EC) ec;   // OK
```

## See also

[`underlying_type` class](../../standard-library/underlying-type-class.md)
