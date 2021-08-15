---
description: "Learn more about: Platform::Array Class"
title: "Platform::Array Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Array", "VCCORLIB/Platform::Array::Value"]
helpviewer_keywords: ["Platform::Array Class"]
ms.assetid: 7815ab40-88c5-42b0-83b8-081cef0cda31
---
# Platform::Array Class

Represents a one-dimensional, modifiable array that can be received and passed across the application binary interface (ABI).

## Syntax

```cpp
template <typename T>
private ref class Array<TArg, 1> :
    public WriteOnlyArray<TArg, 1>,
    public IBoxArray<TArg>
```

### Members

Platform::Array inherits all its methods from [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md) and implements the `Value` property of the [Platform::IBoxArray Interface](../cppcx/platform-iboxarray-interface.md).

### Public Constructors

|Name|Description|
|----------|-----------------|
|[Array Constructors](#ctor)|Initializes a one-dimensional, modifiable array of types specified by the class template parameter, *T*.|

### Methods

See [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md).

### Properties

| Name | Description |
|--|--|
| [Array::Value](#value) | Retrieves a handle to the current array. |

### Remarks

The Array class is sealed and cannot be inherited.

The Windows Runtime type system does not support the concept of jagged arrays and therefore you cannot pass an `IVector<Platform::Array<T>>` as a return value or method parameter. To pass a jagged array or a sequence of sequences across the ABI, use `IVector<IVector<T>^>`.

For more information about when and how to use Platform::Array, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

This class is defined in the vccorlib.h header, which is automatically included by the compiler. It is visible in IntelliSense but not in Object Browser because it is not a public type defined in platform.winmd.

### Requirements

Compiler option: **/ZW**

## <a name="ctor"></a> Array Constructors

Initializes a one-dimensional, modifiable array of types specified by the class template parameter, *T*.

### Syntax

```cpp
Array(unsigned int size);
Array(T* data, unsigned int size);
```

#### Parameters

*T*<br/>
Class template parameter.

*size*<br/>
The number of elements in the array.

*data*<br/>
A pointer to an array of data of type `T` that is used to initialize this Array object.

### Remarks

For more information about how to create instances of Platform::Array, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## <a name="get"></a> Array::get Method

Retrieves a reference to the array element at the specified index location.

### Syntax

```cpp
T& get(unsigned int index)  const;
```

#### Parameters

*index*<br/>
A zero-based index that identifies an element in the array. The minimum index is 0 and the maximum index is the value specified by the `size` parameter in the [Array constructor](#ctor).

### Return Value

The array element specified by the `index` parameter.

## <a name="value"></a> Array::Value Property

Retrieves a handle to the current array.

### Syntax

```cpp
property Array^ Value;
```

### Return Value

A handle to the current array.

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)<br/>
[Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)
