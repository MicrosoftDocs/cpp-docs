---
title: "How to: Activate and Use a Windows Runtime Component Using WRL | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 54828f02-6af3-45d1-b965-d0104442f8d5
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Activate and Use a Windows Runtime Component Using WRL
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Activate and Use a Windows Runtime Component Using WRL](https://docs.microsoft.com/cpp/windows/how-to-activate-and-use-a-windows-runtime-component-using-wrl).  
  
  
This document shows how to use the [!INCLUDE[cppwrl](../includes/cppwrl-md.md)] ([!INCLUDE[cppwrl_short](../includes/cppwrl-short-md.md)]) to initialize the [!INCLUDE[wrt](../includes/wrt-md.md)] and how to activate and use a [!INCLUDE[wrt](../includes/wrt-md.md)] component.  
  
> [!NOTE]
>  This example activates a built-in [!INCLUDE[wrt](../includes/wrt-md.md)] component. To learn how to create your own component that you can activate in a similar manner, see [Walkthrough: Creating a Basic Windows Runtime Component](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md).  
  
 To use a component, you must acquire an interface pointer to the type that is implemented by the component. And because the underlying technology of the [!INCLUDE[wrt](../includes/wrt-md.md)] is the Component Object Model (COM), you must follow COM rules to maintain an instance of the type. For example, you must maintain the *reference count* that determines when the type is deleted from memory.  
  
 To simplify the use of the [!INCLUDE[wrt](../includes/wrt-md.md)], [!INCLUDE[cppwrl_short](../includes/cppwrl-short-md.md)] provides the smart pointer template, [ComPtr\<T>](../windows/comptr-class.md), that automatically performs reference counting. When you declare a variable, specify `ComPtr<`*interface-name*`>` *identifier*. To access an interface member, apply the arrow member-access operator (`->`) to the identifier.  
  
> [!IMPORTANT]
>  When you call an interface function, always test the `HRESULT` return value.  
  
## Activating and Using a Windows Runtime Component  
 The following steps use the `Windows::Foundation::IUriRuntimeClass` interface to demonstrate how to create an activation factory for a [!INCLUDE[wrt](../includes/wrt-md.md)] component, create an instance of that component, and retrieve a property value. They also show how to initialize the [!INCLUDE[wrt](../includes/wrt-md.md)]. The complete example follows.  
  
> [!IMPORTANT]
>  Although you typically use the [!INCLUDE[cppwrl_short](../includes/cppwrl-short-md.md)] in a [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app, this example uses a console app for illustration. Functions such as `wprintf_s` are not available from a [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app. For more information about the types and functions that you can use in a [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx) and [Win32 and COM for Windows Store apps](http://msdn.microsoft.com/library/windows/apps/br205757.aspx).  
  
#### To activate and use a Windows Runtime component  
  
1.  Include (`#include`) any required [!INCLUDE[wrt](../includes/wrt-md.md)], [!INCLUDE[cppwrl_short](../includes/cppwrl-short-md.md)], or standard C++ library headers.  
  
     [!code-cpp[wrl-consume-component#2](../snippets/cpp/VS_Snippets_Misc/wrl-consume-component/cpp/wrl-consume-component.cpp#2)]  
  
     We recommend that you utilize the `using namespace` directive in your .cpp file to make the code more readable.  
  
2.  Initialize the thread in which the app executes. Every app must initialize its thread and threading model. This example uses the [Microsoft::WRL::Wrappers::RoInitializeWrapper](../windows/roinitializewrapper-class.md) class to initialize the [!INCLUDE[wrt](../includes/wrt-md.md)] and specifies [RO_INIT_MULTITHREADED](http://msdn.microsoft.com/library/windows/apps/br224661.aspx) as the threading model. The `RoInitializeWrapper` class calls `Windows::Foundation::Initialize` at construction, and `Windows::Foundation::Uninitialize` when it is destroyed.  
  
     [!code-cpp[wrl-consume-component#3](../snippets/cpp/VS_Snippets_Misc/wrl-consume-component/cpp/wrl-consume-component.cpp#3)]  
  
     In the second statement, the [RoInitializeWrapper::HRESULT](../windows/roinitializewrapper-hresult-parens-operator.md) operator returns the `HRESULT` from the call to `Windows::Foundation::Initialize`.  
  
3.  Create an *activation factory* for the `ABI::Windows::Foundation::IUriRuntimeClassFactory` interface.  
  
     [!code-cpp[wrl-consume-component#4](../snippets/cpp/VS_Snippets_Misc/wrl-consume-component/cpp/wrl-consume-component.cpp#4)]  
  
     The [!INCLUDE[wrt](../includes/wrt-md.md)] uses fully-qualified names to identify types. The `RuntimeClass_Windows_Foundation_Uri` parameter is a string that's provided by the [!INCLUDE[wrt](../includes/wrt-md.md)] and contains the required runtime class name.  
  
4.  Initialize a [Microsoft::WRL::Wrappers::HString](../windows/hstring-class.md) variable that represents the URI `"http://www.microsoft.com"`.  
  
     [!code-cpp[wrl-consume-component#6](../snippets/cpp/VS_Snippets_Misc/wrl-consume-component/cpp/wrl-consume-component.cpp#6)]  
  
     In the [!INCLUDE[wrt](../includes/wrt-md.md)], you don’t allocate memory for a string that the [!INCLUDE[wrt](../includes/wrt-md.md)] will use. Instead, the [!INCLUDE[wrt](../includes/wrt-md.md)] creates a copy of your string in a buffer that it maintains and uses for operations, and then returns a handle to the buffer that it created.  
  
5.  Use the `IUriRuntimeClassFactory::CreateUri` factory method to create a `ABI::Windows::Foundation::IUriRuntimeClass` object.  
  
     [!code-cpp[wrl-consume-component#7](../snippets/cpp/VS_Snippets_Misc/wrl-consume-component/cpp/wrl-consume-component.cpp#7)]  
  
6.  Call the `IUriRuntimeClass::get_Domain` method to retrieve the value of the `Domain` property.  
  
     [!code-cpp[wrl-consume-component#8](../snippets/cpp/VS_Snippets_Misc/wrl-consume-component/cpp/wrl-consume-component.cpp#8)]  
  
7.  Print the domain name to the console and return. All `ComPtr` and RAII objects leave scope and are released automatically.  
  
     [!code-cpp[wrl-consume-component#9](../snippets/cpp/VS_Snippets_Misc/wrl-consume-component/cpp/wrl-consume-component.cpp#9)]  
  
     The [WindowsGetStringRawBuffer](http://msdn.microsoft.com/library/windows/apps/br224636.aspx) function retrieves the underlying Unicode form of the URI string.  
  
 Here's the complete example:  
  
 [!code-cpp[wrl-consume-component#1](../snippets/cpp/VS_Snippets_Misc/wrl-consume-component/cpp/wrl-consume-component.cpp#1)]  
  
## Compiling the Code  
 To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named `wrl-consume-component.cpp` and then run the following command in a Visual Studio Command Prompt window.  
  
 **cl.exe wrl-consume-component.cpp runtimeobject.lib**  
  
## See Also  
 [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)

