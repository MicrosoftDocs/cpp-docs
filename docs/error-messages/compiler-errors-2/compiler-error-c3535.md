---
description: "Learn more about: Compiler Error C3535"
title: "Compiler Error C3535"
ms.date: "11/04/2016"
f1_keywords: ["C3535"]
helpviewer_keywords: ["C3535"]
ms.assetid: 24449c98-f681-484d-a00b-32533dca3a88
---
# Compiler Error C3535

cannot deduce type for 'type1' from 'type2'

The type of the variable declared by the **`auto`** keyword cannot be deduced from the type of the initialization expression. For example, this error occurs if the initialization expression evaluates to **`void`**, which is not a type.

### To correct this error

1. Ensure that the type of the initialization expression is not **`void`**.

1. Ensure that the declaration is not a pointer to a fundamental type. For more information, see [Fundamental Types](../../cpp/fundamental-types-cpp.md).

1. Ensure that if the declaration is a pointer to a type, the initialization expression is a pointer type.

## Examples

The following example yields C3535 because the initialization expression evaluates to **`void`**.

```cpp
// C3535a.cpp
// Compile with /Zc:auto
void f(){}
int main()
{
   auto x = f();   //C3535
   return 0;
}
```

The following example yields C3535 because the statement declares variable `x` as a pointer to a deduced type, but the type of the initializer expression is double. Consequently, the compiler cannot deduce the type of the variable.

```cpp
// C3535b.cpp
// Compile with /Zc:auto
int main()
{
   auto* x = 123.0;   // C3535
   return 0;
}
```

The following example yields C3535 because variable `p` declares a pointer to a deduced type, but the initialization expression is not a pointer type.

```cpp
// C3535c.cpp
// Compile with /Zc:auto
class A { };
A x;
auto *p = x;  // C3535
```

## See also

[auto Keyword](../../cpp/auto-cpp.md)<br/>
[Fundamental Types](../../cpp/fundamental-types-cpp.md)
