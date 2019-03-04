---
title: "How to: Create CLR Console Applications (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["console applications, templates", "CLR console applications, project template"]
ms.assetid: e89bce3c-706f-4ae0-8a90-cb1a0f674e70
---
# How to: Create CLR Console Applications (C++/CLI)

You can use the Console Application template to create a console app project that already has essential project references and files.

Typically, a console app is compiled into a stand-alone executable file but doesn't have a graphical user interface. A user runs the console app at a command prompt and uses the command prompt to issue instructions to the running app. Also at the command prompt, the app provides output information. The immediacy of a console app makes it a great way to learn programming techniques without concern for implementing a user interface.

When you use the Console Application template to create a project, it automatically adds these references and files:

- References to these .NET Framework namespaces:

   - <xref:System.AppDomainManager>—Contains fundamental classes and base classes that define commonly used values and reference data types, events and event handlers, interfaces, attributes, and processing exceptions.

   - mscorlib—The assembly DLL that supports .NET Framework development.

- Source files:

   - Console (.cpp file)—The main source file and entry point into the app that you just created. It identifies the project .dll file and the project namespace. Provide your own code in this file.

   - AssemblyInfo.cpp—Contains attributes, files, resources, types, versioning information, signing information, and so on that you can use to modify the project's assembly metadata. For more information, see [Assembly Contents](/dotnet/framework/app-domains/assembly-contents).

   - Stdafx.cpp—Used to build a precompiled header file that's named Win32.pch and a precompiled types file that's named StdAfx.obj.

- Header files:

   - Stdafx.h—Used to build a precompiled header file that's named Win32.pch and a precompiled types file that's named StdAfx.obj.

   - resource.h—A generated include file for app.rc.

- Resource files:

   - app.rc—The resource script file of a program.

   - app.ico—The icon file of a program.

- ReadMe.txt—Describes the files in the project.

## To create a common language runtime (CLR) console app project

1. On the menu bar, choose **File**, **New**, **Project**.

1. In the **New Project** dialog box, under **Installed Templates**, select the **Visual C++** node, select the **CLR** node, and then select the Console Application template.

1. In the **Name** box, enter a unique name for your application.

   You can specify other project and solution settings, but they are not required.

1. Choose the **OK** button.

## See Also

[CLR Projects](../ide/files-created-for-clr-projects.md)

