---
description: "Learn more about: Compiler Error C3409"
title: "Compiler Error C3409"
ms.date: "11/06/2018"
f1_keywords: ["C3409"]
helpviewer_keywords: ["C3409"]
ms.assetid: e372d9fa-230c-4b28-b6d3-6ad81ccf9dbb
---
# Compiler Error C3409

> empty attribute block is not allowed

## Remarks

The square brackets were interpreted by the compiler as an [attribute](../../windows/attributes/attributes-alphabetical-reference.md) block, but no attributes were found.

The compiler may generate this error when you use square brackets as part of the definition of a lambda expression. This error occurs when the compiler cannot determine whether the square brackets are part of the definition of a lambda expression or of an attribute block. For more information about lambda expressions, see [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md).

### To correct this error

1. If the square brackets are part of an attribute block:

   1. Provide one or more attributes in the attribute block.

   1. Remove the attribute block.

1. If the square brackets are part of a lambda expression, make sure that the lambda expression follows valid syntax rules.

   For more information about lambda expression syntax, see [Lambda Expression Syntax](../../cpp/lambda-expression-syntax.md).

## Examples

The following example generates C3409.

```cpp
// C3409.cpp
// compile with: /c
#include <windows.h>
[]   // C3409
class a {};

// OK
[object, uuid("00000000-0000-0000-0000-000000000000")]
__interface x {};

[coclass, uuid("00000000-0000-0000-0000-000000000001")]
class b : public x {};
```

The following example generates C3409 because a lambda expression uses the **`mutable`** specification, but does not provide a parameter list. The compiler cannot determine whether the square brackets are part of the definition of a lambda expression or of an attribute block.

```cpp
// C3409b.cpp

int main()
{
   [] mutable {}();
}
```

## See also

[attribute](../../windows/attributes/attributes-alphabetical-reference.md)<br/>
[Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)<br/>
[Lambda Expression Syntax](../../cpp/lambda-expression-syntax.md)
