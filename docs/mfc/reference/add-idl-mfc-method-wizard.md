---
description: "Learn more about: Use the Microsoft Visual Studio Add IDL MFC wizard to add a method to an IDL interface in your MFC or ATL project"
title: "Add an IDL MFC method"
ms.date: "04/01/2022"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add IDL MFC method wizard [C++]", "IDL MFC methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add an IDL MFC method wizard"]
ms.custom: devdivchpfy22
---

# Add an IDL MFC method

The **Add IDL MFC Method** wizard adds a method to an Interface Definition Library (IDL) interface defined in your Microsoft Framework Class (MFC) project. If the project contains a class associated with the interface, the wizard also adds the method to the class.

To use this wizard, you must be in an MFC Project, ActiveX project, or an ATL project that supports MFC. For example, if you have a Microsoft ActiveX control project, you can use the following procedure to add a method to an IDL interface in the solution.

This wizard differs from the [Add Method](../../ide/adding-a-method-visual-cpp.md) wizard (which adds a method to an IDL interface) in the following ways:

- It's specific to MFC, ActiveX, or ATL projects that support MFC. For ATL projects that don't support MFC, only the **Add Method** wizard is available.
- It adds the following entries if a Dispatch map is found in the project:

   ```cpp
   BEGIN_DISPATCH_MAP(CMFCApplication2Doc, CDocument)
      DISP_FUNCTION_ID(CMFCApplication2Doc, "methodName", dispidmethodName, internalName, VT_EMPTY, VTS_NONE)
   END_DISPATCH_MAP()
   ```

- It generates the following associated method implementation:

   ```cpp
   void CMFCApplication2Doc::internalName()
   {
       AFX_MANAGE_STATE(AfxGetAppModuleState());
       // TODO: Add your dispatch handler code here
   }
   ```

## Add a method to an interface

1. On the **View** menu, select **Class View**.

1. In **Class View**, expand the project node to display the interface to which you want to add the method.

1. Right-click the name of the interface.

1. On the shortcut menu, select **Add** and then select **Add Method**.

1. In the **Add IDL MFC Method** wizard, provide information about the method.

1. Select **OK** to add the method.

### UI element list

The following section describes the Add IDL MFC Method wizard UI:

:::image type="content" source="../reference/media/add-idl-mfc-method-wizard.png" alt-text="Wizard UI. Method name:DoClick, Internal name:DoClick, Return type:void, Method type:custom, Parameters:long l, char C, Attributes id:1.":::

- **Method name**

  Set the name for the method. The following table describes the method name options depending on the kind of interface:

  |Interface kind|Method name|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Provide your own method name.|
  |MFC dispinterface|Provide your own method name or select a suggested method name from the list. If you select a name from the list, the appropriate return type appears in **Return type**, and can't be changed.|
  |MFC ActiveX control dispinterface|Provide your own method name or select one of the stock methods: [DoClick](../reference/colecontrol-class.md#doclick) or [Refresh](../reference/colecontrol-class.md#refresh). For more information about stock methods, see [MFC ActiveX controls: Adding stock methods](../mfc-activex-controls-adding-stock-methods.md).|

- **Internal name**

  Only available when **Method type** is **custom**. **Internal name** is the name that will be used in the dispatch map, the header (.h) file, and the implementation (.cpp) file. By default, this name is the same as **Method name**. It's added to the MFC dispinterface.

  If you're adding the method to an MFC or MFC ActiveX control dispinterface, you can change the method name as described by the following table:

  |Interface type|Internal name|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Not available.|
  |MFC dispinterface|Set to the method name by default. You can edit the internal name.|
  |MFC ActiveX control dispinterface|You can set the internal name only for custom methods. Stock methods don't use an internal name.|

- **Return type**

  The data type returned by the method. The standard return type for interface methods is `HRESULT`.

  If the interface is a dual interface or a custom interface, only the `HRESULT` return type is allowed.

  You can set the data type according to the kind of interface the method is being added to, as described in the following table:

  |Interface kind|Return type|
  |--------------------|-----------------|
  |Dual interface|`HRESULT`. Unchangeable.|
  |Custom interface|`HRESULT`. Unchangeable.|
  |Local custom interface|Provide your own return type or select one from the list.|
  |Dispinterface|Provide your own return type or select one from the list.|
  |MFC ActiveX control dispinterface|If you implement a stock method, the return type is set to the appropriate value and is unchangeable. If you select a method from the **Method name** list, and select **Custom** under **Select method type**, select a return type from the list.|

- **Method type**

  Available only for MFC ActiveX controls. Unavailable if you provided a method name in **Method name** rather than selecting a method from the list.

  If you select one of the methods in the **Method name** list, in the **Method type** drop-down select either the **Stock** or **Custom** implementation. The selection of the method affects the return type and method implementation that the wizard provides, as described in the following table:

  |Method type|Description|
  |-----------------|-----------------|
  |**Stock**|The default. Inserts the default implementation of the method selected in the **Method name** list. **Return type** is unchangeable if you select **Stock**.|
  |**Custom**|You provide a custom implementation for the method selected in **Method name**. You can provide your own return type or select one from the **Return type** list.|

- **Parameters**

  Displays the method's parameters, modifiers, and types. The wizard updates the **Parameters** list as you add parameters.

- **+**

  Add a parameter. In **Parameters**, type the parameter type, name, and any modifiers. For example, `int x`, and choose **OK**.

  If you don't provide a parameter name, the wizard ignores any **Parameter type** selections; and for ATL projects, the parameter attributes are also ignored.

- **x**

  Removes the selected parameter from the **Parameters** list.

- **Pencil icon**

  Edit the selected parameter.

- **`id`**

  Sets the numeric ID that identifies the method. For more information, see [`id`](/windows/win32/midl/id) in the [MIDL reference](/windows/win32/midl/midl-language-reference).

- **`call_as`**

  Specifies the name of the remote method to map to this local method. For more information, see [`call_as`](/windows/win32/midl/call-as) in the [MIDL reference](/windows/win32/midl/midl-language-reference).

- **`helpcontext`**

  Specifies a context ID that lets the user view information about this method in the Help file. For more information, see [`helpcontext`](/windows/win32/Midl/helpcontext) in the [MIDL reference](/windows/win32/midl/midl-language-reference).

- **`helpstring`**

  Specifies a text that describes the associated element. By default its *Method name*. For more information, see [helpstring](/windows/win32/Midl/helpstring) in the [MIDL reference](/windows/win32/midl/midl-language-reference).

## See also

[Add method wizard](../../ide/adding-a-method-visual-cpp.md)\
[Add an IDL method wizard](../../ide/add-interface-definition-library-method-wizard.md)\
[MFC wizards and dialog boxes](mfc-wizards-and-dialog-boxes.md)