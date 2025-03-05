---
title: "Platform::Guid value class"
description: "Learn more about: Platform::Guid value class"
ms.date: "01/15/2019"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Guid"]
helpviewer_keywords: ["Platform::Guid Struct"]
---
# Platform::Guid value class

Represents a [GUID](/windows/win32/api/guiddef/ns-guiddef-guid) type in the Windows Runtime type system.

## Syntax

```cpp
public value struct Guid
```

### Members

`Platform::Guid` has the `Equals()`, `GetHashCode()`, and `ToString()` methods derived from the [Platform::Object Class](../cppcx/platform-object-class.md), and the `GetTypeCode()` method derived from the [Platform::Type Class](../cppcx/platform-type-class.md). `Platform::Guid` also has the following members.

|Member|Description|
|------------|-----------------|
|[Guid](#ctor)|Initializes a new instance of a `Platform::Guid`.|
|[operator==](#operator-equality)|Equals operator.|
|[operator!=](#operator-inequality)|Not equals operator.|
|[`operator<`](#operator-less)|Less than operator.|
|[operator()](#operator-call)|Converts a `Platform::Guid` to a `GUID`.|

### Remarks

To generate a new `Platform::Guid`, use the [Windows::Foundation::GuidHelper::CreateNewGuid](/uwp/api/windows.foundation.guidhelper.createnewguid) static method.

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## <a name="ctor"></a> Guid::Guid Constructors

Initializes a new instance of a `Platform::Guid`.

### Syntax

```cpp
Guid(
    unsigned int a,
    unsigned short b,
    unsigned short c,
    unsigned char d,
    unsigned char e,
    unsigned char f,
    unsigned char g,
    unsigned char h,
    unsigned char i,
    unsigned char j,
    unsigned char k );

Guid(GUID m);

Guid(
    unsigned int a,
    unsigned short b,
    unsigned short c,
    Array<unsigned char>^ n );
```

### Parameters

*a*\
The first 4 bytes of the `GUID`.

*b*\
The next 2 bytes of the `GUID`.

*c*\
The next 2 bytes of the `GUID`.

*d*\
The next byte of the `GUID`.

*e*\
The next byte of the `GUID`.

*f*\
The next byte of the `GUID`.

*g*\
The next byte of the `GUID`.

*h*\
The next byte of the `GUID`.

*i*\
The next byte of the `GUID`.

*j*\
The next byte of the `GUID`.

*k*\
The next byte of the `GUID`.

*m*\
A `GUID` in the form a [GUID structure](/windows/win32/api/guiddef/ns-guiddef-guid).

*n*\
The remaining 8 bytes of the `GUID`.

## <a name="operator-equality"></a> Guid::operator== Operator

Compares two `Platform::Guid` instances for equality.

### Syntax

```cpp
static bool Platform::Guid::operator==(Platform::Guid guid1, Platform::Guid guid2);
```

### Parameters

*guid1*\
The first `Platform::Guid` to compare.

*guid2*\
The second `Platform::Guid` to compare.

### Return Value

True if the two `Platform::Guid` instances are equal.

### Remarks

Prefer using the `==` operator instead of the
[Windows::Foundation::GuidHelper::Equals](/uwp/api/windows.foundation.guidhelper.equals) static method.

## <a name="operator-inequality"></a> Guid::operator!= Operator

Compares two `Platform::Guid` instances for inequality.

### Syntax

```cpp
static bool Platform::Guid::operator!=(Platform::Guid guid1, Platform::Guid guid2);
```

### Parameters

*guid1*\
The first `Platform::Guid` to compare.

*guid2*\
The second `Platform::Guid` to compare.

### Return Value

True if the two `Platform::Guid` instances are not equal.

## <a name="operator-less"></a> `Guid::operator<` Operator

Compares two `Platform::Guid` instances for ordering.

### Syntax

```cpp
static bool Platform::Guid::operator<(Platform::Guid guid1, Platform::Guid guid2);
```

### Parameters

*guid1*\
The first `Platform::Guid` to compare.

*guid2*\
The second `Platform::Guid` to compare.

### Return Value

True if *guid1* is ordered before *guid2*. The ordering is lexicographic after treating each `Platform::Guid` as if it's an array of four 32-bit unsigned values. This isn't the ordering used by SQL Server or the .NET Framework, nor is it the same as lexicographical ordering by string representation.

This operator is provided so that `Guid` objects can be more easily consumed by the C++ standard library.

## <a name="operator-call"></a> Guid::operator() Operator

Implicitly converts a `Platform::Guid` to a [GUID structure](/windows/win32/api/guiddef/ns-guiddef-guid).

### Syntax

```cpp
const GUID& Platform::Guid::operator();
```

### Return Value

A [GUID structure](/windows/win32/api/guiddef/ns-guiddef-guid).

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
