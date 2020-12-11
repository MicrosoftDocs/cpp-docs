---
description: "Learn more about: DLLs (C++/CX)"
title: "DLLs (C++/CX)"
ms.date: "02/06/2018"
ms.assetid: 5b8bcc57-64dd-4c54-9f24-26a25bd5dddd
---
# DLLs (C++/CX)

You can use Visual Studio to create either a standard Win32 DLL or a Windows Runtime component DLL that can be consumed by Universal Windows Platform (UWP) apps. A standard DLL that was created by using a version of Visual Studio or the Microsoft C++ compiler that's earlier than Visual Studio 2012 may not load correctly in a UWP app and may not pass the app verification test in the Microsoft Store.

## Windows Runtime component DLLs

In almost all cases, when you want to create a DLL for use in a UWP app, create it as a Windows Runtime component by using the project template of that name. You can create a Windows Runtime component project for DLLs that have public or private Windows Runtime types. A Windows Runtime component can be accessed from apps that are written in any Windows Runtime-compatible language. By default, the compiler settings for a Windows Runtime component project use the **/ZW** switch. A .winmd file must have the same name that the root namespace has. For example, a class that's named A.B.C.MyClass can be instantiated only if it's defined in a metadata file that's named A.winmd or A.B.winmd or A.B.C.winmd. The name of the DLL is not required to match the .winmd file name.

For more information, see [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

### To reference a third-party Windows Runtime component binary in your project

1. Open the shortcut menu for the project that will use the DLL and then choose **Properties**. On the **Common Properties** page, choose the **Add New Reference** button.

1. A Windows Runtime component consists of a DLL file and a .winmd file that contains the metadata. Typically, these files are located in the same folder. In the left pane of the **Add Reference** dialog box, choose the **Browse** button and then navigate to the location of the DLL and its .winmd file. For more information, see [Extension SDKs](/visualstudio/extensibility/creating-a-software-development-kit#extension-sdks).

## Standard DLLs

You can create a standard DLL for C++ code that doesn’t consume or produce public Windows Runtime types and consume it from a UWP app. Use the Dynamic-Link Library (DLL) project type when you just want to migrate an existing DLL to compile in this version of Visual Studio but not convert the code to a Windows Runtime Component project. When you use the following steps, the DLL will be deployed alongside your app executable in the .appx package.

### To create a standard DLL in Visual Studio

1. On the menu bar, choose **File**, **New**, **Project**, and then select the **Dynamic Link Library (DLL)** template.

1. Enter a name for the project, and then choose the **OK** button.

1. Add the code. Be sure to use `__declspec(dllexport)` for functions that you intend to export—for example, `__declspec(dllexport) Add(int I, in j);`

1. Add `#include winapifamily.h` to include that header file from the Windows SDK for UWP apps and set the macro `WINAPI_FAMILY=WINAPI_PARTITION_APP`.

### To reference a standard DLL project from the same solution

1. Open the shortcut menu for the project that will use the DLL and then choose **Properties**. On the **Common Properties** page, choose the **Add New Reference** button.

1. In the left pane, select **Solution**, and then select the appropriate check box in the right pane.

1. In your source code files, add a `#include` statement for the DLL header file, as needed.

### To reference a standard DLL binary

1. Copy the DLL file, the .lib file, and the header file, and   paste them in a known location—for example, in your current project folder.

1. Open the shortcut menu for the project that will use the DLL and then choose **Properties**. On the **Configuration Properties**, **Linker**, **Input** page, add the .lib file as a dependency.

1. In your source code files, add a `#include` statement for the DLL header file, as needed.

### To migrate an existing Win32 DLL for UWP app compatibility

1. Create a project of the DLL (Universal Windows) type and add your existing source code to it.

1. Add `#include winapifamily.h` to include that header file from the Windows SDK for UWP apps and set the macro `WINAPI_FAMILY=WINAPI_PARTITION_APP`.

1. In your source code files, add a `#include` statement for the DLL header file, as needed.
