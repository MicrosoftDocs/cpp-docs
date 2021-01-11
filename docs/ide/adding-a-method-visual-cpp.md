---
description: "Learn more about: Add a method"
title: "Add a method"
ms.date: "11/09/2018"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add method wizard [C++]", "methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add method wizard"]
ms.assetid: 4ba4e45f-fa38-4d5e-af44-cbec0a7ab558
---
# Add a method

You can use the [add method wizard](#add-method-wizard) to add a method to an interface in your project. If the project contains a class associated with the interface, the wizard modifies the class, too.

**To add a method to your object:**

1. In **Class View**, expand the project node to display the interface to which you want to add the method.

   > [!NOTE]
   > You can also add methods to dispinterfaces, which, unless the project is attributed, are located under the library node.

1. Right-click the name of the interface.

1. On the shortcut menu, choose **Add**, and then choose **Add Method**.

1. In the Add Method Wizard, provide the information to create the method.

1. Specify any interface definition language settings for this method in the [IDL attributes](#idl-attributes-add-method-wizard) page of the wizard.

1. Select **Finish** to add the method.

## In this section

- [Add method wizard](#add-method-wizard)
- [IDL attributes, add method wizard](#idl-attributes-add-method-wizard)

## Add method wizard

Use this wizard to add a method to an interface. Depending on the project type or interface type to which you're adding a method, the wizard displays different options.

### Names

- **Return type**

  The data type returned by the method. `HRESULT` is recommended for all interface types, because it provides a standard way to return errors.

  |Interface type|Description|
  |--------------------|-----------------|
  |Dual interface|`HRESULT`. Unchangeable.|
  |Custom interface|`HRESULT`. Unchangeable.|
  |Local custom interface|Provide your own return type or select from the list.|
  |Dispinterface|Provide your own return type or select from the list.|
  |MFC ActiveX control dispinterface|If you implement a stock method, the return type is set to the appropriate value and is unchangeable. If you select a method from the **Method name** list and select **Custom** under **Select method type**, select a return type from the list.|

- **Method name**

  Sets the name for the method.

  |Interface type|Description|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Provide your own method name.|
  |MFC dispinterface|Provide your own method name or select a suggested method name from the list. If you select a name from the list, the appropriate value appears in the **Return type** box, and it's unchangeable.|
  |MFC ActiveX control dispinterface|Provide your own or select either of the stock methods [DoClick](../mfc/reference/colecontrol-class.md#doclick) and [Refresh](../mfc/reference/colecontrol-class.md#refresh). For more information, see [MFC ActiveX controls: Adding stock methods](../mfc/mfc-activex-controls-adding-stock-methods.md).|

- **Method type**

  Available only for MFC ActiveX controls. If you provide a method name in the **Method name** box, rather than selecting a method from the list, this box is unavailable.

  If you select one of the methods in the **Method name** list, select either the stock implementation or a custom implementation.

  |Method type|Description|
  |-----------------|-----------------|
  |**Stock**|The default. Inserts the stock implementation of the method you select in the **Method name** list. **Return type** is unchangeable if you select **Stock**.|
  |**Custom**|Inserts a stub implementation of the method selected in the **Method name** list. For custom method types, you can provide your own return type, or you can select one from the **Return type** list.|

- **Internal name**

  Available for only custom methods added to an MFC dispinterface. Sets the name used in the dispatch map, the header (.h) file, and the implementation (.cpp) file. By default, this name is the same as **Method name**. You can change the method name if you're working with an MFC dispinterface or if you're adding a custom method to an MFC ActiveX control dispinterface.

  |Interface type|Description|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Not available.|
  |MFC dispinterface|Set to the method name by default. You can edit the internal name.|
  |MFC ActiveX control dispinterface|You can set the internal name only for custom methods. Stock methods don't use an internal name.|

- **Parameter attributes**

  Sets any additional attributes for the parameter specified in **Parameter name**.

  |Parameter attribute|Description|Allowed combinations|
  |-------------------------|-----------------|--------------------------|
  |**In**|Indicates that the parameter is passed from the calling procedure to the called procedure.|`in` only<br /><br /> `in` and `out`|
  |**Out**|Indicates that the pointer parameter is returned from the called procedure to the calling procedure (from the server to the client).|`out` only<br /><br /> `in` and `out`<br /><br /> `out` and `retval`|
  |**Retval**|Indicates that the parameter receives the return value of the member.|`retval` and `out`|

- **Parameter type**

  Sets the data type of the parameter. Select the type from the list.

- **Parameter name**

  Sets the name of a parameter to pass through your method. After you type the name, select **Add** to add it to the list of parameters that will pass through your method. If you don't provide a parameter name, the wizard ignores any parameter attributes (ATL only) or **Parameter type** selections.

  Once you select **Add**, the parameter name appears in **Parameter list**.

  > [!NOTE]
  > If you supply a parameter name and then select **Finish** before you select **Add**, the parameter isn't added to the method. You must find the method and insert the parameter manually.

- **Add**

  Adds the parameter you specify in **Parameter name**, and its type and parameter attributes, to **Parameter list**. Select **Add** to add a parameter to the list.

- **Remove**

  Removes the parameter you select in **Parameter list** from the list.

- **Parameter list**

  Displays all parameters and their modifiers and types currently added for the method. As you add parameters, the wizard updates **Parameter list** to display each parameter, with its modifier and type.

## IDL attributes, add method wizard

Use this page of the Add Method Wizard to specify any interface definition language (IDL) settings for the method.

- `id`

  Sets the numerical ID that identifies the method. For more information, see [id](/windows/win32/Midl/id) in the *MIDL Reference*.

  This box is unavailable for custom interfaces and isn't available for MFC dispinterfaces.

- `call_as`

  Specifies the name of a remote method to which this local method can be mapped. For more information, see [call_as](/windows/win32/Midl/call-as) in the *MIDL Reference*.

  Not available for MFC dispinterfaces.

- `helpcontext`

  Specifies a context ID that lets the user view information about this method in the Help file. For more information, see [helpcontext](/windows/win32/Midl/helpcontext) in the *MIDL Reference*.

  Not available for MFC dispinterfaces.

- `helpstring`

  Specifies a character string that's used to describe the element to which it applies. It's set by default to "method *Method name*." For more information, see [helpstring](/windows/win32/Midl/helpstring) in the *MIDL Reference*.

  Not available for MFC dispinterfaces.

- **Additional attributes**

  Not available for MFC dispinterfaces.

  |Attribute|Description|
  |---------------|-----------------|
  |`hidden`|Indicates that the method exists but shouldn't be displayed in a user-oriented browser. For more information, see [hidden](/windows/win32/Midl/hidden) in the *MIDL Reference*.|
  |`source`|Indicates that a member of the method is a source of events. For more information, see [source](/windows/win32/Midl/source) in the *MIDL Reference*.|
  |`local`|Specifies to the MIDL compiler that the method isn't remote. For more information, see [local](/windows/win32/Midl/local) in the *MIDL Reference*.|
  |`restricted`|Specifies that the method can't be called arbitrarily. For more information, see [restricted](/windows/win32/Midl/restricted) in the *MIDL Reference*.|
  |`vararg`|Specifies that the method takes a variable number of arguments. To accomplish this, the last argument must be a safe array of `VARIANT` type that contains the rest of the arguments. For more information, see [vararg](/windows/win32/Midl/vararg) in the *MIDL Reference*.|
