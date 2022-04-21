---
description: "Learn more about: Deprecating types and members (C++/CX)"
title: "Deprecating types and members (C++/CX)"
ms.date: 01/07/2022
no-loc: [ "class", "delegate", "enum", "field", "interface", "method", "property", "struct" ]
---
# Deprecating types and members (C++/CX)

C++/CX supports deprecation of Windows Runtime types and members for producers and consumers by using the [`Deprecated`](/uwp/api/windows.foundation.metadata.deprecatedattribute) attribute. If you consume an API that has this attribute, you get a compile-time warning message. It indicates that the API is deprecated and also recommends an alternative API to use. In your own public types and methods, you can apply this attribute and supply your own custom message.

> [!CAUTION]
> The [`Deprecated`](/uwp/api/windows.foundation.metadata.deprecatedattribute) attribute is for use only with Windows Runtime types. For standard C++ classes and members, use [`[[deprecated]]`](../cpp/deprecated-cpp.md) (C++14 and later) or [`__declspec(deprecated)`](../cpp/deprecated-cpp.md).

## Example

The following example shows how to deprecate your own public APIs—for example, in a Windows Runtime component. The second parameter, of type [`Windows:Foundation::Metadata::DeprecationType`](/uwp/api/windows.foundation.metadata.deprecationtype) specifies whether the API is being deprecated or removed. Currently only the `DeprecationType::Deprecated` value is supported. The third parameter in the attribute specifies the [`Windows::Foundation::Metadata::Platform`](/uwp/api/windows.foundation.metadata.platformattribute) to which the attribute applies.

```cpp
namespace wfm = Windows::Foundation::Metadata;

public ref class Bicycle sealed
{

public:
    property double Speed;

    [wfm::Deprecated("Use the Speed property to compute the angular speed of the wheel", wfm::DeprecationType::Deprecate, 0x0)]
    double ComputeAngularVelocity();
};
```

## Supported targets

The following table lists the constructs to which the `Deprecated` attribute may be applied:

:::row:::
   :::column span="":::
      class\
      enum\
      event\
      method\
      property\
      struct field
   :::column-end:::
   :::column span="":::
      delegate\
      enum field\
      interface\
      parameterized constructor\
      struct\
      XAML control
   :::column-end:::
:::row-end:::

## See also

[Type system (C++/CX)](../cppcx/type-system-c-cx.md)\
[C++/CX language reference](../cppcx/visual-c-language-reference-c-cx.md)\
[Namespaces reference](../cppcx/namespaces-reference-c-cx.md)
