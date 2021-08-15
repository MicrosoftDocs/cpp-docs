---
description: "Learn more about: `__uuidof` Operator"
title: "__uuidof Operator"
ms.date: "10/10/2018"
f1_keywords: ["__LIBID_cpp", "__uuidof_cpp", "__uuidof", "_uuidof"]
helpviewer_keywords: ["__uuidof keyword [C++]", "__LIBID_ keyword [C++]"]
ms.assetid: badfe709-809b-4b66-ad48-ee35039d25c6
---
# `__uuidof` Operator

**Microsoft Specific**

Retrieves the GUID attached to the expression.

## Syntax

> **`__uuidof (`** *expression* **`)`**

## Remarks

The *expression* can be a type name, pointer, reference, or array of that type, a template specialized on these types, or a variable of these types. The argument is valid as long as the compiler can use it to find the attached GUID.

A special case of this intrinsic is when either **0** or NULL is supplied as the argument. In this case, **`__uuidof`** will return a GUID made up of zeros.

Use this keyword to extract the GUID attached to:

- An object by the [`uuid`](../cpp/uuid-cpp.md) extended attribute.

- A library block created with the [`module`](../windows/attributes/module-cpp.md) attribute.

> [!NOTE]
> In a debug build, **`__uuidof`** always initializes an object dynamically (at runtime). In a release build, **`__uuidof`** can statically (at compile time) initialize an object.

For compatibility with previous versions, **`_uuidof`** is a synonym for **`__uuidof`** unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

## Example

The following code (compiled with ole32.lib) will display the uuid of a library block created with the module attribute:

```cpp
// expre_uuidof.cpp
// compile with: ole32.lib
#include "stdio.h"
#include "windows.h"

[emitidl];
[module(name="MyLib")];
[export]
struct stuff {
   int i;
};

int main() {
   LPOLESTR lpolestr;
   StringFromCLSID(__uuidof(MyLib), &lpolestr);
   wprintf_s(L"%s", lpolestr);
   CoTaskMemFree(lpolestr);
}
```

## Comments

In cases where the library name is no longer in scope, you can use `__LIBID_` instead of **`__uuidof`**. For example:

```cpp
StringFromCLSID(__LIBID_, &lpolestr);
```

**END Microsoft Specific**

## See also

[Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
