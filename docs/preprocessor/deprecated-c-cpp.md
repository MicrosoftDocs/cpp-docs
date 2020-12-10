---
description: "Learn more about: deprecated pragma"
title: "deprecated pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.deprecated"]
helpviewer_keywords: ["deprecated pragma", "pragmas, deprecated"]
ms.assetid: 9c046f12-7875-499a-8d5d-12f8642fed2d
---
# deprecated pragma

The **`deprecated`** pragma lets you indicate that a function, type, or any other identifier may no longer be supported in a future release or should no longer be used.

> [!NOTE]
> For information about the C++14 `[[deprecated]]` attribute, and guidance on when to use that attribute instead of the Microsoft `__declspec(deprecated)` modifier or the **`deprecated`** pragma, see [Attributes in C++](../cpp/attributes.md).

## Syntax

> **#pragma deprecated(** *identifier1* [ **,** *identifier2* ... ] **)**

## Remarks

When the compiler encounters an identifier specified by a **`deprecated`** pragma, it issues compiler warning [C4995](../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md).

You can deprecate macro names. Place the macro name in quotes or else macro expansion will occur.

Because the **`deprecated`** pragma works on all matching identifiers, and does not take signatures into account, it is not the best option for deprecating specific versions of overloaded functions. Any matching function name that is brought into scope triggers the warning.

We recommend you use the C++14 `[[deprecated]]` attribute, when possible, instead of the **`deprecated`** pragma. The Microsoft-specific [__declspec(deprecated)](../cpp/deprecated-cpp.md) declaration modifier is also a better choice in many cases than the **`deprecated`** pragma. The `[[deprecated]]` attribute and `__declspec(deprecated)` modifier allow you to specify deprecated status for particular forms of overloaded functions. The diagnostic warning only appears on references to the specific overloaded function the attribute or modifier applies to.

## Example

```cpp
// pragma_directive_deprecated.cpp
// compile with: /W3
#include <stdio.h>
void func1(void) {
}

void func2(void) {
}

int main() {
   func1();
   func2();
   #pragma deprecated(func1, func2)
   func1();   // C4995
   func2();   // C4995
}
```

The following sample shows how to deprecate a class:

```cpp
// pragma_directive_deprecated2.cpp
// compile with: /W3
#pragma deprecated(X)
class X {  // C4995
public:
   void f(){}
};

int main() {
   X x;   // C4995
}
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
