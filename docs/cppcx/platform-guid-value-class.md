---
title: "Platform::Guid value class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Guid"]
helpviewer_keywords: ["Platform::Guid Struct"]
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
---
# Platform::Guid value class

Represents a [GUID](https://msdn.microsoft.com/library/windows/desktop/aa373931) type in the Windows Runtime type system.

## Syntax

```cpp
public value struct Guid
```

### Members

Guid has the Equals(), GetHashCode(), and ToString() methods derived from the [Platform::Object Class](../cppcx/platform-object-class.md), and the GetTypeCode() method derived from the [Platform::Type Class](../cppcx/platform-type-class.md). Guid also has the following members.

|Member|Description|
|------------|-----------------|
|[Guid](#ctor)|Initializes a new instance of the Guid struct.|
|[operator==](#operator-equality)|Equals operator.|
|[operator!=](#operator-not-equal)|Not equals operator.|
|[operator()](#operator-call)|Converts a Guid to a GUID.|

### Remarks

For an example of how to generate a new Platform::Guid using the Windows function [CoCreateGuid](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateguid), see [WinRT component: How to generate a GUID?](http://blogs.msdn.com/b/eternalcoding/archive/2013/03/25/winrt-component-how-to-generate-a-guid.aspx)

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## <a name="ctor"></a> Guid::Guid Constructors

Initializes a new instance of a Guid struct.

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

*a*<br/>
The first 4 bytes of the GUID.

*b*<br/>
The next 2 bytes of the GUID.

*c*<br/>
The next 2 bytes of the GUID.

*d*<br/>
The next byte of the GUID.

*e*<br/>
The next byte of the GUID.

*f*<br/>
The next byte of the GUID.

*g*<br/>
The next byte of the GUID.

*h*<br/>
The next byte of the GUID.

*i*<br/>
The next byte of the GUID.

*j*<br/>
The next byte of the GUID.

*k*<br/>
The next byte of the GUID.

*m*<br/>
A GUID as defined.

*n*<br/>
The remaining 8 bytes of the GUID.

## <a name="operator-equality"></a> Guid::operator== Operator

Compares two guids.

### Syntax

```cpp
Platform::Guid::operator==
```

### Return Value

True if the two guids are equal.

## <a name="operator-inequality"></a> Guid::operator!= Operator

Compares two guids.

### Syntax

```cpp
Platform::Guid::operator!=
```

### Return Value

True if the two guids are not equal.

## <a name="operator-call"></a> Guid::operator() Operator

Implicitly converts a [GUID structure](https://msdn.microsoft.com/library/windows/desktop/aa373931)GUID to a Platform::Guid.

### Syntax

```cpp
Platform::Guid operator();
```

### Return Value

A Guid struct.

## See Also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)