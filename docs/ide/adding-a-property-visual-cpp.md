---
description: "Learn more about: Add a property to an interface in a Microsoft Visual Studio C++ project"
title: "Add a property"
ms.date: 04/12/2022
f1_keywords: ["vc.codewiz.prop.overview"]
helpviewer_keywords: ["interfaces, adding properties", "properties [C++], adding to interfaces", "names, add property wizard", "add property wizard", "stock properties, about stock properties", "stock properties"]
ms.custom: devdivchpfy22
---

# Add a property

Use the [Add Property wizard](#add-property-wizard) to add a property to an interface in your project.

**To add a property to your interface:**

1. From the Visual Studio main menu, select **View** > **Class view**. In the [Class View](/visualstudio/ide/viewing-the-structure-of-code) pane, expand the project node to display the interface you want to add the property to.

   > [!NOTE]
   > You can also add properties to dispinterfaces, which, unless the project is attributed, are nested within the library node.

1. Right-click the name of interface.

1. From the shortcut menu, select **Add** > **Add Property**.

1. In the [Add property wizard](#add-property-wizard), provide the information to create the property.

1. Select **OK** to add the property.

## Add Property wizard

The following section describes the UI that you'll use to add a property:

:::image type="content" source="../ide/media/add-property-wizard.png" alt-text="Screenshot of Add property wizard with the method name field set to sample and the property type set to int a":::

- **Property name**

  Sets the name of the property.

- **Property type**

  Sets the return type of the property.

- **Get function**

  Select to add a property getter. By default, the name of the `Get` function is `Get`*PropertyName*. You can edit this name. If you delete the name, the function [`GetNotSupported`](../mfc/reference/colecontrol-class.md#getnotsupported) is inserted into the interface dispatch map. The `Get`*PropertyName* function specifies the property as readable.

  For ATL interfaces **Get function** makes the property readable; that is, it creates the `Get` method for retrieving this property from the object. Select **Get**, **Put**, or both.

- **Put function**

  Select to add a property setter. By default, the name of the `Set` function is `Set`*PropertyName*. You can edit this name. If you delete the name, the function [`SetNotSupported`](../mfc/reference/colecontrol-class.md#setnotsupported) is inserted into the interface dispatch map. The `Set`*PropertyName* function specifies that the property is writable.

  For ATL interfaces **Put function** makes the property writable; that is, it creates the `Put` method for setting, or "putting," this property of the object. Select **Get**, **Put**, or both.

## See Also

[Add IDL Property](add-interface-definition-library-property-wizard.md)

[Add IDL MFC Property](../mfc/reference/add-interface-definition-library-mfc-property-wizard.md)