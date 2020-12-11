---
description: "Learn more about: Add a property"
title: "Add a property"
ms.date: "11/09/2018"
f1_keywords: ["vc.codewiz.prop.overview", "vc.codewiz.prop.idlattributes"]
helpviewer_keywords: ["interfaces, adding properties", "properties [C++], adding to interfaces", "names, add property wizard", "IDL attributes, add property wizard", "stock properties, about stock properties", "stock properties"]
ms.assetid: 37bd4db7-efd3-4faa-87ad-64902ed16a36
---
# Add a property

You can use the [add property wizard](#names-add-property-wizard) to add a method to an interface in your project.

**To add a property to your object:**

1. In [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the interface to which you want to add the property.

   > [!NOTE]
   > You can also add properties to dispinterfaces, which, unless the project is attributed, are nested within the library node.

1. From the shortcut menu, choose **Add**, and then choose **Add Property**.

1. In the [add property wizard](#names-add-property-wizard), provide the information to create the property.

1. Specify any interface definition language (IDL) settings for the property in the [IDL attributes](#idl-attributes-add-property-wizard) page of the wizard.

1. Select **Finish** to add the property.

The `Get` and `Put` methods of the property are displayed as two icons in Class View, under the interface where it's defined. You can double-click either icon to view the property declaration in the .idl file.

- For ATL interfaces, the `Get` and `Put` functions are added to the .cpp file, and references to these functions are added to the .h file.

- For MFC dispinterfaces, if you select **Member variable** as the implementation type, a method and a variable are added to the class that implements it. If you select **Get/Set methods** as the implementation type, two methods are added to the class that implements it.

## In this section

- [Names, add property wizard](#names-add-property-wizard)
- [IDL attributes, add property wizard](#idl-attributes-add-property-wizard)
- [Stock properties](#stock-properties)

## Names, add property wizard

Use this wizard to add a property to an interface.

- **Property type**

  Sets the type of property you're adding. For MFC dispinterfaces, provide your own type or select from the predefined list. If you provide a stock implementation of a property, **Property type** is set to the stock type and is unavailable for change.

- **Property name**

  Sets the name of the property. For MFC dispinterfaces associated with ActiveX controls, you can supply your own name or you can select a stock property name from the predefined list. If you provide your own property name, the **Stock** implementation type is unavailable. See [stock properties](#stock-properties) for a description of the properties in the list.

  |Interface type|Description|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Provide a property name.|
  |MFC dispinterface, MFC ActiveX control dispinterface|Provide a property name or select a stock property from the list. If you select a property from the list, the appropriate value appears in the **Property type** box. You can change this type, depending on your selection under **Implementation type**.|

- **Return type**

  ATL interfaces only. Sets the return type for the property. For dual interfaces, `HRESULT` is always the return type, and this box is unavailable. For custom interfaces, you can select a return type from the list. `HRESULT` is still recommended, because it provides a standard way to return errors.

- **Variable name**

  MFC dispinterfaces only. Available only if you specify **Member variable** under **Implementation type**. Sets the name of the member variable with which the property is associated. By default, the variable name is set to `m_`*PropertyName*. You can edit this name.

- **Notification function**

  MFC dispinterfaces only. Available only if you specify **Member variable** under **Implementation type**. Sets the name of the notification function called if the property changes. By default, the name of the notification function is set to `On`*PropertyName*`Changed`. You can edit this name.

- **Get function**

  For MFC dispinterfaces. Available only if you specify **Get/Set methods** under **Implementation type**. Sets the name of the function to get the property. By default, the name of the `Get` function is set to `Get`*PropertyName*. You can edit this name. If you delete the name, the function [GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported) is inserted into the interface dispatch map. The `Get`*PropertyName* function specifies that the property as readable.

- **Set function**

  MFC dispinterfaces only. Available only if you specify **Get/Set methods** under **Implementation type**. Sets the name of the function to set the property. By default, the name of the `Set` function is set to `Set`*PropertyName*. You can edit this name. If you delete the name, the function [SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported) is inserted into the interface dispatch map. The `Set`*PropertyName* function specifies that the property is writable.

- **Implementation type**

  MFC dispinterfaces only. Specifies how to implement the property you're adding.

  |Implementation type|Description|
  |-------------------------|-----------------|
  |**Stock**|Specifies a stock implementation for the property selected in **Property name**. The default. For more information, see [stock properties](#stock-properties).<br /><br /> If you specify **Stock**, then **Property type**, **Parameter type**, and **Parameter name** are dimmed.|
  |**Member variable**|Specifies the property is added as a member variable. You can add custom properties or most stock properties as member variables. You can't specify **Member variable** for the `Caption`, `hWnd`, and `Text` properties.<br /><br /> Provides default names under **Variable name** and **Notification function**. You can edit this name.|
  |**Get/Set methods**|Specifies the property is added as `Get`*PropertyName* and `Set`*PropertyName* functions, by default. These names appear under **Get function** and **Set function**.<br /><br /> You can change the default **Property type**, which passes a value for the Get function. You can specify parameters for the `Get` and `Set` functions.|

- **Get function**

  For ATL interfaces. Sets the property as readable; that is, it creates the `Get` method for retrieving this property from the object. Select **Get**, **Put**, or both.

- **Put function**

  ATL interfaces only. Sets the property writable; that is, it creates the `Put` method for setting, or "putting," this property of the object. Select **Get**, **Put**, or both. If you select this option, you can choose from the following two ways to implement the method:

  |Option|Description|
  |------------|-----------------|
  |**PropPut**|The [PropPut](../windows/attributes/propput.md) function returns a copy of the object. This is the default and the most common way to make the property writable.|
  |**PropPutRef**|The [PropPutRef](../windows/attributes/propputref.md) function returns a reference to the object, rather than returning the copy of the object itself. Consider using this option for objects, such as large structs or arrays, that may have initialization overhead.|

- **Parameter attributes**

  ATL interfaces only. Sets whether the parameter specified by **Parameter name** is `in`, `out`, both, or none.

  |Option|Description|
  |------------|-----------------|
  |`in`|Indicates that the parameter is passed from the calling procedure to the called procedure.|
  |`out`|Indicates that the pointer parameter is returned from the called procedure to the calling procedure (from the server to the client).|

- **Parameter type**

  Sets the data type of the parameter. Select the type from the list.

- **Parameter name**

  Sets the name of a parameter you're adding for the property, if the property has parameters. Once you select **Add**, the parameter name appears in **Parameter list**.

- **Parameter list**

  Displays the list of attributes to be added to the property. Each item in the list consists of the parameter name, parameter type, and attributes. Use **Add** and **Remove** to update the list.

- **Add**

  Adds the parameter you specify in **Parameter name** and **Parameter type** to the **Parameter list**. Select **Add** to add a parameter to the list.

- **Remove**

  Removes the parameter you select in **Parameter list**.

- **Default property**

  MFC dispinterface only. Sets this property as the default for the interface. An interface can have only one default property; once you specify the default property, for any other properties you add to the interface, this box is unavailable.

## IDL attributes, add property wizard

Use this page of the Add Property Wizard to specify any interface definition language (IDL) settings for the property.

- `id`

  Sets the numerical ID that identifies the property. This option isn't available for properties of custom interfaces. See [id](/windows/win32/Midl/id) in the *MIDL Reference*.

- `helpcontext`

  Specifies a context ID that lets the user view information about this property in the Help file. See [helpcontext](/windows/win32/Midl/helpcontext) in the *MIDL Reference*.

- `helpstring`

  Specifies a character string that's used to describe the element to which it applies. By default, it's set to **`property`**&nbsp;*Property&nbsp;name*. See [helpstring](/windows/win32/Midl/helpstring) in the *MIDL Reference*.

### Other options

Not all options are available to all property types.

|Option|Description|
|------------|-----------------|
|`bindable`|Indicates that the property supports data binding. See [bindable](/windows/win32/Midl/bindable) in the *MIDL Reference*. For the stock implementation of the property, this option is set by default and is unchangeable.|
|`defaultbind`|Indicates that this single, bindable property best represents the object. See [defaultbind](/windows/win32/Midl/defaultbind) in the *MIDL Reference*.|
|`displaybind`|Indicates that this property should be displayed to the user as bindable. See [displaybind](/windows/win32/Midl/displaybind) in the *MIDL Reference*.|
|`immediatebind`|Indicates that the database will be notified immediately of all changes to this property of a data-bound object. See [immediatebind](/windows/win32/Midl/immediatebind) in the *MIDL Reference*.|
|`defaultcollelem`|Indicates that the property is an accessor function for an element of the default collection. See [defaultcollelem](/windows/win32/Midl/defaultcollelem) in the *MIDL Reference*.|
|`nonbrowsable`|Tags an interface or dispinterface member that shouldn't be displayed in a properties browser. See [nonbrowsable](/windows/win32/Midl/nonbrowsable) in the *MIDL Reference*.|
|`requestedit`|Indicates that the property supports the `OnRequestEdit` notification. See [requestedit](/windows/win32/Midl/requestedit) in the *MIDL Reference*. For the stock implementation of the property, this option is set by default and is unchangeable.|
|`source`|Indicates that a member of the property is a source of events. See [source](/windows/win32/Midl/source) in the *MIDL Reference*.|
|`hidden`|Indicates that the property exists but shouldn't be displayed in a user-oriented browser. See [hidden](/windows/win32/Midl/hidden) in the *MIDL Reference*.|
|`restricted`|Specifies that the property can't be called arbitrarily. See [restricted](/windows/win32/Midl/restricted) in the *MIDL Reference*.|
|`local`|Specifies to the MIDL compiler that the property isn't remote. See [local](/windows/win32/Midl/local) in the *MIDL Reference*.|

## Stock properties

If you're adding a property to an MFC dispinterface using the [add property wizard](#idl-attributes-add-property-wizard), you can choose a stock property from the **Property name** list in the [Names](#names-add-property-wizard) page of the wizard. These properties are as follows:

|Property name|Description|
|-------------------|-----------------|
|`Appearance`|Returns or sets a value that determines the appearance of the control. The control's `Appearance` property can include or omit three-dimensional display effects. This property is an ambient read/write property.|
|`BackColor`|Returns or sets the control's ambient `BackColor` property to either a palette (RGB) color or a predefined system color. By default, its value corresponds to the foreground color of the control's container. This property is an ambient read/write property.|
|`BorderStyle`|Returns or sets the border style for a control. This property is a read/write property.|
|`Caption`|Returns or sets the control's `Caption` property. The caption is the title of the window. `Caption` has no **Member variable** implementation type.|
|`Enabled`|Returns or sets the control's `Enabled` property. An enabled control can respond to user-generated events.|
|`Font`|Returns or sets the control's ambient font. Null if the control has no font.|
|`ForeColor`|Returns or sets the control's ambient `ForeColor` property.|
|`hWnd`|Returns or sets the control's `hWnd` property. `hWnd` has no **Member variable** implementation type.|
|`ReadyState`|Returns or sets the control's `ReadyState` property. A control can be uninitialized, initialized, loading, interactive, or complete. For more information, see [READYSTATE](/previous-versions/aa768362\(v=vs.85\)) in the *Internet SDK*.|
|`Text`|Returns or sets the text contained in a control. `Text` has no **Member variable** implementation type.|
