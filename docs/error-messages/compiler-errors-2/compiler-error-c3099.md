---
description: "Learn more about: Compiler Error C3099"
title: "Compiler Error C3099"
ms.date: "11/04/2016"
f1_keywords: ["C3099"]
helpviewer_keywords: ["C3099"]
ms.assetid: b3dded0f-76c9-42c1-991b-532eb8619661
---
# Compiler Error C3099

'keyword': use [System::AttributeUsageAttribute] for managed attributes; use [Windows::Foundation::Metadata::AttributeUsageAttribute] for WinRT attributes

Use <xref:System.AttributeUsageAttribute> to declare **/clr** attributes. Use `Windows::Foundation::Metadata::AttributeUsageAttribute` to declare Windows Runtime attributes.

For more information about /CLR attributes, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md). For supported attributes in Windows Runtime, see [Windows.Foundation.Metadata namespace](/uwp/api/windows.foundation.metadata)

## Example

The following sample generates C3099 and shows how to fix it.

```cpp
// C3099.cpp
// compile with: /clr /c
using namespace System;
[usage(10)]   // C3099
// try the following line instead
// [AttributeUsageAttribute(AttributeTargets::All)]
ref class A : Attribute {};
```
