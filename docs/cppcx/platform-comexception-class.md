---
description: "Learn more about: Platform::COMException Class"
title: "Platform::COMException Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["VCCORLIB/Platform::COMException", "VCCORLIB/Platform::COMException::HResult", "VCCORLIB/Platform::COMException::Message"]
helpviewer_keywords: ["Platform::COMException Class"]
ms.assetid: 44fda4e5-574f-4d12-ab5f-4ff3f277448d
---
# Platform::COMException Class

Represents COM errors that occur during application execution. COMException is the base class for a set of predefined, standard exceptions.

## Syntax

```cpp
public ref class COMException : Exception,    IException,    IPrintable,    IEquatable
```

### Members

The COMException class inherits from the Object class and the IException, IPrintable, and IEquatable interfaces.

COMException also has the following types of members.

**Constructors**

|Member|Description|
|------------|-----------------|
|[COMException](#ctor)|Initializes a new instance of the COMException class.|

**Methods**

The COMException class inherits the Equals(), Finalize(), GetHashCode(), GetType(), MemberwiseClose(), and ToString() methods from the [Platform::Object Class](../cppcx/platform-object-class.md).

**Properties**

The COMException class has the following properties.

|Member|Description|
|------------|-----------------|
|[Exception::HResult](#hresult)|The HRESULT that corresponds to the exception.|
|[Exception::Message](#message)|Message that describes the exception.|

## Derived Exceptions

The following predefined exceptions are derived from COMException. They differ from COMException only in their name, the name of their constructor, and their underlying HRESULT value.

|Name|Underlying HRESULT|Description|
|----------|------------------------|-----------------|
|COMException|*user-defined hresult*|Thrown when an unrecognized HRESULT is returned from a COM method call.|
|AccessDeniedException|E_ACCESSDENIED|Thrown when access is denied to a resource or feature.|
|ChangedStateException|E_CHANGED_STATE|Thrown when methods of a collection iterator or a collection view are called after the parent collection has changed, invalidating the results of the method.|
|ClassNotRegisteredException|REGDB_E_CLASSNOTREG|Thrown when a COM class has not been registered.|
|DisconnectedException|RPC_E_DISCONNECTED|Thrown when an object is disconnected from its clients.|
|FailureException|E_FAIL|Thrown when an operation fails.|
|InvalidArgumentException|E_INVALIDARG|Thrown when one of the arguments provided to a method is not valid.|
|InvalidCastException|E_NOINTERFACE|Thrown when a type can't be cast to another type.|
|NotImplementedException|E_NOTIMPL|Thrown if an interface method hasn't been implemented on a class.|
|NullReferenceException|E_POINTER|Thrown when there is an attempt to dereference a null object reference.|
|OperationCanceledException|E_ABORT|Thrown when an operation is aborted.|
|OutOfBoundsException|E_BOUNDS|Thrown when an operation attempts to access data outside the valid range.|
|OutOfMemoryException|E_OUTOFMEMORY|Thrown when there's insufficient memory to complete the operation.|

### Requirements

**Minimum supported client:** Windows 8

**Minimum supported server:** Windows Server 2012

**Namespace:** Platform

**Metadata:** platform.winmd

## <a name="ctor"></a> COMException::COMException Constructor

Intializes a new instance of the COMException class.

### Syntax

```cpp
COMException( int hresult )
```

### Parameters

*hresult*<br/>
The error HRESULT that is represented by the exception.

## <a name="hresult"></a> COMException::HResult Property

The HRESULT that corresponds to the exception.

### Syntax

```cpp
public:
    property int HResult { int get();}
```

## Property Value

An HRESULT value that specifies the error.

### Remarks

For more information about how to interpret the HRESULT value, see [Structure of COM Error Codes](/windows/win32/com/structure-of-com-error-codes).

## <a name="message"></a> COMException::Message Property

Message that describes the exception.

### Syntax

```cpp
public:property String^ Message {    String^ get();}
```

### Property Value

A description of the exception.

## See also

[Platform namespace](../cppcx/platform-namespace-c-cx.md)
