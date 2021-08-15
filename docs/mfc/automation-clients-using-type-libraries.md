---
description: "Learn more about: Automation Clients: Using Type Libraries"
title: "Automation Clients: Using Type Libraries"
ms.date: "11/04/2016"
f1_keywords: ["MkTypLib"]
helpviewer_keywords: ["clients, Automation", "dispatch class [MFC]", "Automation clients, type libraries", "type libraries, Automation clients", "ODL (Object Description Language)", "ODL files", "classes [MFC], dispatch", "MkTypLib tool", ".odl files"]
ms.assetid: d405bc47-118d-4786-b371-920d035b2047
---
# Automation Clients: Using Type Libraries

Automation clients must have information about server objects' properties and methods if the clients are to manipulate the servers' objects. Properties have data types; methods often return values and accept parameters. The client requires information about the data types of all of these in order to statically bind to the server object type.

This type information can be made known in several ways. The recommended way is to create a type library.

For information on [MkTypLib](/windows/win32/Midl/differences-between-midl-and-mktyplib), see the Windows SDK.

Visual C++ can read a type-library file and create a dispatch class derived from [COleDispatchDriver](reference/coledispatchdriver-class.md). An object of that class has properties and operations duplicating those of the server object. Your application calls this object's properties and operations, and functionality inherited from `COleDispatchDriver` routes these calls to the OLE system, which in turn routes them to the server object.

Visual C++ automatically maintains this type-library file for you if you chose to include Automation when the project was created. As part of each build, the .tlb file will be built with MkTypLib.

### To create a dispatch class from a type-library (.tlb) file

1. In either Class View or Solution Explorer, right-click the project and click **Add** and then click **Add Class** on the shortcut menu.

1. In the **Add Class** dialog box, select the **Visual C++/MFC** folder in the left pane. Select the **MFC Class From TypeLib** icon from the right pane and click **Open**.

1. In the **Add Class From Typelib Wizard** dialog box, select a type library from the **Available type libraries** drop-down list. The **Interfaces** box displays the interfaces available for the selected type library.

    > [!NOTE]
    >  You can select interfaces from more than one type library.

   To select interfaces, double-click them or click the **Add** button. When you do so, names for the dispatch classes will appear in the **Generated classes** box. You can edit the class names in the `Class` box.

   The **File** box displays the file in which the class will be declared. (you can edit this file name as well). You can also use the browse button to select other files, if you prefer to have the header and implementation information written in existing files or in a directory other than the project directory.

    > [!NOTE]
    >  All the dispatch classes for the selected interfaces will be put into the file specified here. If you want the interfaces to be declared in separate headers, you must run this wizard for each header file you want to create.

    > [!NOTE]
    >  Some type library information may be stored in files with .DLL, .OCX, or .OLB file extensions.

1. Click **Finish**.

   The wizard will then write the code for your dispatch classes using the specified class and file names.

## See also

[Automation Clients](automation-clients.md)
