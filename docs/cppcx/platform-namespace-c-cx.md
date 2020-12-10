---
description: "Learn more about: Platform namespace (C++/CX)"
title: "Platform namespace (C++/CX)"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["Platform/Platform"]
helpviewer_keywords: ["Platform Namespace (C++/CX)"]
ms.assetid: b160e822-d424-43d2-ba60-57b0e81f259c
---
# Platform namespace (C++/CX)

Contains built-in types that are compatible with the Windows Runtime.

## Syntax

```cpp
using namespace Platform;
```

### Members

**Attributes**

The Platform namespace contains attributes, classes, enumerations, interfaces, and structures. Platform also contains nested namespaces.

|Attribute|Description|
|---------------|-----------------|
|Flags|Indicates that an enumeration can be treated as a bit field; that is, a set of flags.|
|MTAThread|Indicates that the threading model for an application is multi-threaded apartment (MTA).|
|STAThread|Indicates that the threading model for an application is single-threaded apartment (STA).|

**Classes**

The Platform namespace has the following classes.

|Class|Description|
|-----------|-----------------|
|[Platform::AccessDeniedException Class](../cppcx/platform-accessdeniedexception-class.md)|Raised when access is denied to a resource or feature.|
|[Platform::Agile Class](../cppcx/platform-agile-class.md)|Represents a non-agile object as an agile object.|
|[Platform::Array Class](../cppcx/platform-array-class.md)|Represents a one-dimensional, modifiable array.|
|[Platform::ArrayReference Class](../cppcx/platform-arrayreference-class.md)|Represents an array whose initialization is optimized to minimize copying operations.|
|[Platform::Box Class](../cppcx/platform-box-class.md)|Used to declare a boxed type that encapsulates a value type such as Windows::Foundation::DateTime or int64 when that type is passed across the application binary interface (ABI) or stored in a variable of type [Platform::Object^](../cppcx/platform-object-class.md).|
|[Platform::ChangedStateException Class](../cppcx/platform-changedstateexception-class.md)|Thrown when methods of a collection iterator or a collection view are called after the parent collection has changed, invalidating the results of the method.|
|[Platform::ClassNotRegisteredException Class](../cppcx/platform-classnotregisteredexception-class.md)|Thrown when a COM class has not been registered.|
|[Platform::COMException Class](../cppcx/platform-comexception-class.md)|Represents the exception that is thrown when an unrecognized value is returned from a COM method call.|
|[Platform::Delegate Class](../cppcx/platform-delegate-class.md)|Represents the signature of a callback function.|
|[Platform::DisconnectedException Class](../cppcx/platform-disconnectedexception-class.md)|The object has disconnected from its clients.|
|[Platform::Exception Class](../cppcx/platform-exception-class.md)|Represents errors that occur during application execution. The base class for exceptions.|
|[Platform::FailureException Class](../cppcx/platform-failureexception-class.md)|Thrown when the operation has failed. It is the equivalent of the E_FAIL HRESULT.|
|[Platform::Guid value class](../cppcx/platform-guid-value-class.md)|Represents a GUID in the Windows Runtime type system.|
|[Platform::InvalidArgumentException Class](../cppcx/platform-invalidargumentexception-class.md)|Thrown when one of the arguments provided to a method is not valid.|
|[Platform::InvalidCastException Class](../cppcx/platform-invalidcastexception-class.md)|Thrown in cases of invalid casting or explicit conversion.|
|[Platform::MTAThreadAttribute Class](../cppcx/platform-mtathreadattribute-class.md)|Indicates that the threading model for an application is multi-threaded apartment (MTA).|
|[Platform::NotImplementedException Class](../cppcx/platform-notimplementedexception-class.md)|Thrown if an interface method has not been implemented on the class.|
|[Platform::NullReferenceException Class](../cppcx/platform-nullreferenceexception-class.md)|Thrown when there is an attempt to dereference a null object reference.|
|[Platform::Object Class](../cppcx/platform-object-class.md)|A base class that provides common behavior.|
|[Platform::ObjectDisposedException Class](../cppcx/platform-objectdisposedexception-class.md)|Thrown when an operation is performed on a disposed object.|
|[Platform::OperationCanceledException Class](../cppcx/platform-operationcanceledexception-class.md)|Thrown when an operation is aborted.|
|[Platform::OutOfBoundsException Class](../cppcx/platform-outofboundsexception-class.md)|Thrown when an operation attempts to access data outside the valid range.|
|[Platform::OutOfMemoryException Class](../cppcx/platform-outofmemoryexception-class.md)|Thrown when there's insufficient memory to complete the operation.|
|[Platform::STAThreadAttribute Class](../cppcx/platform-stathreadattribute-class.md)|Indicates that the threading model for an application is single-threaded apartment (STA).|
|[Platform::String Class](../cppcx/platform-string-class.md)|A sequential collection of Unicode characters that is used to represent text.|
|[Platform::StringReference Class](../cppcx/platform-stringreference-class.md)|Enables access to string buffers with minimum of copy overhead.|
|[Platform::Type Class](../cppcx/platform-type-class.md)|Identifies a built-in type by a category enumeration.|
|[Platform::ValueType Class](../cppcx/platform-valuetype-class.md)|The base class for instances of value types.|
|[Platform::WeakReference Class](../cppcx/platform-weakreference-class.md)|Provides a weak reference to ref class objects that does not increment the reference count.|
|[Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md)|Represents a one-dimensional write-only array which is used as an input parameter on methods that implement the FillArray pattern.|
|[Platform::WrongThreadException Class](../cppcx/platform-wrongthreadexception-class.md)|Thrown when a thread calls via an interface pointer which is for a proxy object that does not belong to the thread's apartment.|

