---
description: "Learn more about: Creating the Project (ATL Tutorial, Part 1)"
title: "Creating the Project (ATL Tutorial, Part 1)"
ms.custom: "get-started-article"
ms.date: "08/19/2019"
ms.assetid: f6b727d1-390a-4b27-b82f-daadcd9fc059
---
# Creating the Project (ATL Tutorial, Part 1)

This tutorial walks you step-by-step through a non-attributed ATL project that creates an ActiveX object that displays a polygon. The object includes options for allowing the user to change the number of sides making up the polygon, and code to refresh the display.

> [!NOTE]
> This tutorial creates the same source code as the Polygon sample. If you want to avoid entering the source code manually, you can download it from the [Polygon sample abstract](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/Polygon). You can then refer to the Polygon source code as you work through the tutorial, or use it to check for errors in your own project.
> To compile, open *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier) and replace:
>
> ```
> #ifndef WINVER
> #define WINVER 0x0400
> #endif
> ```
>
> with
>
> ```
> #ifndef WINVER
> #define WINVER 0x0500
> #define _WIN32_WINNT 0x0500
> #endif
> ```
>
> The compiler will still complain about `regsvr32` not exiting correctly, but you should still have the control's DLL built and available for use.

### To create the initial ATL project using the ATL Project Wizard

1. In Visual Studio 2017 and earlier: **File** > **New** > **Project**. The open the **Visual C++** tab and select **MFC/ATL**. Select **ATL Project**.

   In Visual Studio 2019: Choose **File** > **New** > **Project**, type "atl" in the search box, and choose **ATL Project**.

1. Type *Polygon* as the project name.

    The location for the source code will usually default to \Users\\\<username>\source\repos, and a new folder will be created automatically.

1. In Visual Studio 2019, accept the default values and click **OK**.
   In Visual Studio 2017, click **OK** to open the **ATL Project** wizard. Click **Application Settings** to see the options available. Because this project creates a control, and a control must be an in-process server, leave the **Application type** as a DLL. Click **OK**.

Visual Studio will create the project by generating several files. You can view these files in **Solution Explorer** by expanding the `Polygon` object. The files are listed below.

::: moniker range="<=msvc-150"

|File|Description|
|----------|-----------------|
|Polygon.cpp|Contains the implementation of `DllMain`, `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, and `DllUnregisterServer`. Also contains the object map, which is a list of the ATL objects in your project. This is initially blank.|
|Polygon.def|This module-definition file provides the linker with information about the exports required by your DLL.|
|Polygon.idl|The interface definition language file, which describes the interfaces specific to your objects.|
|Polygon.rgs|This registry script contains information for registering your program's DLL.|
|Polygon.rc|The resource file, which initially contains the version information and a string containing the project name.|
|Resource.h|The header file for the resource file.|
|Polygonps.def|This module definition file provides the linker with information about the exports required by the proxy and stub code that support calls across apartments.|
|stdafx.cpp|The file that will `#include` *stdafx.h*.|
|stdafx.h|The file that will `#include` and precompile the ATL header files.|

::: moniker-end

::: moniker range=">=msvc-160"

|File|Description|
|----------|-----------------|
|Polygon.cpp|Contains the implementation of `DllMain`, `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, and `DllUnregisterServer`. Also contains the object map, which is a list of the ATL objects in your project. This is initially blank.|
|Polygon.def|This module-definition file provides the linker with information about the exports required by your DLL.|
|Polygon.idl|The interface definition language file, which describes the interfaces specific to your objects.|
|Polygon.rgs|This registry script contains information for registering your program's DLL.|
|Polygon.rc|The resource file, which initially contains the version information and a string containing the project name.|
|Resource.h|The header file for the resource file.|
|Polygonps.def|This module definition file provides the linker with information about the exports required by the proxy and stub code that support calls across apartments.|
|pch.cpp|The file that will `#include` *pch.h*.|
|pch.h|The file that will `#include` and precompile the ATL header files.|

::: moniker-end

1. In **Solution Explorer**, right-click the `Polygon` project.

1. On the shortcut menu, click **Properties**.

1. Click on **Linker**. Change the **Per-UserRedirection** option to **Yes**.

1. Click **OK**.

In the next step, you will add a control to your project.

[On to Step 2](../atl/adding-a-control-atl-tutorial-part-2.md)

## See also

[Tutorial](../atl/active-template-library-atl-tutorial.md)
