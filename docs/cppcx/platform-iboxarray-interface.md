---
title: "Platform::IBoxArray Interface | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Namespace not found::Platform", "VCCORLIB/Namespace not found::Platform::Value"]
dev_langs: ["C++"]
helpviewer_keywords: ["Platform::IBoxArray"]
ms.assetid: 6cd82c9e-4230-4147-9edb-7a652875dbf1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Platform::IBoxArray Interface

`IBoxArray` is the wrapper for arrays of value types that are passed across the application binary interface (ABI) or stored in collections of `Platform::Object^` elements such as those in XAML controls.

## Syntax

```cpp
template <typename T>
interface class IBoxArray
```

#### Parameters

*T*<br/>
The type of the boxed value in each array element.

### Remarks

`IBoxArray` is the C++/CX name for `Windows::Foundation::IReferenceArray`.

### Members

The `IBoxArray` interface inherits from the `IValueType` interface. `IBoxArray` also has these members:

|Method|Description|
|------------|-----------------|
|[Value](#value)|Returns the unboxed array that was previously stored in this `IBoxArray` instance.|

## <a name="value"></a> IBoxArray::Value Property

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

## See Also

[Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)