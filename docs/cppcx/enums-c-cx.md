---
description: "Learn more about: Enums (C++/CX)"
title: "Enums (C++/CX)"
ms.date: "12/30/2016"
ms.assetid: 99fbbe28-c1cd-43af-9ead-60f90eba6e68
---
# Enums (C++/CX)

C++/CX supports the `public enum class` keyword, which is analogous to a standard C++ `scoped  enum`. When you use an enumerator that's declared by using the `public enum class` keyword, you must use the enumeration identifier to scope each enumerator value.

### Remarks

A `public enum class` that doesn't have an access specifier, such as **`public`**, is treated as a standard C++ [scoped enum](../cpp/enumerations-cpp.md).

A `public enum class` or `public enum struct` declaration can have an underlying type of any integral type although the Windows Runtime itself requires that the type be int32, or uint32 for a flags enum. The following syntax describes the parts of an `public enum class` or `public enum struct`.

This example shows how to define a public enum class:

[!code-cpp[cx_enums#01](../cppcx/codesnippet/CPP/cpp/class1.h#01)]

This next example shows how to consume it:

[!code-cpp[cx_enums#02](../cppcx/codesnippet/CPP/cpp/class1.h#02)]

### Examples

The next examples show how to declare an enum,

[!code-cpp[cx_enums#03](../cppcx/codesnippet/CPP/cpp/class1.h#03)]

The next example shows how to cast to numeric equivalents, and perform comparisons. Notice that the use of enumerator `One` is scoped by the `Enum1` enumeration identifier, and enumerator `First` is scoped by `Enum2`.

[!code-cpp[cx_enums#04](../cppcx/codesnippet/CPP/cpp/class1.h#04)]

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
