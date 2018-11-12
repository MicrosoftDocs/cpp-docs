---
title: "Create a COM Interface (Visual C++)"
ms.date: "11/12/2018"
f1_keywords: ["vc.codewiz.com.creating.interfaces", "vc.codewiz.com.editing.interfaces"]
helpviewer_keywords: ["COM interfaces, creating", "methods [C++], adding to COM interfaces", "COM interfaces, editing", "properties [C++], adding to COM interfaces"]
ms.assetid: 1be84d3c-6886-4d1e-8493-56c4d38a96d4
---
# Create a COM Interface (Visual C++)

Visual C++ provides wizards and templates to create projects that use COM defining interfaces and dispinterfaces for your COM objects and automation classes.

You can use these wizards to do the following three common tasks:

- [Adding ATL support to your MFC project](../mfc/reference/adding-atl-support-to-your-mfc-project.md)

  Add ATL support to an MFC application after you create an MFC project using the [MFC application wizard](../mfc/reference/mfc-application-wizard.md) and then running the **Add ATL Support to MFC** code wizard. This support applies only to simple COM objects added to an MFC executable or DLL project. These ATL objects may have more than one interface.

- [Creating an MFC ActiveX control](../mfc/reference/creating-an-mfc-activex-control.md)

  Open the [MFC ActiveX control wizard](../mfc/reference/mfc-activex-control-wizard.md) to create an ActiveX control with a dispinterface and an event map defined in the .idl file and the control class, respectively.

- [Adding an ATL control](../atl/reference/adding-an-atl-control.md)

  Use a combination of the [ATL project wizard](../atl/reference/atl-project-wizard.md) and the [ATL control wizard](../atl/reference/atl-control-wizard.md) to create an ATL ActiveX control.

  You can also add an ATL control to an MFC project to which you've added ATL support, as described above. Additionally, if you select **ATL Control** in the **Add Class** dialog box, and you haven't yet added ATL support to your MFC project, Visual Studio displays a dialog box that confirms adding ATL support to your MFC project.

  This wizard generates IDL source and a COM map in the project classes.

Once you've an ATL project open, the [Add Class](../ide/add-class-dialog-box.md) dialog box gives you the choice of additional wizards and templates to add COM interfaces to your project. The following wizards allow you to establish one or more interfaces for the object:

- [ATL COM+ 1.0 component wizard](../atl/reference/atl-com-plus-1-0-component-wizard.md)
- [ATL simple object wizard](../atl/reference/atl-simple-object-wizard.md)
- [ATL active server page component wizard](../atl/reference/atl-active-server-page-component-wizard.md)
- [ATL control wizard](../atl/reference/atl-control-wizard.md)

Additionally, you can implement new interfaces on your COM control. Just right-click the object's control class in Class View and choose [Implement Interface](../ide/implement-interface-wizard.md).

> [!NOTE]
> Visual Studio doesn't provide a wizard to add an interface to a project. You can add an interface to an ATL project or to an [Adding ATL support to your MFC project](../mfc/reference/adding-atl-support-to-your-mfc-project.md) by adding a simple object using the [ATL simple object wizard](../atl/reference/atl-simple-object-wizard.md). Alternately, open the project's .idl file and create the interface by typing:

```
interface IMyInterface {
};
```

For more information, see [Implementing an interface](../ide/implementing-an-interface-visual-cpp.md) and [Adding objects and controls to an ATL project](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).

Visual C++ provides several ways to view and [edit the COM interfaces](#edit-a-com-interface) defined for your projects. [Class View](/visualstudio/ide/viewing-the-structure-of-code) displays icons for any interface or dispinterface defined in an .idl file in your C++ project.

For ATL-based COM object classes, Class View reads the COM map in the ATL class to display the relationship between the ATL class and any interfaces it implements.

In Class View and its shortcut menus, you can work with interfaces as follows:

- Add ATL objects to an MFC-based application.
- Add methods, properties, and events.
- Jump directly to an item's interface code by double-clicking the item.

## Edit a COM interface

By using commands from the Class View shortcut menu, you can define new methods and properties for the COM interfaces in your Visual C++ projects. From the Toolbox, you can also define events for ActiveX controls.

For ATL- and MFC-based COM object classes, you can edit the class implementation at the same time that you edit the interface.

> [!NOTE]
> For interfaces that you've defined outside of the **Add Class** dialog box, Visual C++ adds the methods or properties to the .idl file, and it add stubs to the classes that implement methods, even when the interfaces are added manually.

The following three wizards help you customize existing interfaces. They're available from Class View:

|Wizard|Project type|
|------------|------------------|
|[Add property wizard](../ide/names-add-property-wizard.md)|ATL or MFC projects supporting ATL. Right-click the interface to which you want to add the property.<br /><br />Visual C++ detects the project type and modifies the options in the Add Property Wizard as necessary:<br /><br />- For dispinterfaces in projects created by using the [MFC application wizard](../mfc/reference/mfc-application-wizard.md), invoking the Add Property Wizard provides options specific to MFC.<br />- For MFC ActiveX control interfaces, the Add Property Wizard provides a list of stock methods and properties that you can use as provided or customize for your control.<br />- For all other interfaces, the Add Property Wizards provide options useful in most situations.|
|[Add method wizard](../ide/add-method-wizard.md)|ATL or MFC projects supporting ATL. Right-click the interface to which you want to add the method.<br /><br />Visual C++ detects the project type and modifies the options in the Add Method Wizard as necessary:<br /><br />- For dispinterfaces in projects created by using the [MFC application wizard](../mfc/reference/mfc-application-wizard.md), using the Add Method Wizard provides options specific to MFC.<br />- For MFC ActiveX control interfaces, the Add Method Wizard provides a list of stock methods and properties that you can use as provided or customize for your control.<br />- For all other interfaces, the **Add Method** wizards provide options useful in most situations.|

Additionally, you can implement new interfaces on your COM control. Just right-click the object's control class in Class View and choose [Implement Interface](../ide/implement-interface-wizard.md).
