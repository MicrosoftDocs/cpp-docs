---
description: "Learn more about: Platform::StringReference Class"
title: "Platform::StringReference Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::StringReference::StringReference", "VCCORLIB/Platform::StringReference::Data", "VCCORLIB/Platform::StringReference::Length", "VCCORLIB/Platform::StringReference::GetHSTRING", "VCCORLIB/Platform::StringReference::GetString"]
ms.assetid: 2d09c7ec-0f16-458e-83ed-7225a1b9221e
---
# Platform::StringReference Class

An optimization type that you can use to pass string data from `Platform::String^` input parameters to other methods with a minimum of copy operations.

## Syntax

```cpp
class StringReference
```

### Remarks

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[StringReference::StringReference](#ctor)|Two constructors for creating instances of `StringReference`.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[StringReference::Data](#data)|Returns the string data as an array of char16 values.|
|[StringReference::Length](#length)|Returns the number of characters in the string.|
|[StringReference::GetHSTRING](#gethstring)|Returns the string data as an HSTRING.|
|[StringReference::GetString](#getstring)|Returns the string data as a `Platform::String^`.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[StringReference::operator=](#operator-assign)|Assigns a `StringReference` to a new `StringReference` instance.|
|[StringReference::operator()](#operator-call)|Converts a `StringReference` to a `Platform::String^`.|

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Header:** vccorlib.h

## <a name="data"></a> StringReference::Data Method

Returns the contents of this `StringReference` as an array of char16 values.

### Syntax

```cpp
const ::default::char16 * Data() const;
```

### Return Value

An array of char16 UNICODE text characters.

## <a name="gethstring"></a> StringReference::GetHSTRING Method

Returns the contents of the string as an `__abi_HSTRING`.

### Syntax

```cpp
__abi_HSTRING GetHSTRING() const;
```

### Return Value

An `__abi_HSTRING` that contains the string data.

### Remarks

## <a name="getstring"></a> StringReference::GetString Method

Returns the contents of the string as a `Platform::String^`.

### Syntax

```cpp
__declspec(no_release_return) __declspec(no_refcount)
    ::Platform::String^ GetString() const;
```

### Return Value

A `Platform::String^` that contains the string data.

## <a name="length"></a> StringReference::Length Method

Returns the number of characters in the string.

### Syntax

```cpp
unsigned int Length() const;
```

### Return Value

An unsigned integer that specifies the number of characters in the string.

### Remarks

## <a name="operator-assign"></a> StringReference::operator= Operator

Assigns the specified object to the current `StringReference` object.

### Syntax

```cpp
StringReference& operator=(const StringReference& __fstrArg);
StringReference& operator=(const ::default::char16* __strArg);
```

### Parameters

*__fstrArg*<br/>
The address of a `StringReference` object that is used to initialize the current `StringReference` object.

*__strArg*<br/>
Pointer to an array of char16 values that is used to initialize the current `StringReference` object.

### Return Value

A reference to an object of type `StringReference`.

### Remarks

Because `StringReference` is a standard C++ class and not a ref class, it does not appear in the **Object Browser**.

## <a name="operator-call"></a> StringReference::operator()  Operator

Converts a `StringReference` object to a `Platform::String^` object.

### Syntax

```cpp
__declspec(no_release_return) __declspec(no_refcount)
         operator ::Platform::String^() const;
```

### Return Value

A handle to an object of type `Platform::String`.

## <a name="ctor"></a> StringReference::StringReference Constructor

Initializes a new instance of the `StringReference` class.

### Syntax

```cpp
StringReference();
StringReference(const StringReference& __fstrArg);
StringReference(const ::default::char16* __strArg);
StringReference(const ::default::char16* __strArg, size_t __lenArg);
```

### Parameters

*__fstrArg*<br/>
The `StringReference` whose data is used to initialize the new instance.

*__strArg*<br/>
Pointer to an array of char16 values that is used to initialize the new instance.

*__lenArg*<br/>
The number of elements in `__strArg`.

### Remarks

The first version of this constructor is the default constructor. The second version initializes a new `StringReference` instance class from the object that's specified by the `__fstrArg` parameter. The third and fourth overloads initialize a new `StringReference` instance from an array of char16 values. char16 represents a 16-bit UNICODE text character.

## See also

[Platform::StringReference Class](../cppcx/platform-stringreference-class.md)
