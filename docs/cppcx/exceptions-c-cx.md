---
description: "Learn more about: Exceptions (C++/CX)"
title: "Exceptions (C++/CX)"
ms.date: "07/02/2019"
ms.assetid: 6cbdc1f1-e4d7-4707-a670-86365146432f
---
# Exceptions (C++/CX)

Error handling in C++/CX is based on exceptions. At the most fundamental level, Windows Runtime components report errors as HRESULT values. In C++/CX, these values are converted to strongly typed exceptions that contain an HRESULT value and a string description that you can access programmatically.  Exceptions are implemented as a **`ref class`** that derives from `Platform::Exception`.  The `Platform` namespace defines distinct exception classes for the most common HRESULT values; all other values are reported through the `Platform::COMException` class. All exception classes have an [Exception::HResult](platform-exception-class.md#hresult) field that you can use to retrieve the original HRESULT. You can also examine call-stack information for user code in the debugger that can help pinpoint the original source of the exception, even if it originated in code that was written in a language other than C++.

## Exceptions

In your C++ program, you can throw and catch an exception that comes from a Windows Runtime operation, an exception that's derived from `std::exception`, or a user-defined type. You have to throw a Windows Runtime exception only when it will cross the application binary interface (ABI) boundary, for example, when the code that catches your exception is written in JavaScript. When a non-Windows Runtime C++ exception reaches the ABI boundary, the exception is translated into a `Platform::FailureException` exception, which represents an E_FAIL HRESULT. For more information about the ABI, see [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

You can declare a [Platform::Exception](platform-exception-class.md) by using one of two constructors that take either an HRESULT parameter, or an HRESULT parameter and a [Platform::String](platform-string-class.md)^ parameter that can be passed across the ABI to any Windows Runtime app that handles it. Or you can declare an exception by using one of two [Exception::CreateException method](platform-exception-class.md#createexception) overloads that take either an HRESULT parameter, or an HRESULT parameter and a `Platform::String^` parameter.

## Standard exceptions

C++/CX supports a set of standard exceptions that represent typical HRESULT errors. Each standard exception derives from [Platform::COMException](platform-comexception-class.md), which in turn derives from `Platform::Exception`. When you throw an exception across the ABI boundary, you must throw one of the standard exceptions.

You can't derive your own exception type from `Platform::Exception`. To throw a custom exception, use a user-defined HRESULT to construct a `COMException` object.

The following table lists the standard exceptions.

|Name|Underlying HRESULT|Description|
|----------|------------------------|-----------------|
|COMException|*user-defined hresult*|Thrown when an unrecognized HRESULT is returned from a COM method call.|
|AccessDeniedException|E\_ACCESSDENIED|Thrown when access is denied to a resource or feature.|
|ChangedStateException|E\_CHANGED\_STATE|Thrown when methods of a collection iterator or a collection view are called after the parent collection has changed, thereby invalidating the results of the method.|
|ClassNotRegisteredException|REGDB\_E\_CLASSNOTREG|Thrown when a COM class has not been registered.|
|DisconnectedException|RPC\_E\_DISCONNECTED|Thrown when an object is disconnected from its clients.|
|FailureException|E\_FAIL|Thrown when an operation fails.|
|InvalidArgumentException|E\_INVALIDARG|Thrown when one of the arguments that are provided to a method is not valid.|
|InvalidCastException|E\_NOINTERFACE|Thrown when a type can't be cast to another type.|
|NotImplementedException|E\_NOTIMPL|Thrown if an interface method hasn't been implemented on a class.|
|NullReferenceException|E\_POINTER|Thrown when there is an attempt to de-reference a null object reference.|
|ObjectDisposedException|RO\_E\_CLOSED|Thrown when an operation is performed on a disposed object.|
|OperationCanceledException|E\_ABORT|Thrown when an operation is aborted.|
|OutOfBoundsException|E\_BOUNDS|Thrown when an operation attempts to access data outside the valid range.|
|OutOfMemoryException|E\_OUTOFMEMORY|Thrown when there's insufficient memory to complete the operation.|
|WrongThreadException|RPC\_E\_WRONG\_THREAD|Thrown when a thread calls via an interface pointer which is for a proxy object that does not belong to the thread's apartment.|

## HResult and Message properties

All exceptions have an [HResult](platform-comexception-class.md#hresult) property and a [Message](platform-comexception-class.md#message) property. The [Exception::HResult](platform-exception-class.md#hresult) property gets the exception's underlying numeric HRESULT value. The [Exception::Message](platform-exception-class.md#message) property gets the system-supplied string that describes the exception. In Windows 8, the message is available only in the debugger and is read-only. This means that you cannot change it when you rethrow the exception. In Windows 8.1, you can access the message string programmatically and provide a new message if you rethrow the exception. Better callstack information is also available in the debugger, including callstacks for asynchronous method calls.

### Examples

This example shows how to throw a Windows Runtime exception for synchronous operations:

[!code-cpp[cx_exceptions#01](codesnippet/CPP/exceptiontest/class1.cpp#01)]

The next example shows how to catch the exception.

[!code-cpp[cx_exceptions#02](codesnippet/CPP/exceptiontest/class1.cpp#02)]

To catch exceptions that are thrown during an asynchronous operation, use the task class and add an error-handling continuation. The error-handling continuation marshals exceptions that are thrown on other threads back to the calling thread so that you can handle all potential exceptions at just one point in your code. For more information, see [Asynchronous Programming in C++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps).

## UnhandledErrorDetected event

In Windows 8.1 you can subscribe to the [Windows::ApplicationModel::Core::CoreApplication::UnhandledErrorDetected](/uwp/api/windows.applicationmodel.core.icoreapplicationunhandlederror.unhandlederrordetected) static event, which provides access to unhandled errors that are about to bring down the process. Regardless of where the error originated, it reaches this handler as a [Windows::ApplicationModel::Core::UnhandledError](/uwp/api/windows.applicationmodel.core.unhandlederror) object that's passed in with the event args. When you call `Propagate` on the object, it creates and throws a `Platform::*Exception` of the type that corresponds to the error code. In the catch blocks, you can save user state if necessary and then either allow the process to terminate by calling **`throw`**, or do something to get the program back into a known state. The following example shows the basic pattern:

In app.xaml.h:

```cpp
void OnUnhandledException(Platform::Object^ sender, Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs^ e);
```

In app.xaml.cpp:

```cpp
// Subscribe to the event, for example in the app class constructor:
Windows::ApplicationModel::Core::CoreApplication::UnhandledErrorDetected += ref new EventHandler<UnhandledErrorDetectedEventArgs^>(this, &App::OnUnhandledException);

// Event handler implementation:
void App::OnUnhandledException(Platform::Object^ sender, Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs^ e)
{
    auto err = e->UnhandledError;

    if (!err->Handled) //Propagate has not been called on it yet.
{
    try
    {
        err->Propagate();
    }
    // Catch any specific exception types if you know how to handle them
    catch (AccessDeniedException^ ex)
    {
        // TODO: Log error and either take action to recover
        // or else re-throw exception to continue fail-fast
    }
}
```

### Remarks

C++/CX does not use the **`finally`** clause.

## See also

[C++/CX Language Reference](visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](namespaces-reference-c-cx.md)
