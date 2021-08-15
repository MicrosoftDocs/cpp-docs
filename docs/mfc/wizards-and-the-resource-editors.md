---
description: "Learn more about: Wizards and the Resource Editors"
title: "Wizards and the Resource Editors"
ms.date: "11/04/2016"
helpviewer_keywords: ["application wizards [MFC], and MFC", "MFC, resource editors", "resource editors, MFC", "MFC Application Wizard", "editors [MFC], resource", "wizards [MFC]", "wizards [MFC], MFC programming", "MFC, wizards", "Class View tool, managing Windows messages"]
ms.assetid: f5dd4d13-9dc1-4a49-b6bf-5b3cb45fa8ba
---
# Wizards and the Resource Editors

Visual C++ includes several wizards for use in MFC programming, along with many integrated resource editors. For ActiveX controls programming, the [ActiveX Control Wizard](../mfc/reference/mfc-activex-control-wizard.md) serves a purpose much like that of the MFC Application Wizard. While you can write MFC applications without most of these tools, the tools greatly simplify and speed your work.

## <a name="_core_use_appwizard_to_create_an_mfc_application"></a> Use the MFC Application Wizard to Create an MFC Application

Use the [MFC Application Wizard](../mfc/reference/mfc-application-wizard.md) to create an MFC project in Visual C++, which can include OLE and database support. Files in the project contain your application, document, view, and frame-window classes; standard resources, including menus and an optional toolbar; other required Windows files; and optional .rtf files containing standard Windows Help topics that you can revise and augment to create your program's help file.

## <a name="_core_use_classwizard_to_manage_classes_and_windows_messages"></a> Use Class View to Manage Classes and Windows Messages

Class View helps you create handler functions for Windows messages and commands, create and manage classes, create class member variables, create Automation methods and properties, create database classes, and more.

> [!NOTE]
> Class View also helps you to override virtual functions in the MFC classes. Select the class and the virtual function to override. The rest of the process is similar to message handling, as described in the following paragraphs.

Applications running under Windows are [message driven](../mfc/message-handling-and-mapping.md). User actions and other events that occur in the running program cause Windows to send messages to the windows in the program. For example, if the user clicks the mouse in a window, Windows sends a WM_LBUTTONDOWN message when the left mouse button is pressed and a WM_LBUTTONUP message when the button is released. Windows also sends WM_COMMAND messages when the user selects commands from the menu bar.

In the MFC framework, various objects, such as documents, views, frame windows, document templates, and the application object, can "handle" messages. Such an object provides a "handler function" as one of its member functions, and the framework maps the incoming message to its handler.

A large part of your programming task is choosing which messages to map to which objects and then implementing that mapping. To do so, you use Class View and the [Class Wizard](reference/mfc-class-wizard.md).

The [Class Wizard](reference/mfc-class-wizard.md) will create empty message-handler member functions, and you use the source code editor to implement the body of the handler. You can also create or edit classes (including classes of your own, not derived from MFC classes) and their members with Class View. For more information on using Class View and about wizards that add code to a project, see [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md).

## <a name="_core_use_the_resource_editors_to_create_and_edit_resources"></a> Use the Resource Editors to Create and Edit Resources

Use the Visual C++ [resource editors](../windows/resource-editors.md) to create and edit menus, dialog boxes, custom controls, accelerator keys, bitmaps, icons, cursors, strings, and version resources. As of Visual C++ version 4.0, a toolbar editor makes creating toolbars much easier.

To help you even more, the Microsoft Foundation Class Library provides a file called COMMON.RES, which contains "clip art" resources that you can copy from COMMON.RES and paste into your own resource file. COMMON.RES includes toolbar buttons, common cursors, icons, and more. You can use, modify, and redistribute these resources in your application. For more information about COMMON.RES, see the [Clipart sample](../overview/visual-cpp-samples.md).

The MFC Application Wizard, the Visual C++ wizards, resource editors, and the MFC framework do a lot of work for you and make managing your code much easier. The bulk of your application-specific code is in your document and view classes.

## See also

[Using the Classes to Write Applications for Windows](../mfc/using-the-classes-to-write-applications-for-windows.md)
