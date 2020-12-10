---
description: "Learn more about: How to: Hold Reference to Value Type in Native Type"
title: "How to: Hold Reference to Value Type in Native Type"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["value type reference in native type", "reference to value type in native type"]
ms.assetid: 1eabf8be-7d4f-4339-9027-48d5c4244483
---
# How to: Hold Reference to Value Type in Native Type

Use `gcroot` on the boxed type to hold a reference to a value type in a native type.

## Example

```cpp
// reference_to_value_in_native.cpp
// compile with: /clr
#using <mscorlib.dll>
#include <vcclr.h>

using namespace System;

public value struct V {
   String ^str;
};

class Native {
public:
   gcroot< V^ > v_handle;
};

int main() {
   Native native;
   V v;
   native.v_handle = v;
   native.v_handle->str = "Hello";
   Console::WriteLine("String in V: {0}", native.v_handle->str);
}
```

```Output
String in V: Hello
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
