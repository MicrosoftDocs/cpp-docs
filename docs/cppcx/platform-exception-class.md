---
description: "Learn more about: Platform::Exception Class"
title: "Platform::Exception Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::Exception::Exception", "VCCORLIB/Platform::Exception::CreateException", "VCCORLIB/Platform::Exception::HResult", "VCCORLIB/Platform::Exception::Message"]
helpviewer_keywords: ["Platform::Exception Class"]
ms.assetid: ca1d5a67-3a5a-48fe-8099-f9c38a2d2dce
---
# Platform::Exception Class

Represents errors that occur during application execution. Custom exception classes can't be derived from `Platform::Exception`. If you require a custom exception, you can use `Platform::COMException` and specify an app-specific HRESULT.

## Syntax

```cpp
public ref class Exception : Object,    IException,    IPrintable,    IEquatable
```

### Members

The `Exception` class inherits from the `Object` class and the `IException`, `IPrintable`, and `IEquatable` interfaces.

The `Exception` class also has the following kinds of members.

### Constructors

|Member|Description|
|------------|-----------------|
|[Exception::Exception](#ctor)|Initializes a new instance of the `Exception` class.|

### Methods

The `Exception` class inherits the `Equals()`, `Finalize()`,`GetHashCode()`,`GetType()`,`MemberwiseClose()`, and `ToString()` methods from the [Platform::Object Class](../cppcx/platform-object-class.md). The `Exception` class also has the following method.

|Member|Description|
|------------|-----------------|
|[Exception::CreateException](#createexception)|Creates an exception that represents the specified HRESULT value.|

### Properties

The Exception class also has the following properties.

|Member|Description|
|------------|-----------------|
|[Exception::HResult](#hresult)|The HRESULT that corresponds to the exception.|
|[Exception::Message](#message)|A message that describes the exception. This value is read-only and cannot be modified after the `Exception` is constructed.|

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## <a name="createexception"></a> Exception::CreateException Method

Creates a Platform::Exception^ from a specified HRESULT value.

### Syntax

```cpp
Exception^ CreateException(int32 hr);
Exception^ CreateException(int32 hr, Platform::String^ message);
```

### Parameters

*hr*<br/>
An HRESULT value that you typically get from a call to a COM method. If the value is 0, which is equal to S_OK, this method throws [Platform::InvalidArgumentException](../cppcx/platform-invalidargumentexception-class.md) because COM methods that succeed should not throw exceptions.

*message*<br/>
A string that describes the error.

### Return Value

An exception that represents the error HRESULT.

### Remarks

Use this method to create an exception out of an HRESULT that is returned, for example, from a call to a COM interface method. You can use the overload that takes a String^ parameter to provide a custom message.

It is strongly recommended to use CreateException to create a strongly-typed exception rather than creating a [Platform::COMException](../cppcx/platform-comexception-class.md) that merely contains the HRESULT.

## <a name="ctor"></a> Exception::Exception Constructor

Intializes a new instance of the Exception class.

### Syntax

```cpp
Exception(int32 hresult);
Exception(int32 hresult, ::Platform::String^ message);
```

### Parameters

*hresult*<br/>
The error HRESULT that is represented by the exception.

*message*<br/>
A user-specified message, such as prescriptive text, that is associated with the exception. In general you should prefer the second overload in order to provide a descriptive message that is as specific as possible about how and why the error has occurred.

## <a name="hresult"></a> Exception::HResult Property

The HRESULT that corresponds to the exception.

### Syntax

```cpp
public:
    property int HResult { int get(); }
```

### Property Value

An HRESULT value.

### Remarks

Most exceptions start out as COM errors, which are returned as HRESULT values. C++/CX converts these values into Platform::Exception^ objects, and this property stores the value of the original error code.

## <a name="message"></a> Exception::Message Property

Message that describes the error.

### Syntax

```cpp
public:property String^ Message;
```

### Property Value

In exceptions that originate in the Windows Runtime, this is a system-supplied description of the error.

### Remarks

In Windows 8, this property is read-only because exceptions in that version of the Windows Runtime are transported across the ABI only as HRESULTS. In Windows 8.1, richer exception information is transported across the ABI and you can provide a custom message that other components can access programmatically. For more information, see [Exceptions (C++/CX)](../cppcx/exceptions-c-cx.md).

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
