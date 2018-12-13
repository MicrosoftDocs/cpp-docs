---
title: "Creating a Resource-Only DLL (C++) - Visual Studio"
ms.date: "12/14/2018"
helpviewer_keywords: ["resource-only DLLs [C++], creating", "DLLs [C++], creating"]
ms.assetid: e6b1d4da-7275-467f-a58c-a0a8a5835199
---
# Creating a Resource-Only DLL

A resource-only DLL is a DLL that contains nothing but resources, such as icons, bitmaps, strings, and dialog boxes. Using a resource-only DLL is a good way to share the same set of resources among multiple programs. It is also a good way to provide an application with resources localized for multiple languages (see [Localized Resources in MFC Applications: Satellite DLLs](localized-resources-in-mfc-applications-satellite-dlls.md)).

To create a resource-only DLL, you create a new Win32 DLL (non-MFC) project and add your resources to the project.

- Select Win32 Project in the **New Project** dialog box and specify a DLL project type in the Win32 Project Wizard.

- Create a new resource script that contains the resources (such as a string or a menu) for the DLL and save the .rc file.

- On the **Project** menu, click **Add Existing Item**, and then insert the new .rc file into the project.

- Specify the [/NOENTRY](reference/noentry-no-entry-point.md) linker option. /NOENTRY prevents the linker from linking a reference to `_main` into the DLL; this option is required to create a resource-only DLL.

- Build the DLL.

The application that uses the resource-only DLL should call [LoadLibrary](loadlibrary-and-afxloadlibrary.md) to explicitly link to the DLL. To access the resources, call the generic functions `FindResource` and `LoadResource`, which work on any kind of resource, or call one of the following resource-specific functions:

- `FormatMessage`

- `LoadAccelerators`

- `LoadBitmap`

- `LoadCursor`

- `LoadIcon`

- `LoadMenu`

- `LoadString`

The application should call `FreeLibrary` when it is finished using the resources.

## See Also

[Working with Resource Files](../windows/working-with-resource-files.md)<br/>
[DLLs in Visual C++](dlls-in-visual-cpp.md)