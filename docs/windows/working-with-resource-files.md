---
description: "Learn more about: Working with Resource Files"
title: "Working with Resource Files (C++)"
ms.date: "02/14/2019"
helpviewer_keywords: ["resources [C++], about resources", "resources [C++], about resource files", "resource files [C++], about resource files"]
ms.assetid: 2699a539-b369-4b78-80f0-df03eb7b6780
---
# Working with Resource Files

> [!WARNING]
> This section applies to Windows desktop applications written in C++.
>
> For information about resources in Universal Windows Platform apps written in C++, see [Defining App Resources](/windows/uwp/app-resources/), or on adding resources to C++/CLI (managed) projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the .NET Framework Developer's Guide.

Resources can be composed of a wide range of elements, like:

- Interface elements that provide information to the user such as a bitmap, icon, or cursor.
- Custom resources that contain data and application needs.
- Version resources that are used by setup APIs.
- Menu and dialog box resources.

You can add new resources to your project and modify those resources using the appropriate resource editor. Most Visual C++ wizards will automatically generate an .rc file for your project.

> [!NOTE]
> The **Resource Editors** and **Resource View** aren't available in Express editions.

To manually add resource files to managed projects, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). This article includes how to access resources, display static resources, and assign resource strings to properties.

To globalize and localize resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## In This Section

[Resource Files](../windows/resource-files-visual-studio.md)<br/>
Describes resource files and how they're used in Windows desktop applications. Also provides links to articles that describe how to use resource files.

[Resource Identifiers (Symbols)](../windows/symbols-resource-identifiers.md)<br/>
Describes symbols and provides information on using the **Resource Symbols** dialog box to manage symbols in your projects.

[Resource Editors](../windows/resource-editors.md)<br/>
Describes the resource editors provided in Visual Studio and the types of resources you can modify with each editor. Also provides links to detailed information on using each editor.

## Related Sections

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)<br/>
Provides links into the Visual C++ documentation.

[Talk to Us](/visualstudio/ide/talk-to-us)<br/>
Provides links to information on using the documentation set, contacting product support, and employing accessibility features.

## See also

[Windows Desktop Applications](./desktop-applications-visual-cpp.md)<br/>
[Menus and Other Resources](/windows/win32/menurc/resources)
