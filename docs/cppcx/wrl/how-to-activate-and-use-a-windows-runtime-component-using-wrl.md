---
description: "Learn more about: How to: Activate and Use a Windows Runtime Component Using WRL"
title: "How to: Activate and Use a Windows Runtime Component Using WRL"
ms.date: "11/04/2016"
ms.topic: "reference"
ms.assetid: 54828f02-6af3-45d1-b965-d0104442f8d5
---
# How to: Activate and Use a Windows Runtime Component Using WRL

This document shows how to use the Windows Runtime C++ Template Library (WRL)to initialize the Windows Runtime and how to activate and use a Windows Runtime component.

To use a component, you must acquire an interface pointer to the type that is implemented by the component. And because the underlying technology of the Windows Runtime is the Component Object Model (COM), you must follow COM rules to maintain an instance of the type. For example, you must maintain the *reference count* that determines when the type is deleted from memory.

To simplify the use of the Windows Runtime, Windows Runtime C++ Template Library provides the smart pointer template, [ComPtr\<T>](comptr-class.md), that automatically performs reference counting. When you declare a variable, specify `ComPtr<`*interface-name*`>` *identifier*. To access an interface member, apply the arrow member-access operator (`->`) to the identifier.

> [!IMPORTANT]
> When you call an interface function, always test the HRESULT return value.

## Activating and Using a Windows Runtime Component

The following steps use the `Windows::Foundation::IUriRuntimeClass` interface to demonstrate how to create an activation factory for a Windows Runtime component, create an instance of that component, and retrieve a property value. They also show how to initialize the Windows Runtime. The complete example follows.

> [!IMPORTANT]
> Although you typically use the Windows Runtime C++ Template Library in a Universal Windows Platform (UWP) app, this example uses a console app for illustration. Functions such as `wprintf_s` are not available from a UWP app. For more information about the types and functions that you can use in a UWP app, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) and [Win32 and COM for UWP apps](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

#### To activate and use a Windows Runtime component

1. Include (`#include`) any required Windows Runtime, Windows Runtime C++ Template Library, or C++ Standard Library headers.

   [!code-cpp[wrl-consume-component#2](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_1.cpp)]

   We recommend that you utilize the `using namespace` directive in your .cpp file to make the code more readable.

2. Initialize the thread in which the app executes. Every app must initialize its thread and threading model. This example uses the [Microsoft::WRL::Wrappers::RoInitializeWrapper](roinitializewrapper-class.md) class to initialize the Windows Runtime and specifies [RO_INIT_MULTITHREADED](/windows/win32/api/roapi/ne-roapi-ro_init_type) as the threading model. The `RoInitializeWrapper` class calls `Windows::Foundation::Initialize` at construction, and `Windows::Foundation::Uninitialize` when it is destroyed.

   [!code-cpp[wrl-consume-component#3](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_2.cpp)]

   In the second statement, the [RoInitializeWrapper::HRESULT](roinitializewrapper-class.md#hresult) operator returns the `HRESULT` from the call to `Windows::Foundation::Initialize`.

3. Create an *activation factory* for the `ABI::Windows::Foundation::IUriRuntimeClassFactory` interface.

   [!code-cpp[wrl-consume-component#4](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_3.cpp)]

   The Windows Runtime uses fully-qualified names to identify types. The `RuntimeClass_Windows_Foundation_Uri` parameter is a string that's provided by the Windows Runtime and contains the required runtime class name.

4. Initialize a [Microsoft::WRL::Wrappers::HString](hstring-class.md) variable that represents the URI `"https://www.microsoft.com"`.

   [!code-cpp[wrl-consume-component#6](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_4.cpp)]

   In the Windows Runtime, you don’t allocate memory for a string that the Windows Runtime will use. Instead, the Windows Runtime creates a copy of your string in a buffer that it maintains and uses for operations, and then returns a handle to the buffer that it created.

5. Use the `IUriRuntimeClassFactory::CreateUri` factory method to create a `ABI::Windows::Foundation::IUriRuntimeClass` object.

   [!code-cpp[wrl-consume-component#7](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_5.cpp)]

6. Call the `IUriRuntimeClass::get_Domain` method to retrieve the value of the `Domain` property.

   [!code-cpp[wrl-consume-component#8](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_6.cpp)]

7. Print the domain name to the console and return. All `ComPtr` and RAII objects leave scope and are released automatically.

   [!code-cpp[wrl-consume-component#9](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_7.cpp)]

   The [WindowsGetStringRawBuffer](/windows/win32/api/winstring/nf-winstring-windowsgetstringrawbuffer) function retrieves the underlying Unicode form of the URI string.

Here's the complete example:

[!code-cpp[wrl-consume-component#1](../codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_8.cpp)]

## Compiling the Code

To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `wrl-consume-component.cpp` and then run the following command in a Visual Studio Command Prompt window.

`cl.exe wrl-consume-component.cpp runtimeobject.lib`

## See also

[Windows Runtime C++ Template Library (WRL)](windows-runtime-cpp-template-library-wrl.md)
