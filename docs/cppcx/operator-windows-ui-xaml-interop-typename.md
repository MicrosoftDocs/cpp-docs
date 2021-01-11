---
description: "Learn more about: operator Windows::UI::Xaml::Interop::TypeName"
title: "operator Windows::UI::Xaml::Interop::TypeName"
ms.date: "12/30/2016"
ms.assetid: a65a105e-7e3a-452f-932f-2cdaf00fbba5
---
# operator Windows::UI::Xaml::Interop::TypeName

Enables conversion from `Platform::Type` to [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename).

## Syntax

```cpp
Operator TypeName(Platform::Type^ type);
```

### Return Value

Returns a [Windows::UI::Xaml::Interop::TypeName](/uwp/api/windows.ui.xaml.interop.typename) when given a `Platform::Type^`.

### Remarks

`TypeName` is the language-neutral Windows Runtime struct for representing type information. [Platform::Type](../cppcx/platform-type-class.md) is specific to C++ and can’t be passed across the application binary interface (ABI). Here's one use of `TypeName`, in the [Navigate](/uwp/api/windows.ui.xaml.controls.frame.navigate) function:

```cpp
rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);
```

### Example

The next example shows how to convert between `TypeName` and `Type`.

```cpp
// Convert from Type to TypeName
Windows::UI::Xaml::Interop::TypeName tn = TypeName(MainPage::typeid);

// Convert back from TypeName to Type
Type^ tx2 = (Type^)(tn);
```

## .NET Framework Equivalent

.NET Framework programs project `TypeName` as [System.Type](/dotnet/api/system.type).

### Requirements

## See also

[operator Windows::UI::Xaml::Interop::TypeName](../cppcx/operator-windows-ui-xaml-interop-typename.md)<br/>
[Platform::Type Class](../cppcx/platform-type-class.md)
