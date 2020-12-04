---
description: "Learn more about: How to: Complete Asynchronous Operations Using WRL"
title: "How to: Complete Asynchronous Operations Using WRL"
ms.date: "11/04/2016"
ms.topic: "reference"
ms.assetid: 02173eae-731b-49bc-b412-f1f69388b99d
---
# How to: Complete Asynchronous Operations Using WRL

This document shows how to use the Windows Runtime C++ Template Library (WRL) to start asynchronous operations and perform work when the operations complete.

This document shows two examples. The first example starts an asynchronous timer and waits for the timer to expire. In this example, you specify the asynchronous action when you create the timer object. The second example runs a background worker thread. This example shows how to work with a Windows Runtime method that returns an `IAsyncInfo` interface. The [Callback](callback-function-wrl.md) function is an important part of both examples because it enables them to specify an event handler to process the results of the asynchronous operations.

For a more basic example that creates an instance of a component and retrieves a property value, see [How to: Activate and Use a Windows Runtime Component](how-to-activate-and-use-a-windows-runtime-component-using-wrl.md).

> [!TIP]
> These examples use lambda expressions to define the callbacks. You can also use function objects (functors), function pointers, or [std::function](../../standard-library/function-class.md) objects. For more information about C++ lambda expressions, see [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md).

## Example: Working with a Timer

The following steps start an asynchronous timer and wait for the timer to expire. The complete example follows.

> [!WARNING]
> Although you typically use the Windows Runtime C++ Template Library in a Universal Windows Platform (UWP) app, this example uses a console app for illustration. Functions such as `wprintf_s` are not available from a UWP app. For more information about the types and functions that you can use in a UWP app, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) and [Win32 and COM for UWP apps](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

1. Include (`#include`) any required Windows Runtime, Windows Runtime C++ Template Library, or C++ Standard Library headers.

   [!code-cpp[wrl-consume-async#2](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_1.cpp)]

   `Windows.System.Threading.h` declares the types that are required to use an asynchronous timer.

   We recommend that you utilize the `using namespace` directive in your .cpp file to make the code more readable.

2. Initialize the Windows Runtime.

   [!code-cpp[wrl-consume-async#3](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_2.cpp)]

3. Create an activation factory for the `ABI::Windows::System::Threading::IThreadPoolTimer` interface.

   [!code-cpp[wrl-consume-async#4](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_3.cpp)]

   The Windows Runtime uses fully-qualified names to identify types. The `RuntimeClass_Windows_System_Threading_ThreadPoolTimer` parameter is a string that's provided by the Windows Runtime and contains the required runtime class name.

4. Create an [Event](event-class-wrl.md) object that synchronizes the timer callback to the main app.

   [!code-cpp[wrl-consume-async#5](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_4.cpp)]

   > [!NOTE]
   > This event is for demonstration only as part of a console app. This example uses the event to ensure that an async operation completes before the app exits. In most apps, you typically don’t wait for async operations to complete.

5. Create an `IThreadPoolTimer` object that expires after two seconds. Use the `Callback` function to create the event handler (an `ABI::Windows::System::Threading::ITimerElapsedHandler` object).

   [!code-cpp[wrl-consume-async#6](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_5.cpp)]

6. Print a message to the console and wait for the timer callback to complete. All `ComPtr` and RAII objects leave scope and are released automatically.

   [!code-cpp[wrl-consume-async#7](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_6.cpp)]

Here is the complete example:

[!code-cpp[wrl-consume-async#1](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_7.cpp)]

### Compiling the Code

To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `wrl-consume-async.cpp` and then run the following command in a Visual Studio Command Prompt window.

`cl.exe wrl-consume-async.cpp runtimeobject.lib`

## Example: Working with a Background Thread

The following steps start a worker thread and define the action that's performed by that thread. The complete example follows.

> [!TIP]
> This example demonstrates how to work with the `ABI::Windows::Foundation::IAsyncAction` interface. You can apply this pattern to any interface that implements `IAsyncInfo`: `IAsyncAction`, `IAsyncActionWithProgress`, `IAsyncOperation`, and `IAsyncOperationWithProgress`.

1. Include (`#include`) any required Windows Runtime, Windows Runtime C++ Template Library, or C++ Standard Library headers.

   [!code-cpp[wrl-consume-asyncOp#2](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_8.cpp)]

   Windows.System.Threading.h declares the types that are required to use a worker thread.

   We recommend that you use the `using namespace` directive in your .cpp file to make the code more readable.

2. Initialize the Windows Runtime.

   [!code-cpp[wrl-consume-asyncOp#3](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_9.cpp)]

3. Create an activation factory for the `ABI::Windows::System::Threading::IThreadPoolStatics` interface.

   [!code-cpp[wrl-consume-asyncOp#4](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_10.cpp)]

4. Create an [Event](event-class-wrl.md) object that synchronizes completion of the worker thread to the main app.

   [!code-cpp[wrl-consume-asyncOp#5](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_11.cpp)]

   > [!NOTE]
   > This event is for demonstration only as part of a console app. This example uses the event to ensure that an async operation completes before the app exits. In most apps, you typically don’t wait for async operations to complete.

5. Call the `IThreadPoolStatics::RunAsync` method to create a worker thread. Use the `Callback` function to define the action.

   [!code-cpp[wrl-consume-asyncOp#6](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_12.cpp)]

   The `IsPrime` function is defined in the complete example that follows.

6. Print a message to the console and wait for the thread to complete. All `ComPtr` and RAII objects leave scope and are released automatically.

   [!code-cpp[wrl-consume-asyncOp#7](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_13.cpp)]

Here is the complete example:

[!code-cpp[wrl-consume-asyncOp#1](../codesnippet/CPP/how-to-complete-asynchronous-operations-using-wrl_14.cpp)]

### Compiling the Code

To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `wrl-consume-asyncOp.cpp` and then run the following command in a **Visual Studio Command Prompt** window.

`cl.exe wrl-consume-asyncOp.cpp runtimeobject.lib`

## See also

[Windows Runtime C++ Template Library (WRL)](windows-runtime-cpp-template-library-wrl.md)
