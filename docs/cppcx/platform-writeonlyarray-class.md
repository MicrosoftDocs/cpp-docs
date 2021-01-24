---
description: "Learn more about: Platform::WriteOnlyArray Class"
title: "Platform::WriteOnlyArray Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::WriteOnlyArray::begin", "VCCORLIB/Platform::WriteOnlyArray::Data", "VCCORLIB/Platform::WriteOnlyArray::end", "VCCORLIB/Platform::WriteOnlyArray::FastPass", "VCCORLIB/Platform::WriteOnlyArray::Length", "VCCORLIB/Platform::WriteOnlyArray::set"]
helpviewer_keywords: ["Platform::WriteOnlyArray Class"]
ms.assetid: 92d7dd56-ec58-4b8c-88ba-9c903668b687
---
# Platform::WriteOnlyArray Class

Represents a one-dimensional array that's used as an input parameter when the caller passes an array for the method to fill.

This ref class is declared as private in vccorlib.h; therefore, it's not emitted in metadata and is only consumable from C++. This class is intended only for use as an input parameter that receives an array that the caller has allocated. It is not constructible from user code. It enables a C++ method to write directly into that array—a pattern that's known as the *FillArray* pattern. For more information, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).

## Syntax

```cpp
private ref class WriteOnlyArray<T, 1>
```

### Members

### Public Methods

These methods have internal accessibility—that is, they are only accessible within the C++ app or component.

|Name|Description|
|----------|-----------------|
|[WriteOnlyArray::begin](#begin)|An iterator that points to the first element of the array.|
|[WriteOnlyArray::Data](#data)|A pointer to the data buffer.|
|[WriteOnlyArray::end](#end)|An iterator that points to one past the last element in the array.|
|[WriteOnlyArray::FastPass](#fastpass)|Indicates whether the array can use the FastPass mechanism, which is an optimization transparently performed by the system. Don’t use this in your code|
|[WriteOnlyArray::Length](#length)|Returns the number of elements in the array.|
|[WriteOnlyArray::set](#set)|Sets the specified element to the specified value.|

## Inheritance Hierarchy

`WriteOnlyArray`

### Requirements

Compiler option: **/ZW**

**Metadata:** Platform.winmd

**Namespace:** Platform

## <a name="begin"></a> WriteOnlyArray::begin Method

Returns a pointer to the first element in the array.

### Syntax

```cpp
T* begin() const;
```

### Return Value

A pointer to the first element in the array.

### Remarks

This iterator can be used with STL algorithms such as `std::sort` to operate on elements in the array.

## <a name="data"></a> WriteOnlyArray::Data Property

Pointer to the data buffer.

### Syntax

```cpp
property T* Data{
   T* get() const;
}
```

### Return Value

A pointer to the raw array bytes.

## <a name="end"></a> WriteOnlyArray::end Method

Returns a pointer to one past the last element in the array.

### Syntax

```cpp
T* end() const;
```

### Return Value

A pointer iterator to one past the last element in the array.

### Remarks

This iterator can be used with STL algorithms to perform operations such as `std::sort` on the array elements.

## <a name="fastpass"></a> WriteOnlyArray::FastPass Property

Indicates whether the internal FastPass optimization can be performed. Not intended for use by user code.

### Syntax

```cpp
property bool FastPass{
   bool get() const;
}
```

### Return Value

Boolean value that indicates whether the array is FastPass.

## <a name="get"></a> WriteOnlyArray::get Method

Returns the element at the specified index.

### Syntax

```cpp
T& get(unsigned int indexArg) const;
```

### Parameters

*indexArg*<br/>
The index to use.

### Return Value

## <a name="length"></a> WriteOnlyArray::Length Property

Returns the number of elements in the caller-allocated array.

### Syntax

```cpp
property unsigned int Length{
   unsigned int get() const;
}
```

### Return Value

The number of elements in the array.

## <a name="set"></a> WriteOnlyArray::set Function

Sets the specified value at the specified index in the array.

### Syntax

```cpp
T& set(
   unsigned int indexArg,
   T valueArg);
```

### Parameters

*indexArg*<br/>
The index of the element to set.

*valueArg*<br/>
The value to set at `indexArg`.

### Return Value

A reference to the element that was just set.

### Remarks

For more information about how to interpret the HRESULT value, see [Structure of COM Error Codes](/windows/win32/com/structure-of-com-error-codes).

## See also

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
