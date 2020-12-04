---
description: "Learn more about: Compiler Error C3540"
title: "Compiler Error C3540"
ms.date: "11/04/2016"
f1_keywords: ["C3540"]
helpviewer_keywords: ["C3540"]
ms.assetid: 3c0c959c-e3b7-40eb-b922-ccac44bd9d85
---
# Compiler Error C3540

'type': sizeof cannot be applied to a type that contains 'auto'

The [sizeof](../../cpp/sizeof-operator.md) operator cannot be applied to the indicated type because it contains the **`auto`** specifier.

## Example

The following example yields C3540.

```cpp
// C3540.cpp
// Compile with /Zc:auto
int main() {
    auto x = 123;
    sizeof(x);    // OK
    sizeof(auto); // C3540
    return 0;
}
```

## See also

[auto Keyword](../../cpp/auto-cpp.md)<br/>
[/Zc:auto (Deduce Variable Type)](../../build/reference/zc-auto-deduce-variable-type.md)<br/>
[sizeof Operator](../../cpp/sizeof-operator.md)
