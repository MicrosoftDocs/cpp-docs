---
description: "Learn more about: Use the Microsoft Visual Studio Add IDL MFC property wizard to add a property to an IDL interface in your MFC or ATL project"
title: "Add an IDL MFC property"
ms.date: "04/14/2022"
f1_keywords: ["vc.codewiz.prop.overview"]
helpviewer_keywords: ["interfaces, adding properties", "properties [C++], adding to interfaces", "names, add property wizard", "add property wizard", "stock properties, about stock properties", "stock properties"]
ms.custom: devdivchpfy22
---

# Add an IDL MFC property

The **Add IDL MFC Property** wizard adds a property to an Interface Definition Library (IDL) interface defined in your Microsoft Framework Class (MFC) project.

To use this wizard, you must be in an MFC Project, ActiveX project, or an ATL project that supports MFC. For example, if you have a Microsoft ActiveX control project, you can use the following procedure to add a property to an IDL interface in the solution.

## Add an IDL MFC property to your interface

1. On the **View** menu, select **Class View**.

1. In the [Class View](/visualstudio/ide/viewing-the-structure-of-code) pane, right-click the name of the interface to which you want to add the property.

   > [!NOTE]
   > You can also add properties to dispinterfaces, which, unless the project is attributed, are nested within the library node.

1. From the shortcut menu, choose **Add** > **Add Property**.

1. In the **Add IDL MFC property** wizard, provide the information to create the property.

1. Select **OK** to add the property.

For MFC dispinterfaces:

- If you select **Member variable** as the implementation type, a method and a variable are added to the class that implements it.
- If you select **Get/Set methods** as the implementation type, two methods are added to the class that implements it.

## User interface element list

The following section describes the **Add IDL MFC Property** wizard:

:::image type="content" source="../reference/media/add-interface-definition-library-mfc-property-wizard.png" alt-text="Screenshot of Add IDL MFC Property with two parameters: int i and char c. Property type is OLE_COLOR.":::

