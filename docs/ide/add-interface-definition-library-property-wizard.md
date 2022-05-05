---
description: "Learn more about: Use a Microsoft Visual Studio wizard to add an IDL property to an IDL interface in your project"
title: "Add an IDL property"
ms.date: 04/14/2022
f1_keywords: ["vc.codewiz.prop.overview", "vc.codewiz.prop.idlattributes"]
helpviewer_keywords: ["interfaces, adding properties", "properties [C++], adding to interfaces", "names, add property wizard", "IDL attributes", "stock properties, about stock properties", "stock properties"]
ms.custom: devdivchpfy22
---
# Add an IDL property

The **Add IDL Property** wizard adds a property to an interface defined in an Interface Definition Library (IDL), such as in an ATL project that contains an `.idl` file. This wizard isn't available in projects that support MFC.

This wizard differs from the [Add Property](adding-a-property-visual-cpp.md) wizard and [Add IDL MFC Property](../mfc/reference/add-interface-definition-library-mfc-property-wizard.md) wizard in the following ways:
- The **Add Property** wizard adds a property to an interface in your project.
- The **Add IDL MFC Property** wizard is specific to MFC, ActiveX, or ATL projects that support MFC.

**To add an IDL property**

1. On the **View** menu, select **Class View**.

1. In [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the interface to which you want to add the property.

   > [!NOTE]
   > You can also add properties to dispinterfaces, which, unless the project is attributed, are nested within the library node.

1. Right-click the name of the interface.

1. From the shortcut menu, select **Add** > **Add Property**.

1. In the **Add IDL Property** wizard, provide the information to create the property.

1. Select **OK** to add the property.

The `Get` and `Put` methods of the property are displayed as two icons in **Class View** under the interface where it's defined. Double-click either icon to view the property declaration in the `.idl` file.

For ATL interfaces, the `Get` and `Put` functions are added to the `.cpp` and `.h` files.

## Add an IDL property wizard

The following section describes the UI that you'll use to add an IDL property:

:::image type="content" source="media/add-interface-definition-library-property-wizard.png" alt-text="Screenshot of Add IDL Property with two parameters: [ in ] int i and [ in ] char c. Return type is HRESULT. Property type is float.":::

- **Property name**

  Sets the name of the property.

- **Property type**

  The data type of the property.

- **Return type**

  For ATL interfaces, sets the return type for the property.
  For dual interfaces, `HRESULT` is always the return type, and select option is unavailable.
  For custom interfaces, you can select a return type from the list. `HRESULT` is still recommended, as it provides a standard way to return errors.

- **Get function**

  For ATL interfaces, creates the `Get` method for retrieving the property value. Select **Get**, **Put**, or both.

- **Put function**

  For ATL interfaces, creates the `Put` method for setting the property value. Select **Get**, **Put**, or both. If you select **Put function**, you can choose from the following two ways to implement the method:

  |Option|Description|
  |------------|-----------------|
  |**`propput`**|The [`PropPut`](../windows/attributes/propput.md) function returns a copy of the object. **propput** is the default and the most common way to make the property writable.|
  |**`propputref`**|The [`PropPutRef`](../windows/attributes/propputref.md) function returns a reference to the object, rather than returning the copy of the object itself. Consider using **`propputref`** option for objects, such as large structs or arrays, that may have initialization overhead.|

- **Parameters**

  Displays the list of parameters added to the property. Each item in the list consists of the parameter name, parameter type, and attributes.

  `in` indicates that the parameter is passed from the calling procedure to the called procedure.
  `out` indicates that the pointer parameter is returned from the called procedure to the calling procedure (from the server to the client).

- **+**

  Add a parameter. In **Parameters**, type the parameter type and name. For example, `int x`, and select **OK**.

- **x**

  Removes the selected parameter from **Parameters**.

- **Pencil icon**

  Edit the selected parameter.

- **Attributes**

1. `helpcontext`

    Specifies a context ID that lets the user view information about this property in the Help file. For more information, see [`helpcontext`](/windows/win32/Midl/helpcontext).

1. `helpstring`

    Specifies a character string that's used to describe the element to which it applies. By default, it's set to **`property`**&nbsp;*Property&nbsp;name*. For more information, see [`helpstring`](/windows/win32/Midl/helpstring).

1. `id`

    Sets the numerical identifier that identifies the property. This option isn't available for properties of custom interfaces. For more information, see [`id`](/windows/win32/Midl/id).

- **Additional attributes**

Keywords in the Microsoft Interface Definition Language (MIDL) are described in detail in the [MIDL language reference](/windows/win32/midl/midl-language-reference).

  |Option|Description|
  |------------|-----------------|
  |`bindable`|Indicates that the property supports data binding. For more information, see [`bindable`](/windows/win32/Midl/bindable).|
  |`defaultbind`|Indicates that this single, bindable property best represents the object. For more information, see [defaultbind](/windows/win32/Midl/defaultbind).|
  |`defaultcollelem`|Indicates that the property is an accessor function for an element of the default collection. For more information, see [`defaultcollelem`](/windows/win32/Midl/defaultcollelem).|
  |`displaybind`|Indicates that this property should be displayed to the user as bindable. For more information, see [`displaybind`](/windows/win32/Midl/displaybind).|
  |`hidden`|Indicates that the property exists but shouldn't be displayed in a user-oriented browser. For more information, see [`hidden`](/windows/win32/Midl/hidden).|
  |`immediatebind`|Indicates that the database will be notified immediately of all changes to this property of a data-bound object. For more information, see [`immediatebind`](/windows/win32/Midl/immediatebind).|
  |`local`|Specifies to the MIDL compiler that the property isn't remote. For more information, see [`local`](/windows/win32/Midl/local).|
  |`nonbrowsable`|Tags an interface or dispinterface member that shouldn't be displayed in a properties browser. For more information, see [`nonbrowsable`](/windows/win32/Midl/nonbrowsable).|
  |`requestedit`|Indicates that the property supports the `OnRequestEdit` notification. For more information, see [`requestedit`](/windows/win32/Midl/requestedit).|
  |`restricted`|Specifies that the property can't be called arbitrarily. For more information, see [`restricted`](/windows/win32/Midl/restricted).|
  |`source`|Indicates that a member of the property is a source of events. For more information, see [`source`](/windows/win32/Midl/source).|

## **See also**

[Add Property](adding-a-property-visual-cpp.md)\
[Add IDL MFC Property](../mfc/reference/add-interface-definition-library-mfc-property-wizard.md)
