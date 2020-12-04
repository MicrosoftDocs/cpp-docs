---
description: "Learn more about: Compiler Error C3450"
title: "Compiler Error C3450"
ms.date: "11/04/2016"
f1_keywords: ["C3450"]
helpviewer_keywords: ["C3450"]
ms.assetid: 78892cf7-0b82-4589-90d0-e06666247003
---
# Compiler Error C3450

'type': not an attribute; cannot specify [System::AttributeUsageAttribute] or [Windows::Foundation::Metadata::AttributeUsageAttribute]

A user-defined managed attribute must inherit from <xref:System.ComponentModel.AttributeCollection.%23ctor%2A>. A Windows Runtime attribute must be defined in the `Windows::Foundation::Metadata` namespace.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following sample generates C3450 and shows how to fix it.

```cpp
// C3450.cpp
// compile with: /clr
// C3450 expected
using namespace System;
using namespace System::Security;
using namespace System::Security::Permissions;

public ref class MyClass {};

class MyClass2 {};

[attribute(AttributeTargets::All)]
ref struct AtClass {
   AtClass(Type ^) {}
};

[attribute(AttributeTargets::All)]
ref struct AtClass2 {
   AtClass2() {}
};

// Apply the AtClass and AtClass2 attributes to class B
[AtClass(MyClass::typeid), AtClass2]
[AttributeUsage(AttributeTargets::All)]
// Delete the following line to resolve.
ref class B {};
// Uncomment the following line to resolve.
// ref class B : Attribute {};
```
