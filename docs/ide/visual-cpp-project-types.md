---
title: "Visual C++ Project Types | Microsoft Docs"
ms.custom: ""
ms.date: "10/30/2017"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["programs [C++], projects", "project templates [Visual Studio], C++", "TODO comments [C++]", "projects [C++], types", "templates [C++], projects", "applications [C++], projects", "Visual C++ projects, types"]
ms.assetid: 7337987e-1e7b-4120-9a4b-94f0401f15e7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Visual C++ Project Types

You can use a project template to create the basic program structure, menus, toolbars, icons, references, and `#include` statements that are appropriate for the kind of project you want to create. Visual Studio includes several kinds of Visual C++ project templates and provides wizards for many of them so that you can customize your projects as you create them. Immediately after you create a project, you can build it and run the application; it's good practice to build intermittently as you develop your application.

You don't have to use a template to create a project, but in most cases it's more efficient to do so because it's easier to modify the provided project files and structure than it is to create them from scratch.  
  
> [!NOTE]
> You can create a C-language project by using C++ project templates. In the generated project, locate files that have a .cpp file name extension and change it to .c. Then, on the **Project Properties** page for the project (not for the solution), expand **Configuration Properties**, **C/C++** and select **Advanced**. Change the **Compile As** setting to **Compile as C Code (/TC)**.

## Project Templates

The project templates included in Visual Studio depend on the product version and the workloads you've installed. If you've installed the Desktop development with C++ workload, Visual Studio has these Visual C++ project templates.

### Windows Desktop

|Project template|Description|  
|----------------------|-----------------------------| 
|[Windows Console Application](../windows/creating-a-console-application.md)|A project for creating a Windows console application.|
|[Windows Desktop Application](../windows/walkthrough-creating-windows-desktop-applications-cpp.md)|A project for creating a Windows desktop (Win32) application.|
|[Dynamic-Link Library](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)|A project for creating a dynamic-link library (DLL).|
|[Static Library](../windows/walkthrough-creating-and-using-a-static-library-cpp.md)|A project for creating a static library (LIB).|
|Windows Desktop Wizard|A wizard for creating Windows desktop applications and libraries with additional options.|

### General

|Project template|Description|
|----------------------|-----------------------------|
|Empty Project|An empty project for creating an application, library, or DLL. You must add any code or resources required.|
|[Makefile Project](../ide/creating-a-makefile-project.md)|A project for using an external build system.|
|Shared Items Project|A project used for sharing files between multiple projects.|

### ATL

|Project template|Description|
|----------------------|-----------------------------|
|[ATL Project](../atl/reference/creating-an-atl-project.md)|A project that uses the Active Template Library.|

### Test

|Project template|Description|
|----------------------|-----------------------------|
|[Native Unit Test Project](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)|A project that contains native C++ unit tests.|

### MFC

If you add the MFC and ATL support component to your Visual Studio installation, these project templates are added to Visual Studio.

|Project template|Description|
|----------------------|-----------------------------|
|[MFC Application](../mfc/reference/creating-an-mfc-application.md)|A project for creating an application that uses the Microsoft Foundation Class (MFC) Library.|
|[MFC ActiveX Control](../mfc/reference/creating-an-mfc-activex-control.md)|A project for creating an ActiveX control that uses the MFC library.|
|[MFC DLL](../mfc/reference/creating-an-mfc-dll-project.md)|A project for creating a dynamic-link library that uses the MFC library.|

### Windows Universal Apps

If you add the C++ Windows Universal Platform tools component to your Visual Studio installation, these project templates are added to Visual Studio.

For an overview of Windows Universal apps in C++, see [Universal Windows Apps (C++)](../windows/universal-windows-apps-cpp.md).

|Project template|Description|
|----------------------|-----------------------------|
|Blank App|A project for a single-page Universal Windows Platform (UWP) app that has no predefined controls or layout.|
|DirectX 11 App|A project for a Universal Windows Platform app that uses DirectX 11.|
|DirectX 12 App|A project for a Universal Windows Platform app that uses DirectX 12.|
|DirectX 11 and XAML App|A project for a Universal Windows Platform app that uses DirectX 11 and XAML.|
|Unit Test App|A project to create a unit test app for Universal Windows Platform (UWP) apps.|
|DLL|A project for a native dynamic-link library (DLL) that can be used by a Universal Windows Platform app or runtime component.|
|Static Library|A project for a native static link library (LIB) that can be used by a Universal Windows Platform app or runtime component.|
|Windows Runtime Component|A project for a Windows Runtime component that can be used by a Universal Windows Platform app, regardless of the programming language in which the app is written.|
|Windows Application Packaging Project|A project that creates a UWP package that enables a desktop application to be side-loaded or distributed via the Microsoft Store.|

## TODO Comments

Many of the files generated by a project template contain TODO comments to help you identify where you can provide your own source code. For more information about how to add code, see [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md) and [Working with Resource Files](../windows/working-with-resource-files.md).

## See Also

[Creating Desktop Projects By Using Application Wizards](../ide/creating-desktop-projects-by-using-application-wizards.md)   
