---
description: "Learn more about: Compiler Error C3541"
title: "Compiler Error C3541"
ms.date: "11/04/2016"
f1_keywords: ["C3541"]
helpviewer_keywords: ["C3541"]
ms.assetid: 252cfd4c-5fd2-415e-a17d-6b0c254350db
---
# Compiler Error C3541

'type': typeid cannot be applied to a type that contains 'auto'

The [typeid](../../extensions/typeid-cpp-component-extensions.md) operator cannot be applied to the indicated type because it contains the **`auto`** specifier.

## Example

The following example yields C3541.

```cpp
// C3541.cpp
// Compile with /Zc:auto
#include <typeinfo>
int main() {
    auto x = 123;
    typeid(x);    // OK
    typeid(auto); // C3541
    return 0;
}
```

## See also

[auto Keyword](../../cpp/auto-cpp.md)<br/>
[/Zc:auto (Deduce Variable Type)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[typeid](../../extensions/typeid-cpp-component-extensions.md)
