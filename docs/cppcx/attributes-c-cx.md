---
description: "Learn more about: Attributes (C++/CX)"
title: "Attributes (C++/CX)"
ms.date: "12/30/2016"
ms.assetid: 4438e03c-4de3-433d-abcc-31aa863bc0e0
---
# Attributes (C++/CX)

An attribute is a special kind of ref class that can be prepended in square brackets to Windows Runtime types and methods to specify certain behaviors in metadata creation. Several predefined attributes—for example,  [Windows::Foundation::Metadata::WebHostHidden](/uwp/api/windows.foundation.metadata.webhosthiddenattribute)—are commonly used in C++/CX code. This example shows how the attribute is applied to a class:

[!code-cpp[cx_attributes#01](../cppcx/codesnippet/CPP/cx_attributes/class1.h#01)]

## Custom attributes

You can also define custom attributes. Custom attributes must conform to these Windows Runtime rules:

- Custom attributes can contain only public fields.

- Custom attribute fields can be initialized when the attribute is applied to a class.

- A field may be one of these types:

  - int32 (int)

  - uint32 (unsigned int)

  - bool

  - Platform::String^

  - Windows::Foundation::HResult

  - Platform::Type^

  - public enum class (includes user-defined enums)

The next example shows how to define a custom attribute and then initialize it when you use it.

[!code-cpp[cx_attributes#02](../cppcx/codesnippet/CPP/cx_attributes/class1.h#02)]

## See also

[Type System (C++/CX)](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
