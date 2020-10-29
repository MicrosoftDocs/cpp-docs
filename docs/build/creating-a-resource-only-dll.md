---
title: "Creating a resource-only DLL"
description: "How to create a resource-only DLL in Visual Studio."
ms.date: "01/27/2020"
helpviewer_keywords: ["resource-only DLLs [C++], creating", "DLLs [C++], creating"]
ms.assetid: e6b1d4da-7275-467f-a58c-a0a8a5835199
no-loc: [noentry]
---
# Creating a resource-only DLL

A resource-only DLL is a DLL that contains nothing but resources, such as icons, bitmaps, strings, and dialog boxes. Using a resource-only DLL is a good way to share the same set of resources among multiple programs. It's also a good way to provide an application with resources localized for multiple languages. For more information, see [Localized resources in MFC applications: Satellite DLLs](localized-resources-in-mfc-applications-satellite-dlls.md).

## Create a resource-only DLL

To create a resource-only DLL, you create a new Windows DLL (non-MFC) project, and add your resources to the project:

::: moniker range="msvc-140"

1. Select **Win32 Project** in the **New Project** dialog box. Enter the project and solution names, and choose **OK**.

1. In the **Win32 Application Wizard**, select **Application Settings**. Choose an **Application type** of **DLL**. Under **Additional options**, select **Empty project**. Choose **Finish** to create your project.

1. Create a new resource script that contains the resources for the DLL (such as a string or a menu). Save the `.rc` file.

1. On the **Project** menu, select **Add Existing Item**, and then insert the new `.rc` file into the project.

1. Specify the [/NOENTRY](reference/noentry-no-entry-point.md) linker option. `/NOENTRY` prevents the linker from linking a reference to `_main` into the DLL; this option is required to create a resource-only DLL.

1. Build the DLL.

::: moniker-end
::: moniker range=">=msvc-150"

1. Select **Windows Desktop Wizard** in the **New Project** dialog box and choose **Next**. In the **Configure your new project** page, enter the project and solution names, and choose **Create**.

1. In the **Windows Desktop Project** dialog box, select an **Application type** of **Dynamic Link Library**. Under **Additional options**, select **Empty project**. Choose **OK** to create your project.

1. Create a new resource script that contains the resources for the DLL (such as a string or a menu). Save the `.rc` file.

1. On the **Project** menu, select **Add Existing Item**, and then insert the new `.rc` file into the project.

1. Specify the [/NOENTRY](reference/noentry-no-entry-point.md) linker option. `/NOENTRY` prevents the linker from linking a reference to `_main` into the DLL; this option is required to create a resource-only DLL.

1. Build the DLL.

::: moniker-end

## Use a resource-only DLL

The application that uses the resource-only DLL should call [LoadLibraryEx](loadlibrary-and-afxloadlibrary.md) or a related function to explicitly link to the DLL. To access the resources, call the generic functions `FindResource` and `LoadResource`, which work on any kind of resource. Or, call one of the following resource-specific functions:

- `FormatMessage`

- `LoadAccelerators`

- `LoadBitmap`

- `LoadCursor`

- `LoadIcon`

- `LoadMenu`

- `LoadString`

The application should call `FreeLibrary` when it's finished using the resources.

## See also

[Working with Resource Files](../windows/working-with-resource-files.md)\
[Create C/C++ DLLs in Visual Studio](dlls-in-visual-cpp.md)
