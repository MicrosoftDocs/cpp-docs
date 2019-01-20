---
title: "Creating an MFC Application"
ms.date: "11/04/2016"
helpviewer_keywords: ["applications [MFC]", "MFC, creating applications", "MFC applications"]
ms.assetid: b8b8aa08-9c49-404c-8078-b42079ac18f0
---
# Creating an MFC Application

An MFC application is an executable application for Windows that is based on the Microsoft Foundation Class (MFC) Library. The easiest way to create an MFC application is to use the MFC Application Wizard.

> [!IMPORTANT]
>  MFC projects are not supported in Visual Studio Express editions.

MFC executables generally fall into five types: standard Windows applications, dialog boxes, forms-based applications, Explorer-style applications, and Web browser-style applications. For more information, see:

- [Using the Classes to Write Windows Applications](../../mfc/using-the-classes-to-write-applications-for-windows.md)

- [Creating and Displaying Dialog Boxes](../../mfc/creating-and-displaying-dialog-boxes.md)

- [Creating a Forms-Based MFC Application](../../mfc/reference/creating-a-forms-based-mfc-application.md)

- [Creating a File Explorer-Style MFC Application](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)

- [Creating a Web Browser-Style MFC Application](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)

The MFC Application Wizard generates the appropriate classes and files for any of these types of applications, depending on the options you select in the wizard.

### To create an MFC application using the MFC Application Wizard

1. Follow the instructions in the help topic [Creating a Project with a Visual C++ Application Wizard](../../ide/creating-desktop-projects-by-using-application-wizards.md).

1. In the **New Project** dialog box, select **MFC Application** in the Templates pane to open the wizard.

1. Define your application settings using the [MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md).

    > [!NOTE]
    >  Skip this step to keep the wizard default settings.

1. Click **Finish** to close the wizard and open your new project in the development environment.

Once your project is created, you can view the files created in **Solution Explorer**. For more information about the files the wizard creates for your project, see the project-generated file ReadMe.txt. For more information about the file types, see [File Types Created for Visual C++ Projects](../../ide/file-types-created-for-visual-cpp-projects.md).

## See also

- [Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)
- [Property Pages](../../ide/property-pages-visual-cpp.md)
