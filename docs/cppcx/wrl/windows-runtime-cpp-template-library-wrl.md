---
description: "Learn more about: Windows Runtime C++ Template Library (WRL)"
title: "Windows Runtime C++ Template Library (WRL)"
ms.date: "11/04/2016"
ms.topic: "overview"
ms.assetid: b915afce-553b-44a7-b8dc-0ab601758eb0
---
# Windows Runtime C++ Template Library (WRL)

The Windows Runtime C++ Template Library (WRL) is a template library that provides a low-level way to author and use Windows Runtime components.

> [!NOTE]
> WRL is now superseded by C++/WinRT, a standard C++17 language projection for Windows Runtime APIs. C++/WinRT is available in the Windows 10 SDK from version 1803 onward. C++/WinRT is implemented entirely in header files, and designed to provide you with first-class access to the modern Windows API.
>
> With C++/WinRT, you can both consume and author Windows Runtime APIs using any standards-compliant C++17 compiler. C++/WinRT typically performs better and produces smaller binaries than any other language option for the Windows Runtime. We will continue to support C++/CX and WRL, but highly recommend that new applications use C++/WinRT. For more information, see [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/index).

## Benefits

The Windows Runtime C++ Template Library enables you to more easily implement and consume Component Object Model (COM) components. It provides housekeeping techniques like reference-counting to manage the lifetime of objects and testing HRESULT values to determine whether an operation succeeded or failed. To successfully use the Windows Runtime C++ Template Library, you must carefully follow these rules and techniques.

The C++/CX is a high-level, language-based way to use Windows Runtime components. Both the Windows Runtime C++ Template Library and C++/CX simplify the writing of code for the Windows Runtime by automatically performing housekeeping tasks on your behalf.

The Windows Runtime C++ Template Library and C++/CX provide different benefits. Here are some reasons you might want to use the Windows Runtime C++ Template Library instead of C++/CX:

- Windows Runtime C++ Template Library adds little abstraction over the Windows Runtime Application Binary Interface (ABI), giving you the ability to control the underlying code to better create or consume Windows Runtime APIs.

- C++/CX represents COM HRESULT values as exceptions. If you’ve inherited a code base that uses COM, or one that doesn’t use exceptions, you might find that the Windows Runtime C++ Template Library is a more natural way to work with the Windows Runtime because you don't have to use exceptions.

   > [!NOTE]
   > The Windows Runtime C++ Template Library uses HRESULT values and does not throw exceptions. In addition, the Windows Runtime C++ Template Library uses smart pointers and the RAII pattern to help guarantee that objects are destroyed correctly when your application code throws an exception. For more info about smart pointers and RAII, see [Smart Pointers](../../cpp/smart-pointers-modern-cpp.md) and [Objects Own Resources (RAII)](../../cpp/object-lifetime-and-resource-management-modern-cpp.md).

- The purpose and design of the Windows Runtime C++ Template Library is inspired by the Active Template Library (ATL), which is a set of template-based C++ classes that simplify the programming of COM objects. Because Windows Runtime C++ Template Library uses standard C++ to wrap the Windows Runtime, you can more easily port and interact with many existing COM components written in ATL to the Windows Runtime. If you already know ATL, you might find that Windows Runtime C++ Template Library programming is easier.

## Getting Started

Here are some resources that can help you get working with the Windows Runtime C++ Template Library right away.

