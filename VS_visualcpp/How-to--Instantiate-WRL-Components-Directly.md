---
title: "How to: Instantiate WRL Components Directly"
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
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# How to: Instantiate WRL Components Directly
Learn how to use the Windows Runtime C++ Template Library (WRL) [Microsoft::WRL::Make](../VS_visualcpp/Make-Function.md) and [Microsoft::WRL::Details::MakeAndInitialize](../VS_visualcpp/MakeAndInitialize-Function.md) functions to instantiate a component from the module that defines it.  
  
 By instantiating components directly, you can reduce overhead when you don't need class factories or other mechanisms. You can instantiate a component directly in both Windows 8.x Store apps and in desktop apps.  
  
 To learn how to use WRL to create a basic Windows Runtime component and instantiate it from an external Windows 8.x Store app, see [Walkthrough: Creating a Basic Windows Runtime Component](../VS_visualcpp/Walkthrough--Creating-a-Basic-Windows-Runtime-Component-Using-WRL.md). To learn how to use WRL to create a classic COM component and instantiate it from an external desktop app, see [How to: Create a Classic COM Component](../VS_visualcpp/How-to--Create-a-Classic-COM-Component-Using-WRL.md).  
  
 This document shows two examples. The first example uses the `Make` function to instantiate a component. The second example uses the `MakeAndInitialize` function to instantiate a component that can fail during construction. (Because COM typically uses `HRESULT` values, instead of exceptions, to indicate errors, a COM type typically does not throw from its constructor. `MakeAndInitialize` enables a component to validate its construction arguments through the `RuntimeClassInitialize` method.) Both examples define a basic logger interface and implement that interface by defining a class that writes messages to the console.  
  
> [!IMPORTANT]
>  You can’t use the `new` operator to instantiate WRL components. Therefore, we recommend that you always use `Make` or `MakeAndInitialize` to instantiate a component directly.  
  
### To create and instantiate a basic logger component  
  
1.  In Visual Studio, create a **Win32 Console Application** project. Name the project, for example, `WRLLogger`.  
  
2.  Add a **Midl File (.idl)** file to the project, name the file `ILogger.idl`, and then add this code:  
  
     [!CODE [wrl-logger-make#1](../CodeSnippet/VS_Snippets_Misc/wrl-logger-make#1)]  
  
3.  Use the following code to replace the contents of WRLLogger.cpp.  
  
     [!CODE [wrl-logger-make#2](../CodeSnippet/VS_Snippets_Misc/wrl-logger-make#2)]  
  
### To handle construction failure for the basic logger component  
  
1.  Use the following code to replace the definition of the `CConsoleWriter` class. This version holds a private string member variable and overrides the `RuntimeClass::RuntimeClassInitialize` method. `RuntimeClassInitialize` fails if the call to `SHStrDup` fails.  
  
     [!CODE [wrl-logger-makeandinitialize#1](../CodeSnippet/VS_Snippets_Misc/wrl-logger-makeandinitialize#1)]  
  
2.  Use the following code to replace the definition of `wmain`. This version uses `MakeAndInitialize` to instantiate the `CConsoleWriter` object and checks the `HRESULT` result.  
  
     [!CODE [wrl-logger-makeandinitialize#2](../CodeSnippet/VS_Snippets_Misc/wrl-logger-makeandinitialize#2)]  
  
## See Also  
 [Windows Runtime C++ Template Library (WRL)](../VS_visualcpp/Windows-Runtime-C---Template-Library--WRL-.md)   
 [Microsoft::WRL::Make](../VS_visualcpp/Make-Function.md)   
 [Microsoft::WRL::Details::MakeAndInitialize](../VS_visualcpp/MakeAndInitialize-Function.md)