---
description: "Learn more about: Add a method to an interface in a Microsoft Visual C++ project"
title: "Add a method"
ms.date: "03/28/2022"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add method wizard [C++]", "methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add method wizard"]
ms.custom: devdivchpfy22
---
# Add a method

Use the [add method wizard](#add-method-wizard-dialog-box) to add a method to an interface in your project. If the project contains a class associated with the interface, the wizard also adds the method to the class.

**Add a method to your interface:**

1. From the Visual Studio main menu, choose **View** > **Class view**. In the **Class View** pane, expand the project node to display the interface you want to add the method to.

   > [!NOTE]
   > You can also add methods to dispinterfaces. Unless the project is attributed, dispinterfaces are located under the library node.

1. Right-click the name of the interface.

1. On the shortcut menu, choose **Add** > **Add Method**.

1. In the **Add Method** wizard dialog box, provide the information to create the method, as described in the next section.

1. Select **OK** to add the method.

## Add method wizard dialog box

Add a method to an interface using the following dialog box.

:::image type="content" source="../ide/media/add-method-wizard.png" alt-text="Screenshot of Add method wizard with the method name field set to aMethod and the return type set to HRESULT. There are two two parameters in the Parameters section, defined as int x, and bool clip":::

### Names

- **Method name**

  Provide the method name.

- **Return type**

  Type the return type or select it from the drop-down list.

- **Parameters**

  Displays the method's parameters, modifiers, and types. The wizard updates the **Parameters** list as you add parameters.

  **+**

Add a parameter. In **Parameters**, type the type, name, and any modifiers. For example, `int x`, and choose **OK**.

- **x**

  Remove the selected parameter from the **Parameters** list.

- **Pencil icon**

  Edit the selected parameter.