[The Windows Runtime Library (WRL)](https://channel9.msdn.com/Events/Windows-Camp/Developing-Windows-8-Metro-style-apps-in-Cpp/The-Windows-Runtime-Library-WRL-)<br/>
In this Channel 9 video, learn more about how the Windows Runtime C++ Template Library helps you write Universal Windows Platform (UWP) apps and how to author and consume Windows Runtime components.

[How to: Activate and Use a Windows Runtime Component](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md)<br/>
Shows how to use the Windows Runtime C++ Template Library to initialize the Windows Runtime and activate and use a Windows Runtime component.

[How to: Complete Asynchronous Operations](how-to-complete-asynchronous-operations-using-wrl.md)<br/>
Shows how to use the Windows Runtime C++ Template Library to start asynchronous operations and perform work when the operations complete.

[How to: Handle Events](how-to-handle-events-using-wrl.md)<br/>
Shows how to use the Windows Runtime C++ Template Library to subscribe to and handle the events of a Windows Runtime object.

[Walkthrough: Creating a UWP app using WRL and Media Foundation](walkthrough-creating-a-windows-store-app-using-wrl-and-media-foundation.md)<br/>
Learn how to create a UWP app that uses [Microsoft Media Foundation](/windows/win32/medfound/microsoft-media-foundation-sdk).

[How to: Create a Classic COM Component](how-to-create-a-classic-com-component-using-wrl.md)<br/>
Shows how to use the Windows Runtime C++ Template Library to create a basic COM component and a basic way to register and consume the COM component from a desktop app.

[How to: Instantiate WRL Components Directly](how-to-instantiate-wrl-components-directly.md)<br/>
Learn how to use the [Microsoft::WRL::Make](make-function.md) and [Microsoft::WRL::Details::MakeAndInitialize](makeandinitialize-function.md) functions to instantiate a component from the module that defines it.

[How to: Use winmdidl.exe and midlrt.exe to create .h files from windows metadata](use-winmdidl-and-midlrt-to-create-h-files-from-windows-metadata.md)<br/>
Shows how to consume custom Windows Runtime components from WRL by creating an IDL file from the .winmd metadata.

[Walkthrough: Connecting Using Tasks and XML HTTP Requests](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md)<br/>
Shows how to use the [IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2) and [IXMLHTTPRequest2Callback](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2callback) interfaces together with tasks to send HTTP GET and POST requests to a web service in a UWP app.

[Bing Maps Trip Optimizer sample](https://github.com/Microsoft/VCSamples/tree/master/VC2012Samples/Windows%208%20samples/C%2B%2B/Windows%208%20app%20samples)<br/>
Uses the `HttpRequest` class that's defined in [Walkthrough: Connecting Using Tasks and XML HTTP Requests](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md) in the context of a complete UWP app.

[Creating a Windows Runtime DLL component with C++ sample](https://github.com/Microsoft/VCSamples/tree/master/VC2012Samples/Windows%208%20samples/C%2B%2B/Windows%208%20app%20samples)<br/>
Shows how to use the Windows Runtime C++ Template Library to create an in-process DLL component and consume it from C++/CX, JavaScript, and C#.

[DirectX marble maze game sample](/samples/microsoft/windows-appsample-marble-maze/directx-marble-maze-game-sample/)<br/>
Demonstrates how to use the Windows Runtime C++ Template Library to manage the lifetime of COM components such as DirectX and Media Foundation in the context of a complete 3-D game.

[Toast notifications from desktop apps](/windows/uwp/design/shell/tiles-and-notifications/toast-desktop-apps)<br/>
Demonstrates how to send toast notifications from a desktop app.

## Windows Runtime C++ Template Library Compared to ATL

Windows Runtime C++ Template Library resembles the Active Template Library (ATL) because you can use it to create small, fast COM objects. Windows Runtime C++ Template Library and ATL also share concepts such as definition of objects in modules, explicit registration of interfaces, and open creation of objects by using factories. You might be comfortable with Windows Runtime C++ Template Library if you're familiar with ATL.

Windows Runtime C++ Template Library supports the COM functionality that is required for UWP apps. Therefore, it differs from the ATL because it omits direct support for COM features such as:

- aggregation

- stock implementations

- dual interfaces (`IDispatch`)

- standard enumerator interfaces

- connection points

- tear-off interfaces

- OLE embedding

- ActiveX controls

- COM+

## Concepts

Windows Runtime C++ Template Library provides types that represent a few basic concepts. The following sections describe those types.

### ComPtr

[ComPtr](comptr-class.md) is a *smart pointer* type that represents the interface that's specified by the template parameter. Use `ComPtr` to declare a variable that can access the members of an object that's derived from the interface. `ComPtr` automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.

### RuntimeClass

[RuntimeClass](runtimeclass-class.md) represents an instantiated class that inherits a set of specified interfaces. A `RuntimeClass` object can provide a combination of support for one or more Windows Runtime COM interfaces, or a weak reference to a component.

### Module

[Module](module-class.md) represents a collection of related objects. A `Module` object manages class factories, which create objects, and registration, which enables other applications to use an object.

### Callback

The [Callback](callback-function-wrl.md) function creates an object whose member function is an event handler (a callback method). Use the `Callback` function to write asynchronous operations.

### EventSource

[EventSource](eventsource-class.md) is used to manage *delegate* event handlers. Use Windows Runtime C++ Template Library to implement a delegate, and use `EventSource` to add, remove, and invoke delegates.

### AsyncBase

[AsyncBase](asyncbase-class.md) provides virtual methods that represent the Windows Runtime asynchronous programming model. Override the members in this class to create a custom class that can start, stop, or check the progress of an asynchronous operation.

### FtmBase

[FtmBase](ftmbase-class.md) represents a free-threaded marshaler object. `FtmBase` creates a global interface table (GIT), and helps manage marshaling and proxy objects.

### WeakRef

[WeakRef](weakref-class.md) is a smart-pointer type that represents a *weak reference*, which references an object that might or might not be accessible. A `WeakRef` object can be used by only the Windows Runtime, and not by classic COM.

A `WeakRef` object typically represents an object whose existence is controlled by an external thread or application. For example, a `WeakRef` object can reference a file object. When the file is open, the `WeakRef` is valid and the referenced file is accessible. But when the file is closed, the `WeakRef` is invalid and the file is not accessible.

## Related Topics

[Key APIs by Category](key-wrl-apis-by-category.md)\
Highlights the primary Windows Runtime C++ Template Library types, functions, and macros.

[Reference](wrl-reference.md)\
Contains reference information for the Windows Runtime C++ Template Library.

[Quick Reference (C++/CX)](../../cppcx/quick-reference-c-cx.md)\
Briefly describes the C++/CX features that support the Windows Runtime.

[Using Windows Runtime Components in Visual C++](/windows/uwp/winrt-components/walkthrough-creating-a-basic-windows-runtime-component-in-cpp-and-calling-it-from-javascript-or-csharp)\
Shows how to use C++/CX to create a basic Windows Runtime component.