- **Property name**

  Sets the name of the property.

  For MFC dispinterfaces associated with ActiveX controls, you can supply your own name or you can select a stock property name from the predefined list. If you provide your own property name, the **Stock** implementation type is unavailable.

  For more information about a description of the stock properties in the list, see [stock properties](#stock-properties).

  |Interface type|Property name options|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Provide a property name.|
  |MFC dispinterface, MFC ActiveX control dispinterface|Provide a property name or select a stock property from the list.<br /><br />If you select a property from the list, the appropriate value appears in the **Property type** box. You can change this type, depending on the **Implementation type** selection.|

- **Property type**

  Sets the type of property you're adding.

  For MFC dispinterfaces, provide your own type or select from the predefined list. If you provide a stock implementation of a property, **Property type** is the stock type and can't be changed.

- **Variable name**

  Sets the name of the member variable with which the property is associated.

  By default, the variable name is `m_`*PropertyName*. You can edit this name.

  This field is only visible for MFC dispinterfaces and if you specify **Member variable** under **Implementation type**.

- **Notification function**

  Sets the name of the notification function called if the property changes.

  By default, the name of the notification function is `On`*PropertyName*`Changed`. You can edit this name.

  This field is only visible for MFC dispinterfaces and if you specify **Member variable** under **Implementation type**.

- **Get function**

  Sets the name of the function to get the property.

  By default, the name of the `Get` function is `Get`*PropertyName*. You can edit this name.

  If you delete the name, the function [GetNotSupported](../../mfc/reference/colecontrol-class.md#getnotsupported) is inserted into the interface dispatch map.

  This field is only visible for MFC dispinterfaces and if you specify **Get/Set methods** under **Implementation type**.

- **Set function**

  Sets the name of the function to set the property.

  By default, the name of the `Set` function is `Set`*PropertyName*. You can edit this name.

  If you delete the name, the function [SetNotSupported](../../mfc/reference/colecontrol-class.md#setnotsupported) is inserted into the interface dispatch map.

  This field is only visible for MFC dispinterfaces and if you specify **Get/Set methods** under **Implementation type**.

- **Implementation type**

  Specifies how to implement the property you're adding.

  Only available for MFC dispinterfaces.

  |Implementation type|Description|
  |-------------------------|-----------------|
  |**Stock**|Specifies a default implementation for the property selected in **Property name**. For more information, see [stock properties](#stock-properties).<br /> If you specify **Stock**, then **Property type**, **Parameter type**, and **Parameter name** are dimmed.|
  |**Member variable**|Adds the property as a member variable.<br />You can add custom properties or most stock properties as member variables.<br />Provides default names under **Variable name** and **Notification function**. You can edit this name.<br />You can't specify **Member variable** for the `Caption`, `hWnd`, or `Text` properties.|
  |**Get/Set methods**|Specifies the property is added as `Get`*PropertyName* and `Set`*PropertyName* functions by default. These names appear under **Get function** and **Set function**.<br />You can change the default **Property type**, which passes a value for the Get function.<br/>You can specify parameters for the `Get` and `Set` functions.|

- **Default property**

  Sets the property as the default for the interface.

  An interface can have only one default property.

  Once you specify the default property, this checkbox is unavailable for any other properties that you add to the interface.
  Only available for an MFC dispinterface.

- **Parameters**

  Displays the method's parameters and its types.

- **+**

  Adds a parameter. In **Parameters**, type the parameter type and name and choose **OK**. For example, `int x`

- **x**

  Removes the selected parameter from the **Parameters** list.

- **Pencil icon**

  Edits the selected parameter.

- **id**

  Sets the numerical ID that identifies the property.

  This option isn't available for properties of custom interfaces.
  For more information, see [`id`](/windows/win32/Midl/id) in the *MIDL Reference*.

- **helpcontext**

  Specifies a context ID that lets the user view information about this property in the Help file.

  For more information, see [`helpcontext`](/windows/win32/Midl/helpcontext) in the *MIDL Reference*.

- **helpstring**

  Specifies a character string that's used to describe the element to which it applies. By default, it's **`property`**&nbsp;*Property&nbsp;name*.

  For more information, see [`helpstring`](/windows/win32/Midl/helpstring) in the *MIDL Reference*.

### Stock properties

If you're adding a property to an MFC dispinterface, you can choose one of the following stock properties from the **Property name** dropdown list:

|Property name|Description|
|-------------------|-----------------|
|`Appearance`|Returns or sets a value that determines the appearance of the control.<br/>The control's `Appearance` property can include or omit three-dimensional display effects. This property is an ambient read/write property.|
|`BackColor`|Returns or sets the control's ambient `BackColor` property to either a palette (RGB) color or a predefined system color.<br/>By default, its value corresponds to the foreground color of the control's container.<br/>This property is an ambient read/write property.|
|`BorderStyle`|Returns or sets the border style for a control.<br/>This property is a read/write property.|
|`Caption`|Returns or sets the control's `Caption` property.<br/>The caption is the title of the window. `Caption` has no **Member variable** implementation type.|
|`Enabled`|Returns or sets the control's `Enabled` property.<br/>An enabled control can respond to user-generated events.|
|`Font`|Returns or sets the control's ambient font.<br/>`Null` if the control has no font.|
|`ForeColor`|Returns or sets the control's ambient `ForeColor` property.|
|`hWnd`|Returns or sets the control's `hWnd` property.<br/>Has no **Member variable** implementation type.|
|`ReadyState`|Returns or sets the control's `ReadyState` property.<br/>A control can be uninitialized, initialized, loading, interactive, or complete.<br/>For more information, see [READYSTATE](/previous-versions/aa768362\(v=vs.85\)) in the *Internet SDK*.|
|`Text`|Returns or sets the text contained in a control.<br/>Has no **Member variable** implementation type.|

## See Also

[Add Property](../../ide/adding-a-property-visual-cpp.md)

[Add IDL Property](../../ide/add-interface-definition-library-property-wizard.md)
