---
title: "How to: Instantiate WRL Components Directly | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Instantiate WRL Components Directly
Learn how to use the [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] ([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]) [Microsoft::WRL::Make](../windows/make-function.md) and [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md) functions to instantiate a component from the module that defines it.  
  
 By instantiating components directly, you can reduce overhead when you don't need class factories or other mechanisms. You can instantiate a component directly in both [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps and in desktop apps.  
  
 To learn how to use [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] to create a basic [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] component and instantiate it from an external [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app, see [Walkthrough: Creating a Basic Windows Runtime Component](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md). To learn how to use [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] to create a classic COM component and instantiate it from an external desktop app, see [How to: Create a Classic COM Component](../windows/how-to-create-a-classic-com-component-using-wrl.md).  
  
 This document shows two examples. The first example uses the `Make` function to instantiate a component. The second example uses the `MakeAndInitialize` function to instantiate a component that can fail during construction. (Because COM typically uses `HRESULT` values, instead of exceptions, to indicate errors, a COM type typically does not throw from its constructor. `MakeAndInitialize` enables a component to validate its construction arguments through the `RuntimeClassInitialize` method.) Both examples define a basic logger interface and implement that interface by defining a class that writes messages to the console.  
  
> [!IMPORTANT]
>  You can’t use the `new` operator to instantiate [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] components. Therefore, we recommend that you always use `Make` or `MakeAndInitialize` to instantiate a component directly.  
  
### To create and instantiate a basic logger component  
  
1.  In Visual Studio, create a **Win32 Console Application** project. Name the project, for example, `WRLLogger`.  
  
2.  Add a **Midl File (.idl)** file to the project, name the file `ILogger.idl`, and then add this code:  
  
     [!code-cpp[wrl-logger-make#1](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_1.idl)]  
  
3.  Use the following code to replace the contents of WRLLogger.cpp.  
  
     [!code-cpp[wrl-logger-make#2](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_2.cpp)]  
  
### To handle construction failure for the basic logger component  
  
1.  Use the following code to replace the definition of the `CConsoleWriter` class. This version holds a private string member variable and overrides the `RuntimeClass::RuntimeClassInitialize` method. `RuntimeClassInitialize` fails if the call to `SHStrDup` fails.  
  
     [!code-cpp[wrl-logger-makeandinitialize#1](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_3.cpp)]  
  
2.  Use the following code to replace the definition of `wmain`. This version uses `MakeAndInitialize` to instantiate the `CConsoleWriter` object and checks the `HRESULT` result.  
  
     [!code-cpp[wrl-logger-makeandinitialize#2](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_4.cpp)]  
  
## See Also  
 [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)   
 [Microsoft::WRL::Make](../windows/make-function.md)   
 [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md)