**Interface implementations**

The Platform namespace defines the following interfaces.

|Interface|Description|
|---------------|-----------------|
|[Platform::IBox Interface](../cppcx/platform-ibox-interface.md)|Used to pass value types to functions whose parameters are typed as Platform::Object^.|
|[Platform::IBoxArray Interface](../cppcx/platform-iboxarray-interface.md)|Interface used to pass arrays of value types to functions whose parameters are typed as Platform::Array.|
|[Platform::IDisposable Interface](../cppcx/platform-idisposable-interface.md)|Used to release unmanaged resources.|

**Enumerations**

The Platform namespace has the following enumerations.

|Interface|Description|
|---------------|-----------------|
|[Platform::CallbackContext Enumeration](../cppcx/platform-callbackcontext-enumeration.md)|An enumeration that is used as a parameter of the delegate constructor. It determines whether the callback is to be marshalled to the originating thread or to the caller thread.|
|[Platform::TypeCode Enumeration](../cppcx/platform-typecode-enumeration.md)|Specifies a numeric category that represents a built-in type.|

**Structures**

The Platform namespace has the following structures.

|Structure|Description|
|---------------|-----------------|
|[Platform::Enum Class](../cppcx/platform-enum-class.md)|Represents a named constant.|
|[Platform::Guid value class](../cppcx/platform-guid-value-class.md)|Represents a GUID.|
|[Platform::IntPtr value class](../cppcx/platform-intptr-value-class.md)|A signed pointer whose size is appropriate for the platform (32-bit or 64-bit).|
|[Platform::SizeT value class](../cppcx/platform-sizet-value-class.md)|An unsigned data type used to represent the size of an object.|
|[Platform::UIntPtr value class](../cppcx/platform-uintptr-value-class.md)|An unsigned pointer whose size is appropriate for the platform (32-bit or 64-bit).|

## See also

[Platform::Collections Namespace](../cppcx/platform-collections-namespace.md)<br/>
[Platform::Runtime::CompilerServices Namespace](../cppcx/platform-runtime-compilerservices-namespace.md)<br/>
[Platform::Runtime::InteropServices Namespace](../cppcx/platform-runtime-interopservices-namespace.md)<br/>
[Platform::Metadata Namespace](../cppcx/platform-metadata-namespace.md)
