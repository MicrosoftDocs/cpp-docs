---
description: "Learn more about: Use a Microsoft Visual Studio wizard to add an IDL method to an IDL interface in your project"
title: "Add an IDL method"
ms.date: "04/12/2022"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add IDL method wizard [C++]", "IDL methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add an IDL method wizard"]
ms.custom: devdivchpfy22
---

# Add an IDL method

The **Add IDL Method** wizard adds a method to an Interface Definition Library (IDL) interface in a project that has IDL file. To use the **Add IDL Method** wizard, you must be in a project that doesn't support MFC.

For example, if you have an ATL project, and it has an IDL file, using the following procedure you can add the method to interface.

This wizard differs from the **Add Method** wizard and **ADD IDL MFC Method** wizard. The [Add Method](adding-a-method-visual-cpp.md) wizard adds a default method to your project. The Add IDL MFC Method wizard is specific to MFC, ActiveX, or ATL projects that support MFC.

## Add a method to your interface

1. On the **View** menu, select **Class View**.

1. In the **Class View**, expand the project node to display the interface to which you want to add the method.

1. Right-click the name of the interface.

1. On the shortcut menu, select **Add** > **Add Method**.

1. In the **Add IDL Method** wizard, provide the information to create the method.

1. Select **OK** to add the method.

### User Interface element list

The following section describes the user interface that you'll use to add a method:

:::image type="content" source= "media/add-interface-definition-library-method-wizard.png" alt-text="Screenshot of IDL method dialog. Shows two parameters: [ in ] int i and [ in ] float f. Return type is HRESULT.":::

- **Method name**

  Provide the name of the method.

- **Return type**

  The data type returned by the method. The standard way to return error codes from methods defined in an interface is with a `HRESULT`.
  Enter the return type according to the type of interface you have in the method, following table describes the interface type and its return type. In dual interface and custom interface the return type must be `HRESULT`, UI doesn't allow you to change this type.

  |Interface type|Description|
  |--------------------|-----------------|
  |[Dual interface](/windows/win32/winauto/dual-interfaces--iaccessible-and-idispatch)|`HRESULT`. Unchangeable.|
  |[Custom interface](/windows/win32/winauto/custom-user-interface-elements)|`HRESULT`. Unchangeable.|
  |Local custom interface|Provide your own return type or select from the list.|
  |[Dispinterface](/windows/win32/midl/dispinterface)|Provide your own return type or select from the list.|

- **Parameters**

  Displays all of the methods parameters, modifiers, and types. The wizard updates the **Parameters** list as you add parameters.

- **+**

  Add a parameter. In **Parameters**, type the parameter type, name, and any modifiers. For example, `int x`, and choose **OK**.

- **x**

  Removes the selected parameter from the **Parameters** list.

- **Parameter attributes**

    Sets any other attributes for the parameter specified in **Parameter name**.
    1. **Infer in/out parameters values from types**

        Appends in/out attributes to the parameters based on their types.

    1. **Set the last parameter as the return value (retval)**

        The last parameter will be treated as return value.

- `id`

  Sets the numeric ID that identifies the method. For more information, see [id](/windows/win32/Midl/id) in the [MIDL Reference](/windows/win32/midl/midl-language-reference.md).

- `call_as`

  Specifies the name of the remote method to map to this local method. For more information, see [call_as](/windows/win32/Midl/call-as) in the [MIDL Reference](/windows/win32/midl/midl-language-reference.md).

- `helpcontext`

  Specifies a context ID that lets the user view information about this method in the Help file. For more information, see [helpcontext](/windows/win32/Midl/helpcontext) in the [MIDL Reference](/windows/win32/midl/midl-language-reference.md).

- `helpstring`

  Specifies a character string that is used to describe the element to which it applies. For more information, see [helpstring](/windows/win32/Midl/helpstring) in the [MIDL Reference](/windows/win32/midl/midl-language-reference.md).

- **Additional attributes**
    1. `hidden`

        The *hidden* attribute indicates that the item exists but shouldn't be displayed in a user-oriented browser. For more information, see [hidden](/windows/win32/Midl/hidden) in the [MIDL Reference](/windows/win32/midl/midl-language-reference.md).

    1. `local`

        The *local* attribute specifies to the MIDL compiler that an interface or function isn't remote. For more information, see [local](/windows/win32/Midl/local) in the [MIDL Reference](/windows/win32/midl/midl-language-reference.md).

    1. `restricted`

        The *restricted* attribute specifies that a library, or member of a module, interface, or dispinterface can't be called arbitrarily. For more information, see [restricted](/windows/win32/Midl/restricted) in the [MIDL Reference](/windows/win32/midl/midl-language-reference.md).

    1. `source`

        The *source* attribute indicates that a member of a [coclass](/windows/win32/Midl/coclass), property, or method is a source of events. For a member of a coclass, this attribute means that the member is called rather than implemented. For more information, see [source](/windows/win32/Midl/source) in the [MIDL Reference](/windows/win32/midl/midl-language-reference.md).

## See also

[Add a method](adding-a-method-visual-cpp.md)

[Add an IDL MFC method](../mfc/reference/add-idl-mfc-method-wizard.md)