---
description: "Learn more about: Add an IDL MFC method to an interface in your MFC project"
title: "Add an IDL MFC method"
ms.date: "03/17/2022"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add IDL MFC method wizard [C++]", "IDL MFC methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add an IDL MFC method wizard"]
ms.custom: devdivchpfy22
---

# Add an IDL MFC method

The Add an IDL MFC Method wizard adds a method to an interface defined in an Interface Definition Library (IDL) in a Microsoft Framework Class (MFC) project. For example, if you have a Microsoft ActiveX control project, and you open the IDL library, using following procedure you can add the method to interface. If the project contains a class associated with the interface, the wizard modifies the class, too.

**To add a method to your object:**

1. On the View menu, choose **Class View**.

1. In **Class View**, expand the project node to display the interface to which you want to add the method.

1. Right-click the name of the interface.

1. On the shortcut menu, choose **Add**, and then choose **Add Method**.

1. In the **Add Method** wizard, provide the information to create the method.

1. Specify any IDL settings for this method in the [IDL attributes](#idl-attributes-add-method-wizard) page of the wizard.

1. Select **OK** to add the method.

## In this section

- [Add an IDL MFC method wizard](#add-an-idl-mfc-method-wizard)
- [IDL attributes, add method wizard](#idl-attributes-add-method-wizard)

## Add an IDL MFC method wizard

Use this wizard to add an IDL MFC method to an interface.

:::image type="content" source="../reference/media/add-idl-mfc-method-wizard.png" alt-text="Add an IDL MFC method screenshot.":::

### Names

- **Method name**

  Sets the name for the method.

  |Interface type|Description|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Provide your own method name.|
  |MFC dispinterface|Provide your own method name or select a suggested method name from the list. If you select a name from the list, the appropriate value appears in the **Return type** box, and it can't be changed.|
  |MFC ActiveX control dispinterface|Provide your own or select either of the stock methods [DoClick](../reference/colecontrol-class.md#doclick) and [Refresh](../reference/colecontrol-class.md#refresh). For more information, see [MFC ActiveX controls: Adding stock methods](../mfc-activex-controls-adding-stock-methods.md).|

- **Internal name**

  Available for only custom methods added to an MFC dispinterface. Sets the name used in the dispatch map, the header (`.h`) file, and the implementation (`.cpp`) file. By default, this name is the same as **Method name**. You can change the method name if you're working with an MFC dispinterface or if you're adding a custom method to an MFC ActiveX control dispinterface.

  |Interface type|Description|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Not available.|
  |MFC dispinterface|Set to the method name by default. You can edit the internal name.|
  |MFC ActiveX control dispinterface|You can set the internal name only for custom methods. Stock methods don't use an internal name.|

- **Return type**

  The data type returned by the method. `HRESULT` is recommended for all interface types, it provides a standard way to return errors.

  |Interface type|Description|
  |--------------------|-----------------|
  |Dual interface|`HRESULT`. Unchangeable.|
  |Custom interface|`HRESULT`. Unchangeable.|
  |Local custom interface|Provide your own return type or select from the list.|
  |Dispinterface|Provide your own return type or select from the list.|
  |MFC ActiveX control dispinterface|If you implement a stock method, the return type is set to the appropriate value and is unchangeable. If you select a method from the **Method name** list and select **Custom** under **Select method type**, select a return type from the list.|

- **Method type**

  Available only for MFC ActiveX controls. Unavailable if you provide a method name in **Method name** rather than selecting a method from the list.

  If you select one of the methods in the **Method name** list, select either the stock implementation or a custom implementation.

  |Method type|Description|
  |-----------------|-----------------|
  |**Stock**|The default. Inserts the default implementation of the method you select in the **Method name** list. **Return type** is unchangeable if you select **Stock**.|
  |**Custom**|Inserts a default implementation of the method selected in the **Method name** list. For custom method types, you can provide your own return type, or you can select one from the **Return type** list.|

- **Parameter type**

  Sets the data type of the parameter. You can type it or select the type from the list.

- **Parameter name**

  Sets the name of a parameter. Select **+** to add the parameter to the **parameters** list. If you don't provide a parameter name, the wizard ignores any parameter attributes (ATL only) or **Parameter type** selections.

  > [!NOTE]
  > If you supply a parameter name and then select **OK** before you select **+**, the parameter isn't added to the method. You must find the method in the code and insert the parameter manually.

- **+**

  Adds the parameter to the list of **parameters**. Specify the parameter name in **Parameter name**, and its type and parameter attributes in **Parameters**.

- **x**

  Removes the selected parameter from the **Parameters** list.

- **Parameters**

  Displays all of the methods parameters, modifiers, and types. The wizard updates the **Parameters** list as you add parameters.

## IDL attributes, add method wizard

Use this page to specify any interface definition language (IDL) settings for the method.

- `id`

  Sets the numerical ID that identifies the method. For more information, see [id](/windows/win32/Midl/id) in the *MIDL Reference*.

- `call_as`

  Specifies the name of a remote method to which this local method can be mapped. For more information, see [call_as](/windows/win32/Midl/call-as) in the *MIDL Reference*.

- `helpcontext`

  Specifies a context ID that lets the user view information about this method in the Help file. For more information, see [helpcontext](/windows/win32/Midl/helpcontext) in the *MIDL Reference*.

- `helpstring`

  Specifies a character string that's used to describe the element to which it applies. It's set by default to "method *Method name*." For more information, see [helpstring](/windows/win32/Midl/helpstring) in the *MIDL Reference*.
