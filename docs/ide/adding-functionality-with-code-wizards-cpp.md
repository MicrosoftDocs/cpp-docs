---
description: "Learn more about: Adding Functionality with Code Wizards (C++)"
title: "Adding Functionality with Code Wizards (C++)"
ms.date: "05/14/2019"
helpviewer_keywords: ["code wizards [C++]"]
ms.assetid: 6afb7ef9-7056-423d-b244-91bb4236d1d7
---
# Adding Functionality with Code Wizards (C++)

Once you have created a project, you will want to change or add to that project's functionality. Such tasks include creating new classes, adding new member functions and variables, and adding Automation methods and properties. The code wizards are designed to let you do all these things.

> [!NOTE]
> The following rarely-used code wizards are removed in Visual Studio 2019. General support for ATL and MFC is not impacted by the removal of these wizards. Sample code for these technologies is archived at Microsoft Docs and the VCSamples GitHub repository.

- ATL COM+ 1.0 Component Wizard
- ATL Active Server Pages Component Wizard
- ATL OLE DB Provider Wizard
- ATL Property Page Wizard
- ATL OLE DB Consumer Wizard
- MFC ODBC Consumer
- MFC class from ActiveX control
- MFC class from Type Lib.

> [!NOTE]
> You can add message handlers and map messages to them and override MFC virtual functions using the [MFC Class Wizard](../mfc/reference/mfc-class-wizard.md).

## Accessing C++ Code Wizards

There are three locations where you can access C++ code wizards:

- On the **Project** menu, the **Add New Item** command allows you to bring up the `Add New Item` dialog box, which helps you to add new files to your project. The **Add Class** command displays the [Add Class](./adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box, which in turn open wizards for each of the class types you can add to your project. For MFC classes, use the [MFC Class Wizard](../mfc/reference/mfc-class-wizard.md). The **Add Resource** command displays the [Add Resource](../windows/how-to-create-a-resource-script-file.md) dialog box, from which you can create or select a resource to add to your project.

   If you highlight a class or an interface in your project in Class View, the **Project** menu also displays the following commands:

  - **Implement Interface** (from a control class only)

  - **Add Function**

  - **Add Variable**

  - **Add Connection Point** (ATL class only)

  - **Add Method** (from an interface only)

  - **Add Property** (from an interface only)

  - **Add Event** (from a control class only)

- In **Solution Explorer**, right-clicking any folder and clicking **Add** from the shortcut menu allows you to add new or existing files, more folders, items, classes, resources, and Web references to the project.

- From the [Class View window](/visualstudio/ide/viewing-the-structure-of-code), right-clicking the appropriate node and clicking **Add** from the shortcut menu allows you to add functions, variables, classes, properties, methods, events, interfaces, connection points, or other code to your project.

   > [!NOTE]
   > Visual Studio does not provide a wizard to add an interface to a project. You can add an interface to an ATL project or to an [Adding ATL Support to Your MFC Project](../mfc/reference/adding-atl-support-to-your-mfc-project.md) by adding a simple object using the [ATL Simple Object Wizard](../atl/reference/atl-simple-object-wizard.md). Alternately, open the project's .idl file and create the interface by typing:

    ```IDL
    interface IMyInterface {
    };
    ```

   See [Implementing an Interface](../ide/implementing-an-interface-visual-cpp.md) and [Adding Objects and Controls to an ATL Project](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) for more information.

   |Access code wizard from|Description|
   |-----------------------------|-----------------|
   |Add New Item|The Add New Item code wizards add source files to your project. If necessary, additional directories are created to contain the files where the project build engine expects to find them. Code wizards available from the Add Item icon include:<br /><br />- Add C++ source files (.cpp, .h, .idl, .rc, .srf, .def, .rgs).<br />- Add Web development files (.html, .asp, .css, .xml).<br />- Add utility and resource files (.bmp, .cur, .ico, .rct, .sql, .txt).<br /><br />These code wizards generally do not ask you for any information but add a file to your development tree. You may rename the file in the property window.|
   |Solution Explorer|The code wizards available from Solution Explorer depend on where your cursor focus is when you right-click an item. If the **Add** option does not appear when you right-click an item, then move your cursor up one level in the development tree and try again. The code wizards will always place the additional code in the appropriate place in the development tree, no matter where your cursor is. Code wizards available from Solution Explorer include:<br /><br />- Add Class (opens the **Add Class** dialog box containing the new code wizards).<br />- Add Resource (New, Import, or Custom).<br />- Add Web Reference.|
   |Class View|The code wizards available from Class View depend on where your cursor focus is when you right click an item. If the **Add** option does not appear when you right click an item, then move your cursor up one level in the class tree and try again. The code wizards will always place the additional code in the appropriate place in the development tree, no matter where your cursor is. Code wizards available from Class View include:<br /><br />- [Add Member Function](../ide/adding-a-member-function-visual-cpp.md).<br />- [Add Member Variable](../ide/adding-a-member-variable-visual-cpp.md).<br />- [Add Class](../ide/adding-a-class-visual-cpp.md).<br />- [Implement Interface](./implementing-an-interface-visual-cpp.md#implement-interface-wizard) (from a control class only)<br />- [Add Connection Point](./implementing-a-connection-point-visual-cpp.md#implement-connection-point-wizard) (ATL class only)<br />- [Add Method](./adding-a-method-visual-cpp.md#add-method-wizard) (from an interface only)<br />- [Add Property](./adding-a-property-visual-cpp.md#names-add-property-wizard) (from an interface only)<br />- [Add Event](./adding-an-event-visual-cpp.md#add-event-wizard) (from a control class only)<br /><br />The Add Class selection opens the **Add Class** dialog box, which gives you access to all the new Add Class code wizards.|

## See also

[Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)<br>
[Navigate your C++ code base in Visual Studio](../ide/navigate-code-cpp.md)<br>
[C++ project types in Visual Studio](../build/reference/visual-cpp-project-types.md)<br>
[File Types Created for Visual Studio C++ projects](../build/reference/file-types-created-for-visual-cpp-projects.md)
