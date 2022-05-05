---
description: "Learn more about: Use a Microsoft Visual Studio wizard to add a method to an interface definition language (IDL) interface in your project"
title: "Add an IDL method"
ms.date: "04/13/2022"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add IDL method wizard [C++]", "IDL methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add an IDL method wizard"]
ms.custom: devdivchpfy22
---

# Add an IDL method

The **Add IDL Method** wizard adds a method to an Interface Definition Library (IDL) interface, such as in an ATL project that contains an IDL file. This wizard isn't available in projects that support MFC.

This wizard differs from the [**Add method**](adding-a-method-visual-cpp.md) wizard and the [**Add IDL MFC method**](../mfc/reference/add-idl-mfc-method-wizard.md) wizard in the following ways:

- The **Add method** wizard adds a method to an interface in your project and can update the class associated with the interface.
- The **Add IDL MFC method** wizard is specific to MFC, ActiveX, or ATL projects that support MFC.

## Add a method to your IDL interface

1. On the **View** menu, select **Class View**.

1. In the **Class View** pane, expand the project node to display the IDL interface (`.idl`file) to which you want to add the method.

1. Right-click the name of the interface.

1. On the shortcut menu, select **Add** > **Add Method**.

1. In the **Add IDL Method** wizard, provide the information to create the method.

1. Select **OK** to add the method.

### User Interface element list

The following section describes the wizard interface that you'll use to add a method:

:::image type="content" source= "media/add-interface-definition-library-method-wizard.png" alt-text="Screenshot of adding a method using the wizard. Shows two parameters: [ in ] int i and [ in ] float f. Return type is HRESULT. Infer in out parameter values from type is selected.":::

- **Method name**

  Provide a name for the method.

- **Return type**

  The data type returned by the method. The standard way to return error codes from methods defined in an interface is with a `HRESULT`.

  The following table describes the different kinds of interfaces that you can add a method to, and the allowed return type. For dual and custom interfaces, the return type must be `HRESULT` and the wizard won't allow you to change it.

  |Interface kind|Return type|
  |--------------------|-----------------|
  |[Dual interface](/windows/win32/winauto/dual-interfaces--iaccessible-and-idispatch)|`HRESULT`. Unchangeable.|
  |[Custom interface](/windows/win32/winauto/custom-user-interface-elements)|`HRESULT`. Unchangeable.|
  |Local custom interface|Provide your own return type or select it from the drop-down list.|
  |[Dispinterface](/windows/win32/midl/dispinterface)|Provide your own return type or select it from the drop-down list.|

- **Parameters**

  Displays the method's parameters, modifiers, and types.

- **+**

  Add a parameter. In **Parameters**, type the parameter type, name, and any modifiers. For example, `[in] int i`, and choose **OK**.

- **x**

  Removes the selected parameter from the **Parameters** list.

- **Infer in/out parameters values from types**

  Inserts the `[in]` or `[out]` attribute based on the parameter's type.

- **Set the last parameter as the return value (retval)**

  The last parameter will be treated as the method's return value.

- **Attributes**

  The following attributes are also described in the [MIDL Reference](/windows/win32/midl/midl-language-reference).

  - `id`

    Sets the numeric ID that identifies the method. For more information, see [`id`](/windows/win32/Midl/id).

  - `call_as`

    Specifies the name of the remote method to map to this local method. For more information, see [`call_as`](/windows/win32/Midl/call-as).

  - `helpcontext`

    Specifies a context ID that lets the user view information about this method in the Help file. For more information, see [`helpcontext`](/windows/win32/Midl/helpcontext).

  - `helpstring`

    Specifies the character string used to describe the element to which it applies. For more information, see [`helpstring`](/windows/win32/Midl/helpstring).

- **Additional attributes**

    - `hidden`

      Indicates that the item exists but shouldn't be displayed in a user-oriented browser. For more information, see [`hidden`](/windows/win32/Midl/hidden).

    - `local`

      Specifies that an interface or function isn't remote. For more information, see [`local`](/windows/win32/Midl/local).

    - `restricted`

      Specifies that a library, or member of a module, interface, or dispinterface can't be called arbitrarily. For more information, see [`restricted`](/windows/win32/Midl/restricted).

    - `source`

      Indicates that a member of a [`coclass`](/windows/win32/Midl/coclass), property, or method is a source of events. For a member of a `coclass`, this attribute means that the member is called rather than implemented. For more information, see [`source`](/windows/win32/Midl/source).

## See also

[Add a method wizard](adding-a-method-visual-cpp.md)\
[Add an IDL MFC method wizard](../mfc/reference/add-idl-mfc-method-wizard.md)
