---
title: "Creating the Project (ATL Tutorial, Part 1)"
ms.custom: "get-started-article"
ms.date: "09/26/2018"
ms.assetid: f6b727d1-390a-4b27-b82f-daadcd9fc059
---
# Creating the Project (ATL Tutorial, Part 1)

This tutorial walks you step-by-step through a nonattributed ATL project that creates an ActiveX object that displays a polygon. The object includes options for allowing the user to change the number of sides making up the polygon, and code to refresh the display.

> [!NOTE]
> ATL and MFC are not generally supported in the Express editions of Visual Studio.

> [!NOTE]
> This tutorial creates the same source code as the Polygon sample. If you want to avoid entering the source code manually, you can download it from the [Polygon sample abstract](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/Polygon). You can then refer to the Polygon source code as you work through the tutorial, or use it to check for errors in your own project.
> To compile, open stdafx.h and replace:
> ```
> #ifndef WINVER
> #define WINVER 0x0400
> #endif
> ```
> with
> ```
> #ifndef WINVER
> #define WINVER 0x0500
> #define _WIN32_WINNT 0x0500
> #endif
> ```
> The compiler will still complain about `regsvr32` not exiting correctly, but you should still have the control's DLL built and available for use.

### To create the initial ATL project using the ATL Project Wizard

1. In the Visual Studio development environment, click **New** on the **File** menu, and then click **Project**.

1. Open the **Visual C++** tab and select **MFC/ATL**. Select **ATL Project**.

1. Type *Polygon* as the project name.

    The location for the source code will usually default to \Users\\\<username>\source\repos, and a new folder will be created automatically.

1. Click **OK** and the **ATL Project** wizard opens.

1. Click **Application Settings** to see the options available.

1. As you are creating a control, and a control must be an in-process server, leave the **Application type** as a DLL.

1. Leave the other options at their default values, and click **OK**.

The **ATL Project Wizard** will create the project by generating several files. You can view these files in **Solution Explorer** by expanding the `Polygon` object. The files are listed below.

|File|Description|
|----------|-----------------|
|Polygon.cpp|Contains the implementation of `DllMain`, `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, and `DllUnregisterServer`. Also contains the object map, which is a list of the ATL objects in your project. This is initially blank.|
|Polygon.def|This module-definition file provides the linker with information about the exports required by your DLL.|
|Polygon.idl|The interface definition language file, which describes the interfaces specific to your objects.|
|Polygon.rgs|This registry script contains information for registering your program's DLL.|
|Polygon.rc|The resource file, which initially contains the version information and a string containing the project name.|
|Resource.h|The header file for the resource file.|
|Polygonps.def|This module definition file provides the linker with information about the exports required by the proxy and stub code that support calls across apartments.|
|stdafx.cpp|The file that will `#include` the ATL implementation files.|
|stdafx.h|The file that will `#include` the ATL header files.|

1. In **Solution Explorer**, right-click the `Polygon` project.

1. On the shortcut menu, click **Properties**.

1. Click on **Linker**. Change the **Per-UserRedirection** option to **Yes**.

1. Click **OK**.

In the next step, you will add a control to your project.

[On to Step 2](../atl/adding-a-control-atl-tutorial-part-2.md)

## See also

[Tutorial](../atl/active-template-library-atl-tutorial.md)
