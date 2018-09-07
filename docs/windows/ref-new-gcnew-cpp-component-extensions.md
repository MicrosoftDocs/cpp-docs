---
title: "ref new, gcnew  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["gcnew", "ref new", "gcnew_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["ref new keyword (C++)", "gcnew keyword [C++]"]
ms.assetid: 388a62da-c2df-4a94-a9a2-205b53e577da
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ref new, gcnew  (C++ Component Extensions)

The **ref new** aggregate keyword allocates an instance of a type that is garbage collected when the object becomes inaccessible, and that returns a handle ([^](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)) to the allocated object.

## All Runtimes

Memory for an instance of a type that is allocated by **ref new** is deallocated automatically.

A **ref new** operation throws `OutOfMemoryException` if it is unable to allocate memory.

For more information about how memory for native C++ types is allocated and deallocated, see [the new and delete operators](../cpp/new-and-delete-operators.md).

## Windows Runtime

Use **ref new** to allocate memory for Windows Runtime objects whose lifetime you want to administer automatically. The object is automatically deallocated when its reference count goes to zero, which occurs after the last copy of the reference has gone out of scope. For more information, see [Ref classes and structs](../cppcx/ref-classes-and-structs-c-cx.md).

### Requirements

Compiler option: `/ZW`

## Common Language Runtime

Memory for a managed type (reference or value type) is allocated by **gcnew**, and deallocated by using garbage collection.

### Requirements

Compiler option: `/clr`

### Examples

The following example uses **gcnew** to allocate a Message object.

```cpp
// mcppv2_gcnew_1.cpp
// compile with: /clr
ref struct Message {
   System::String^ sender;
   System::String^ receiver;
   System::String^ data;
};

int main() {
   Message^ h_Message  = gcnew Message;
  //...
}
```

The following example uses **gcnew** to create a boxed value type for use like a reference type.

```cpp
// example2.cpp : main project file.
// compile with /clr
using namespace System;
value class Boxed {
    public:
        int i;
};
int main()  
{
    Boxed^ y = gcnew Boxed;
    y->i = 32;
    Console::WriteLine(y->i);
    return 0;
}
```

```Output
32
```

## See Also

[Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)