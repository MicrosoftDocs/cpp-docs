---
description: "Learn more about: Add a property to an interface in a Microsoft Visual Studio C++ project"
title: "Add a property"
ms.date: "03/31/2022"
f1_keywords: ["vc.codewiz.prop.overview"]
helpviewer_keywords: ["interfaces, adding properties", "properties [C++], adding to interfaces", "names, add property wizard", "add property wizard", "stock properties, about stock properties", "stock properties"]
ms.assetid: 37bd4db7-efd3-4faa-87ad-64902ed16a36
ms.custom: devdivchpfy22
---

# Add a property

Use the [Add Property wizard](#add-property-wizard) to add a method to an interface in your project.

**To add a property to your interface:**

1. From the Visual Studio main menu, select **View** > **Class view**. In the [Class View](/visualstudio/ide/viewing-the-structure-of-code) pane, expand the project node to display the interface you want to add the method to.

   > [!NOTE]
   > You can also add properties to dispinterfaces, which, unless the project is attributed, are nested within the library node.

1. Right-click the name of interface.

1. From the shortcut menu, select **Add** > **Add Property**.

1. In the [Add property wizard](#add-property-wizard), provide the information to create the property.

1. Select **OK** to add the property.

## Add Property wizard

Add a property to an interface by using the add property wizard:

:::image type="content" source="../ide/media/add-property-wizard.png" alt-text="Screenshot of Add property wizard with the method name field set to sample and the property type set to int a":::

- **Property name**

  Sets the name of the property.

- **Property type**

  Sets the type of property you're adding.

- **Get function**

  Sets the name of the function to get the property. By default, the name of the `Get` function is set to `Get`*PropertyName*. You can edit this name. If you delete the name, the function [GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported) is inserted into the interface dispatch map. The `Get`*PropertyName* function specifies the property as readable.

  For ATL interfaces **Get function** sets the property as readable; that is, it creates the `Get` method for retrieving this property from the object. Select **Get**, **Put**, or both.

- **Set function**

  Sets the name of the function to set the property. By default, the name of the `Set` function is set to `Set`*PropertyName*. You can edit this name. If you delete the name, the function [SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported) is inserted into the interface dispatch map. The `Set`*PropertyName* function specifies that the property is writable.

  For ATL interfaces **Set function** sets the property writable; that is, it creates the `Put` method for setting, or "putting," this property of the object. Select **Get**, **Put**, or both.