---
title: "WRL Class Library Project Template"
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
ms.assetid: 628b0852-89e5-44f8-bf58-a09762bda15c
caps.latest.revision: 9
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
# WRL Class Library Project Template
If you use Visual Studio to write a Windows Runtime C++ Template Library (WRL) project, you can greatly simplify your task by downloading the WRL Class Library project template.  
  
> [!NOTE]
>  If you have to manually update the project settings for an existing project, see [DLLs (C++/CX)](http://msdn.microsoft.com/library/windows/apps/hh699881\(v=vs.110\).aspx).  
  
## Download the WRL Project Template  
 Visual Studio doesn't provide a template for WRL projects. Here’s how to download a project template that creates a basic class library for Windows 8.x Store apps with WRL.  
  
#### To download the WRL Project Template  
  
1.  On the menu bar, choose **File**, **New Project**.  
  
2.  In the left pane of the **New Project** dialog box, select **Online**, and then select **Templates**.  
  
3.  In the **Search online templates** box in the upper right corner, type `WRL Class Library`. When the template appears in the search results, choose the **OK** button.  
  
4.  In the **Download and Install** dialog box, if you agree to the licensing terms, choose the **Install** button.  
  
5.  After the template installs, create a project by choosing **File**, **New Project**, and then selecting the `WRLClassLibrary` template. The project creates a DLL.  
  
## Examples that use the project template  
 Read [Walkthrough: Creating a Basic Windows Runtime Component](../VS_visualcpp/Walkthrough--Creating-a-Basic-Windows-Runtime-Component-Using-WRL.md) for an example that uses this template to create a Windows Runtime component.  
  
## What the project template provides  
 The project template provides:  
  
-   an .idl file that declares the MIDL attributes for a basic interface its class implementation. Here’s an example.  
  
     [!CODE [wrl-project-template#1](../CodeSnippet/VS_Snippets_Misc/wrl-project-template#1)]  
  
-   a .cpp file that defines the class implementation. Here’s an example.  
  
     [!CODE [wrl-project-template#2](../CodeSnippet/VS_Snippets_Misc/wrl-project-template#2)]  
  
     The [RuntimeClass](../VS_visualcpp/RuntimeClass-Class.md) base class helps manage the global reference of all objects in the module and declares the methods of the [IUnknown](assetId:///33f1d79a-33fc-4ce5-a372-e08bda378332) and [IInspectable](assetId:///0657e51f-d4c0-46c6-927d-b01e54b6846c) interfaces. The [InspectableClass](../VS_visualcpp/InspectableClass-Macro.md) macro implements `IUnknown` and `IInspectable`. The [ActivatableClass](../VS_visualcpp/ActivatableClass-Macros.md) macro creates a class factory that creates instances of the class.  
  
-   a file named module.cpp that defines the library exports `DllMain`, `DllCanUnloadNow`, `DllGetActivationFactory`, and `DllGetClassObject`.  
  
## See Also  
 [Windows Runtime C++ Template Library (WRL)](../VS_visualcpp/Windows-Runtime-C---Template-Library--WRL-.md)