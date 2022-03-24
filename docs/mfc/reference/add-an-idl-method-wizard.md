---
description: "Learn more about: Use a Microsoft Visual Studio wizard to add a method to an IDL interface in your ATL project"
title: "Add an IDL method"
ms.date: "03/24/2022"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add IDL method wizard [C++]", "IDL methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add an IDL method wizard"]
ms.custom: devdivchpfy22
---

# Add an IDL method

The **Add IDL Method** wizard adds a method to an interface defined in an Interface Definition Library (IDL) in an Active Template Library(ATL) project. To use the **Add IDL Method** wizard, you must be in an ATL project that doesn't supports MFC.

For example, if you have an ATL project, and you add ATL simple object, using following procedure you can add the method to interface.

This wizard differs from the **Add Method** wizard and **ADD IDL MFC Method** wizard. The [Add Method](../../ide/adding-a-method-visual-cpp.md) wizard adds a default method to your project. The [Add IDL MFC Method](../reference/add-an-adl-mfc-method-wizard) wizard is specific to MFC, ActiveX, or ATL projects that support MFC.

## Add a method to your interface

1. On the **View** menu, choose **Class View**.

1. In **Class View**, expand the project node to display the interface to which you want to add the method.

1. Right-click the name of the interface.

1. On the shortcut menu, choose **Add**, and then choose **Add Method**.

1. In the **Add IDL Method** wizard, provide the information to create the method.

1. Select **OK** to add the method.

### UI element list

The following section describes the UI that you'll use to add a method:

:::image type="content" source="./media/add-an-idl-method-wizard.png" alt-text="Add IDL MFC method screenshot.":::

- **Method name**

  Sets the name for the method. Provide your own method name.

- **Return type**

  The data type returned by the method. The standard way to return error codes from methods defined in an interface is with a `HRESULT`.

  |Interface type|Description|
  |--------------------|-----------------|
  |Dual interface|`HRESULT`. Unchangeable.|
  |Custom interface|`HRESULT`. Unchangeable.|
  |Local custom interface|Provide your own return type or select from the list.|
  |Dispinterface|Provide your own return type or select from the list.|

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

- **Parameter attributes**

    Sets any other attributes for the parameter specified in **Parameter name**.
    1. **Infer in/out parameters values from types**

        Infer in or out parameter values from their types.

    1. **Set the last parameter as the return value (retval)**

        Set the last parameter as the return value.

- `id`

  Sets the numeric ID that identifies the method. For more information, see [id](/windows/win32/Midl/id) in the *MIDL Reference*.

- `call_as`

  Specifies the name of the remote method to map to this local method. For more information, see [call_as](/windows/win32/Midl/call-as) in the *MIDL Reference*.

- `helpcontext`

  Specifies a context ID that lets the user view information about this method in the Help file. For more information, see [helpcontext](/windows/win32/Midl/helpcontext) in the *MIDL Reference*.

- `helpstring`

  Specifies a text that describes the associated element. By default its *Method name*. For more information, see [helpstring](/windows/win32/Midl/helpstring) in the *MIDL Reference*.

## See also

[Adding a Default Method](../../ide/adding-a-method-visual-cpp.md)