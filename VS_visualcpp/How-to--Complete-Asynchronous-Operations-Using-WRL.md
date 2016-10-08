---
title: "How to: Complete Asynchronous Operations Using WRL"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 02173eae-731b-49bc-b412-f1f69388b99d
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# How to: Complete Asynchronous Operations Using WRL
This document shows how to use the Windows Runtime C++ Template Library (WRL) to start asynchronous operations and perform work when the operations complete.  
  
 This document shows two examples. The first example starts an asynchronous timer and waits for the timer to expire. In this example, you specify the asynchronous action when you create the timer object. The second example runs a background worker thread. This example shows how to work with a Windows Runtime method that returns an `IAsyncInfo` interface. The [Callback](../VS_visualcpp/Callback-Function--Windows-Runtime-C---Template-Library-.md) function is an important part of both examples because it enables them to specify an event handler to process the results of the asynchronous operations.  
  
 For a more basic example that creates an instance of that component and retrieves a property value, see [How to: Activate and Use a Windows Runtime Component](../VS_visualcpp/How-to--Activate-and-Use-a-Windows-Runtime-Component-Using-WRL.md).  
  
> [!TIP]
>  These examples use lambda expressions to define the callbacks. You can also use function objects (functors), function pointers, or [std::function](../VS_visualcpp/function-Class.md) objects. For more information about C++ lambda expressions, see [Lambda Expressions](../VS_visualcpp/Lambda-Expressions-in-C--.md).  
  
## Example: Working with a Timer  
 The following steps start an asynchronous timer and wait for the timer to expire. The complete example follows.  
  
> [!WARNING]
>  Although you typically use the WRL in a Windows 8.x Store app, this example uses a console app for illustration. Functions such as `wprintf_s` are not available from a Windows 8.x Store app. For more information about the types and functions that you can use in a Windows 8.x Store app, see [CRT functions not supported by /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx) and [Win32 and COM for Windows Store apps](http://msdn.microsoft.com/library/windows/apps/br205757.aspx).  
  
1.  Include (`#include`) any required Windows Runtime, WRL, or standard C++ library headers.  
  
     [!CODE [wrl-consume-async#2](../CodeSnippet/VS_Snippets_Misc/wrl-consume-async#2)]  
  
     Windows.System.Threading.h declares the types that are required to use an asynchronous timer.  
  
     We recommend that you utilize the `using namespace` directive in your .cpp file to make the code more readable.  
  
2.  Initialize the Windows Runtime.  
  
     [!CODE [wrl-consume-async#3](../CodeSnippet/VS_Snippets_Misc/wrl-consume-async#3)]  
  
3.  Create an activation factory for the `ABI::Windows::System::Threading::IThreadPoolTimer` interface.  
  
     [!CODE [wrl-consume-async#4](../CodeSnippet/VS_Snippets_Misc/wrl-consume-async#4)]  
  
     The Windows Runtime uses fully-qualified names to identify types. The `RuntimeClass_Windows_System_Threading_ThreadPoolTimer` parameter is a string that's provided by the Windows Runtime and contains the required runtime class name.  
  
4.  Create an [Event](../VS_visualcpp/Event-Class--Windows-Runtime-C---Template-Library-.md) object that synchronizes the timer callback to the main app.  
  
     [!CODE [wrl-consume-async#5](../CodeSnippet/VS_Snippets_Misc/wrl-consume-async#5)]  
  
    > [!NOTE]
    >  This event is for demonstration only as part of a console app. This example uses the event to ensure that an async operation completes before the app exits. In most apps, you typically don’t wait for async operations to complete.  
  
5.  Create an `IThreadPoolTimer` object that expires after two seconds. Use the `Callback` function to create the event handler (an `ABI::Windows::System::Threading::ITimerElapsedHandler` object).  
  
     [!CODE [wrl-consume-async#6](../CodeSnippet/VS_Snippets_Misc/wrl-consume-async#6)]  
  
6.  Print a message to the console and wait for the timer callback to complete. All `ComPtr` and RAII objects leave scope and are released automatically.  
  
     [!CODE [wrl-consume-async#7](../CodeSnippet/VS_Snippets_Misc/wrl-consume-async#7)]  
  
 Here is the complete example:  
  
 [!CODE [wrl-consume-async#1](../CodeSnippet/VS_Snippets_Misc/wrl-consume-async#1)]  
  
### Compiling the Code  
 To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `wrl-consume-async.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe wrl-consume-async.cpp runtimeobject.lib**  
  
## Example: Working with a Background Thread  
 The following steps start a worker thread and define the action that's performed by that thread. The complete example follows.  
  
> [!TIP]
>  This example demonstrates how to work with the `ABI::Windows::Foundation::IAsyncAction` interface. You can apply this pattern to any interface that implements `IAsyncInfo`: `IAsyncAction`, `IAsyncActionWithProgress`, `IAsyncOperation`, and`IAsyncOperationWithProgress`.  
  
1.  Include (`#include`) any required Windows Runtime, WRL, or standard C++ library headers.  
  
     [!CODE [wrl-consume-asyncOp#2](../CodeSnippet/VS_Snippets_Misc/wrl-consume-asyncop#2)]  
  
     Windows.System.Threading.h declares the types that are required to use a worker thread.  
  
     We recommend that you use the `using namespace` directive in your .cpp file to make the code more readable.  
  
2.  Initialize the Windows Runtime.  
  
     [!CODE [wrl-consume-asyncOp#3](../CodeSnippet/VS_Snippets_Misc/wrl-consume-asyncop#3)]  
  
3.  Create an activation factory for the `ABI::Windows::System::Threading::IThreadPoolStatics` interface.  
  
     [!CODE [wrl-consume-asyncOp#4](../CodeSnippet/VS_Snippets_Misc/wrl-consume-asyncop#4)]  
  
4.  Create an [Event](../VS_visualcpp/Event-Class--Windows-Runtime-C---Template-Library-.md) object that synchronizes completion of the worker thread to the main app.  
  
     [!CODE [wrl-consume-asyncOp#5](../CodeSnippet/VS_Snippets_Misc/wrl-consume-asyncop#5)]  
  
    > [!NOTE]
    >  This event is for demonstration only as part of a console app. This example uses the event to ensure that an async operation completes before the app exits. In most apps, you typically don’t wait for async operations to complete.  
  
5.  Call the `IThreadPoolStatics::RunAsync` method to create a worker thread. Use the `Callback` function to define the action.  
  
     [!CODE [wrl-consume-asyncOp#6](../CodeSnippet/VS_Snippets_Misc/wrl-consume-asyncop#6)]  
  
     The `IsPrime` function is defined in the complete example that follows.  
  
6.  Print a message to the console and wait for the thread to complete. All `ComPtr` and RAII objects leave scope and are released automatically.  
  
     [!CODE [wrl-consume-asyncOp#7](../CodeSnippet/VS_Snippets_Misc/wrl-consume-asyncop#7)]  
  
 Here is the complete example:  
  
 [!CODE [wrl-consume-asyncOp#1](../CodeSnippet/VS_Snippets_Misc/wrl-consume-asyncop#1)]  
  
### Compiling the Code  
 To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `wrl-consume-asyncOp.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe wrl-consume-asyncOp.cpp runtimeobject.lib**  
  
## See Also  
 [Windows Runtime C++ Template Library (WRL)](../VS_visualcpp/Windows-Runtime-C---Template-Library--WRL-.md)