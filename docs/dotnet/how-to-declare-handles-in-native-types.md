---
description: "Learn more about: How to: Declare Handles in Native Types"
title: "How to: Declare Handles in Native Types"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
f1_keywords: ["gcroot"]
helpviewer_keywords: ["handles, declaring", "gcroot keyword [C++]", "types [C++], declaring handles in"]
ms.assetid: b8c0eead-17e5-4003-b21f-b673f997d79f
---
# How to: Declare Handles in Native Types

You cannot declare a handle type in a native type. vcclr.h provides the type-safe wrapper template `gcroot` to refer to a CLR object from the C++ heap. This template lets you embed a virtual handle in a native type and treat it as if it were the underlying type. In most cases, you can use the `gcroot` object as the embedded type without any casting. However, with [for each, in](../dotnet/for-each-in.md), you have to use **`static_cast`** to retrieve the underlying managed reference.

The `gcroot` template is implemented using the facilities of the value class System::Runtime::InteropServices::GCHandle, which provides "handles" into the garbage-collected heap. Note that the handles themselves are not garbage collected and are freed when no longer in use by the destructor in the `gcroot` class (this destructor cannot be called manually). If you instantiate a `gcroot` object on the native heap, you must call delete on that resource.

The runtime will maintain an association between the handle and the CLR object, which it references. When the CLR object moves with the garbage-collected heap, the handle will return the new address of the object. A variable does not have to be pinned before it is assigned to a `gcroot` template.

## Examples

This sample shows how to create a `gcroot` object on the native stack.

```cpp
// mcpp_gcroot.cpp
// compile with: /clr
#include <vcclr.h>
using namespace System;

class CppClass {
public:
   gcroot<String^> str;   // can use str as if it were String^
   CppClass() {}
};

int main() {
   CppClass c;
   c.str = gcnew String("hello");
   Console::WriteLine( c.str );   // no cast required
}
```

```Output
hello
```

This sample shows how to create a `gcroot` object on the native heap.

```cpp
// mcpp_gcroot_2.cpp
// compile with: /clr
// compile with: /clr
#include <vcclr.h>
using namespace System;

struct CppClass {
   gcroot<String ^> * str;
   CppClass() : str(new gcroot<String ^>) {}

   ~CppClass() { delete str; }

};

int main() {
   CppClass c;
   *c.str = gcnew String("hello");
   Console::WriteLine( *c.str );
}
```

```Output
hello
```

This sample shows how to use `gcroot` to hold references to value types (not reference types) in a native type by using `gcroot` on the boxed type.

```cpp
// mcpp_gcroot_3.cpp
// compile with: /clr
#include < vcclr.h >
using namespace System;

public value struct V {
   String^ str;
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
