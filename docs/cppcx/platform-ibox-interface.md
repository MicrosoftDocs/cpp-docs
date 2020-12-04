---
description: "Learn more about: Platform::IBox Interface"
title: "Platform::IBox Interface"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Namespace not found::Platform", "VCCORLIB/Namespace not found::Platform::Value"]
ms.assetid: 774df45d-f8a7-45a3-ae24-eecc3c681040
---
# Platform::IBox Interface

The [Platform::IBox](../cppcx/platform-ibox-interface.md) interface is the C++ name for the `Windows::Foundation::IReference` interface.

## Syntax

```cpp
template <typename T>
interface class IBox
```

#### Parameters

*T*<br/>
The type of the boxed value.

### Remarks

The `IBox<T>` interface is primarily used internally to represent nullable value types, as described in [Value classes and structs (C++/CX)](../cppcx/value-classes-and-structs-c-cx.md). The interface is also used to box value types that are passed to C++ methods that take parameters of type `Object^`. You can explicitly declare an input parameter as `IBox<SomeValueType>`. For an example, see [Boxing](../cppcx/boxing-c-cx.md).

### Requirements

### Members

The `Platform::IBox` interface inherits from the [Platform::IValueType](../cppcx/platform-ivaluetype-interface.md) interface. `IBox` has these members:

**Properties**

|Method|Description|
|------------|-----------------|
|[Value](#value)|Returns the unboxed value that was previously stored in this `IBox` instance.|

## <a name="value"></a> IBox::Value Property

Returns the value that was originally stored in this object.

### Syntax

```cpp
property T Value {T get();}
```

### Parameters

*T*<br/>
The type of the boxed value.

### Property Value/Return Value

Returns the value that was originally stored in this object.

### Remarks

For an example, see [Boxing](../cppcx/boxing-c-cx.md).

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
