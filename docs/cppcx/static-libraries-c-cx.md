---
description: "Learn more about: Static libraries (C++/CX)"
title: "Static libraries (C++/CX)"
ms.date: "02/03/2017"
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
---
# Static libraries (C++/CX)

A static library that's used in a Universal Windows Platform (UWP) app can contain ISO-standard C++ code, including STL types, and also calls to Win32 APIs that are not excluded from the Windows Runtime app platform. A static library consumes Windows Runtime components and may create Windows Runtime components with certain restrictions.

## Creating static libraries

Instructions for creating a new project vary depending on which version of Visual Studio you have installed. To see the documentation for your preferred version of Visual Studio, use the **Version** selector control. It's found at the top of the table of contents on this page.

::: moniker range="msvc-160"

### To create a UWP static library in Visual Studio 2019

1. On the menu bar, choose **File** > **New** > **Project** to open the **Create a New Project** dialog box.

1. At the top of the dialog, set  **Language** to **C++**, set **Platform** to **Windows**, and set **Project type** to **UWP**.

1. From the filtered list of project types, choose **Static Library (Universal Windows - C++/CX)** then choose **Next**. In the next page, give the project a name, and specify the project location if desired.

1. Choose the **Create** button to create the project.

::: moniker-end

::: moniker range="<=msvc-150"

### To create a UWP static library in Visual Studio 2017 or Visual Studio 2015

1. On the menu bar, choose **File** > **New** > **Project**. Under **Visual C++** > **Windows Universal** choose **Static Library (Universal Windows)**.

1. In **Solution Explorer**, open the shortcut menu for the project and then choose **Properties**. In the **Properties** dialog box, on the **Configuration Properties** > **C/C++** page, set **Consume Windows Runtime Extension** to **Yes (/ZW)**.

::: moniker-end

When you compile a new static library, if you make a call to a Win32 API that's excluded for UWP apps, the compiler will raise error C3861, "Identifier not found." To look for an alternative method that's supported for the Windows Runtime, see [Alternatives to Windows APIs in UWP apps](/uwp/win32-and-com/alternatives-to-windows-apis-uwp).

If you add a C++ static library project to a UWP app solution, you might have to update the library project’s property settings so that the UWP support property is set to **Yes**. Without this setting, the code builds and links, but an error occurs when you attempt to verify the app for the Microsoft Store. The static lib should be compiled with the same compiler settings as the project that consumes it.

If you consume a static library that creates public `ref` classes, public interface classes, or public value classes, the linker raises this warning:

> **warning LNK4264:** archiving object file compiled with /ZW into a static library; note that when authoring Windows Runtime types it is not recommended to link with a static library that contains Windows Runtime metadata.

You can safely ignore the warning only if the static library is not producing Windows Runtime components that are consumed outside the library itself. If the library doesn’t consume a component that it defines, then the linker can optimize away the implementation even though the public metadata contains the type information. This means that public components in a static library will compile but will not activate at run time. For this reason, any Windows Runtime component that's intended for consumption by other components or apps must be implemented in a dynamic-link library (DLL).

## See also

[Threading and Marshaling](../cppcx/threading-and-marshaling-c-cx.md)
