---
title: "Adding Functionality with Code Wizards (C++)"
ms.date: "10/03/2018"
f1_keywords: ["vc.codewiz.classes"]
helpviewer_keywords: ["code wizards [C++]", "wizards [C++], code", "Visual C++ projects, adding functionality", "projects [C++], adding functionality", "class wizards [C++]"]
ms.assetid: 6afb7ef9-7056-423d-b244-91bb4236d1d7
---
# Adding Functionality with Code Wizards (C++)

Once you have created a project, you will want to change or add to that project's functionality. Such tasks include creating new classes, adding new member functions and variables, and adding Automation methods and properties. The code wizards are designed to let you do all these things.

> [!WARNING]
> Several ATL and MFC code wizards are now deprecated and will be removed in a future version of Visual Studio. These wizards are rarely used. General support for ATL and MFC is not impacted by the removal of these wizards. If you would like to share your feedback about this deprecation, please complete [this survey](https://www.surveymonkey.com/r/QDWKKCN). Your feedback matters to us.

> [!NOTE]
>  You can now add message handlers and map messages to them and override MFC virtual functions using the [Properties window](/visualstudio/ide/reference/properties-window).

## Accessing Visual C++ Code Wizards

There are three locations where you can access Visual C++ code wizards:

- On the **Project** menu, the **Add New Item** command allows you to bring up the `Add New Item` dialog box, which helps you to add new files to your project. The **Add Class** command displays the [Add Class](../ide/add-class-dialog-box.md) dialog box, which in turn open wizards for each of the class types you can add to your project. The **Add Resource** command displays the [Add Resource](../windows/add-resource-dialog-box.md) dialog box, from which you can create or select a resource to add to your project.

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
   |Class View|The code wizards available from Class View depend on where your cursor focus is when you right click an item. If the **Add** option does not appear when you right click an item, then move your cursor up one level in the class tree and try again. The code wizards will always place the additional code in the appropriate place in the development tree, no matter where your cursor is. Code wizards available from Class View include:<br /><br />- [Add Member Function](../ide/adding-a-member-function-visual-cpp.md).<br />- [Add Member Variable](../ide/adding-a-member-variable-visual-cpp.md).<br />- [Add Class](../ide/adding-a-class-visual-cpp.md).<br />- [Implement Interface](../ide/implement-interface-wizard.md) (from a control class only)<br />- [Add Connection Point](../ide/implement-connection-point-wizard.md) (ATL class only)<br />- [Add Method](../ide/add-method-wizard.md) (from an interface only)<br />- [Add Property](../ide/names-add-property-wizard.md) (from an interface only)<br />- [Add Event](../ide/add-event-wizard.md) (from a control class only)<br /><br />The Add Class selection opens the **Add Class** dialog box, which gives you access to all the new Add Class code wizards.|

## See Also

[Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)<br>
[Navigating the Class Structure](../ide/navigating-the-class-structure-visual-cpp.md)<br>
[Creating Desktop Projects By Using Application Wizards](../build/creating-desktop-projects-by-using-application-wizards.md)<br>
[Visual C++ Project Types](../build/visual-cpp-project-types.md)<br>
[File Types Created for Visual C++ Projects](../build/reference/file-types-created-for-visual-cpp-projects.md)
