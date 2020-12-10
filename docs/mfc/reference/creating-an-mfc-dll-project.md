---
description: "Learn more about: Creating an MFC DLL Project"
title: "Creating an MFC DLL Project"
ms.date: "08/19/2019"
f1_keywords: ["vc.appwiz.mfcdll.project"]
helpviewer_keywords: ["MFC DLLs [MFC], creating projects", "DLLs [MFC], MFC", "projects [MFC], creating", "DLLs [MFC], creating"]
ms.assetid: 05540b93-4781-4a90-aadf-55158313f5b2
---
# Creating an MFC DLL Project

An MFC DLL is a binary file that acts as a shared library of functions that can be used simultaneously by multiple applications. The easiest way to create an MFC DLL project is to use the MFC DLL Wizard.

> [!NOTE]
> The appearance of features in the IDE can depend on your active settings or edition, and might differ from those described in Help. To change your settings, choose **Import and Export Settings** on the **Tools** menu. For more information, see [Personalize the Visual Studio IDE](/visualstudio/ide/personalizing-the-visual-studio-ide).

### To create an MFC DLL Project using the MFC DLL Wizard

1. Follow the instructions in the help topic [Creating an MFC Application](creating-an-mfc-application.md) but choose **MFC Dynamic Link Library** or **MFC DLL** from the list of available templates.

1. Define your application settings using the [application settings](../../mfc/reference/application-settings-mfc-dll-wizard.md) page of the [MFC DLL Wizard](../../mfc/reference/mfc-dll-wizard.md).

    > [!NOTE]
    >  Skip this step to keep the wizard default settings.

1. Click **Finish** to close the wizard and open your new project in **Solution Explorer**.

Once your project is created, you can view the files created in **Solution Explorer**. For more information about the files the wizard creates for your project, see the project-generated file ReadMe.txt. For more information about the file types, see [File Types Created for Visual Studio C++ projects](../../build/reference/file-types-created-for-visual-cpp-projects.md).

## See also

[C++ project types in Visual Studio](/visualstudio/debugger/debugging-preparation-visual-cpp-project-types)<br/>
[Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Property Pages](../../build/reference/property-pages-visual-cpp.md)
