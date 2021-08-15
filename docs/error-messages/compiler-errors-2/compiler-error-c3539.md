---
description: "Learn more about: Compiler Error C3539"
title: "Compiler Error C3539"
ms.date: "11/04/2016"
f1_keywords: ["C3539"]
helpviewer_keywords: ["C3539"]
ms.assetid: 34a33a0f-d1b6-498f-b312-ffad2d4799b3
---
# Compiler Error C3539

'type': a template-argument cannot be a type that contains 'auto'

The indicated template argument type cannot contain a usage of the **`auto`** keyword.

### To correct this error

1. Do not specify the template argument with the **`auto`** keyword.

## Example

The following example yields C3539.

```cpp
// C3539.cpp
// Compile with /Zc:auto
template<class T> class C{};
int main()
{
   C<auto> c;   // C3539
   return 0;
}
```

## See also

[auto Keyword](../../cpp/auto-cpp.md)
