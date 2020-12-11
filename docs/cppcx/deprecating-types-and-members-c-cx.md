---
description: "Learn more about: Deprecating types and members (C++/CX)"
title: "Deprecating types and members (C++/CX)"
ms.date: "12/30/2016"
ms.assetid: b20b01c1-a439-4ff0-8cf3-d7280c492813
---
# Deprecating types and members (C++/CX)

In C++/CX, deprecation of Windows Runtime types and members for producers and consumers by using the [Deprecated](/uwp/api/windows.foundation.metadata.deprecatedattribute) attribute is supported. If you consume an API to which this attribute has been applied, you get a compile-time warning message that indicates that the API is deprecated and also recommends an alternative API to use. In your own public types and methods, you can apply this attribute and supply your own custom message.

> [!CAUTION]
> The [Deprecated](/uwp/api/windows.foundation.metadata.deprecatedattribute) attribute is for use only with Windows Runtime types. For standard C++ classes and members, use [__declspec(deprecated)](../cpp/deprecated-cpp.md).

### Example

The following example shows how to deprecate your own public APIs—for example, in a Windows Runtime component. The second parameter, of type [Windows:Foundation::Metadata::DeprecationType](/uwp/api/windows.foundation.metadata.deprecationtype) specifies whether the API is being deprecated or removed. Currently only the DeprecationType::Deprecated value is supported. The third parameter in the attribute specifies the [Windows::Foundation::Metadata::Platform](/uwp/api/windows.foundation.metadata.platformattribute) to which the attribute applies.

```

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

The following table lists the constructs to which the Deprecated attribute may be applied:

:::row:::
   :::column span="":::
      class\
      delegate\
      enum\
      enum field\
      event\
      interface
   :::column-end:::
   :::column span="":::
      method\
      parameterized constructor\
      property\
      struct\
      struct field\
      XAML control
   :::column-end:::
:::row-end:::

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
