---
title: "DLLs (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "02/03/2017"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5b8bcc57-64dd-4c54-9f24-26a25bd5dddd
caps.latest.revision: 21
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# DLLs (C++-CX)
You can use Visual Studio to create either a standard Win32 DLL or a [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component DLL that can be consumed by [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] apps. A standard DLL that was created by using a version of Visual Studio or the Visual C++ compiler that's earlier than [!INCLUDE[vs_dev11_long](../cppcx/includes/vs-dev11-long-md.md)] may not load correctly in a [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] app and may not pass the app verification test in the [!INCLUDE[win8_appstore_long](../cppcx/includes/win8-appstore-long-md.md)].  
  
## [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component DLLs  
 In almost all cases, when you want to create a DLL for use in a [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] app, create it as a [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component by using the project template of that name. You can create a [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component project for DLLs that have public or private [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types. A [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component can be accessed from apps that are written in any [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]-compatible language. By default, the compiler settings for a [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component project use the **/ZW** switch. A .winmd file must have the same name that the root namespace has. For example, a class that's named A.B.C.MyClass can be instantiated only if it's defined in a metadata file that's named A.winmd or A.B.winmd or A.B.C.winmd. The name of the DLL is not required to match the .winmd file name.  
  
 For more information, see [Creating Windows Runtime Components in C++](/MicrosoftDocs/windows-uwp/blob/docs/windows-apps-src/winrt-components/creating-windows-runtime-components-in-cpp.md).  
  
#### To reference a third-party [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component binary in your project  
  
1.  Open the shortcut menu for the project that will use the DLL and then choose **Properties**. On the **Common Properties** page, choose the **Add New Reference** button.  
  
2.  A [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] component consists of a DLL file and a .winmd file that contains the metadata. Typically, these files are located in the same folder. In the left pane of the **Add Reference** dialog box, choose the **Browse** button and then navigate to the location of the DLL and its .winmd file. For more information, see [Tutorial: Creating and using extension SDKs](http://msdn.microsoft.com/en-us/001e2fca-3d56-43ab-a5e0-0561d085679f).  
  
## Standard DLLs  
 You can create a standard DLL for C++ code that doesn’t consume or produce public [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types and consume it from a [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] app. Use the [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] DLL project type when you just want to migrate an existing DLL to compile in this version of Visual Studio but not convert the code to a Windows Runtime Component project. When you use the following steps, the DLL will be deployed alongside your app executable in the .appx package.  
  
#### To create a standard DLL in Visual Studio  
  
1.  On the menu bar, choose **File**, **New**, **Project**, and then select the [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] DLL template.  
  
2.  Enter a name for the project, and then choose the **OK** button.  
  
3.  Add the code. Be sure to use `__declspec(dllexport)` for functions that you intend to export—for example, `__declspec(dllexport) Add(int I, in j);`  
  
4.  Add `#include winapifamily.h` to include that header file from the Windows SDK for [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] apps and set the macro `WINAPI_FAMILY=WINAPI_PARTITION_APP`.  
  
#### To reference a standard DLL project from the same solution  
  
1.  Open the shortcut menu for the project that will use the DLL and then choose **Properties**. On the **Common Properties** page, choose the **Add New Reference** button.  
  
2.  In the left pane, select **Solution**, and then select the appropriate check box in the right pane.  
  
3.  In your source code files, add a `#include` statement for the DLL header file, as needed.  
  
#### To reference a standard DLL binary  
  
1.  Copy the DLL file, the .lib file, and the header file, and   paste them in a known location—for example, in your current project folder.  
  
2.  Open the shortcut menu for the project that will use the DLL and then choose **Properties**. On the **Configuration Properties**, **Linker**, **Input** page, add the .lib file as a dependency.  
  
3.  In your source code files, add a `#include` statement for the DLL header file, as needed.  
  
#### To migrate an existing Win32 DLL for [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] app compatibility  
  
1.  Create a project of the [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] DLL type and add your existing source code to it.  
  
2.  Add `#include winapifamily.h` to include that header file from the Windows SDK for [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] apps and set the macro `WINAPI_FAMILY=WINAPI_PARTITION_APP`.  
  
3.  In your source code files, add a `#include` statement for the DLL header file, as needed.  
  
## See Also  
 [(NOTINBUILD) Advanced Topics](http://msdn.microsoft.com/en-us/1ccff0cf-a6cc-47ef-a05f-eba6307b3ced)