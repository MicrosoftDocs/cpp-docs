---
description: "Learn more about: Add a method to an interface in a Visual C++ project"
title: "Add a method"
ms.date: "03/21/2022"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add method wizard [C++]", "methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add method wizard"]
ms.custom: devdivchpfy22
---
# Add a method

You can use the [add method wizard](#add-method-wizard) to add a method to an interface in your project. In any type of project, add interface and follow the given steps to get the **Add method** wizard. If the project contains a class associated with the interface, the wizard modifies the class, too.

**To add a method to your object:**

1. In **Class View**, expand the project node to display the interface to which you want to add the method.

   > [!NOTE]
   > You can also add methods to dispinterfaces, which, unless the project is attributed, are located under the library node.

1. Right-click the name of the interface.

1. On the shortcut menu, choose **Add**, and then choose **Add Method**.

1. In the **Add Method** wizard, provide the information to create the method.

1. Select **OK** to add the method.

## Add method wizard

Use this wizard to add a method to an interface.

:::image type="content" source="../ide/media/add-method-wizard.png" alt-text="Screenshot of Add method wizard":::

### Names

- **Method name**

  Sets the method name. Provide your own method name.

- **Return type**

  The data type returned by the method. Provide your own return type or select from the list.

- **Parameter type**

  Sets the data type of the parameter. You can type it with parameter name.

- **Parameter name**

  Sets the name of a parameter. Select **+** to add the parameter to the list of parameters.

- **+**

  Adds the parameter to the list of parameters. Specify the parameter name and its type in **Parameters**.

- **x**

  Removes the selected parameter from the **Parameters** list.

- **Parameters**

  Displays all of the methods parameters, modifiers, and types. The wizard updates the **Parameters** list as you add parameters.
