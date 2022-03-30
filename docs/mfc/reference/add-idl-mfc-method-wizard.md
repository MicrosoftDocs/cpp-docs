---
description: "Learn more about: Use a Microsoft Visual Studio wizard to add a method to an IDL interface in your MFC or ATL project"
title: "Add an IDL MFC method"
ms.date: "03/30/2022"
f1_keywords: ["vc.codewiz.method.overview", "vc.codewiz.method.idlattrib"]
helpviewer_keywords: ["add IDL MFC method wizard [C++]", "IDL MFC methods [C++], adding", "methods [C++], adding using wizards", "IDL attributes, add an IDL MFC method wizard"]
ms.custom: devdivchpfy22
---

# Add an IDL MFC method

The **Add IDL MFC Method** wizard adds a method to an interface defined in an Interface Definition Library (IDL) in a Microsoft Framework Class (MFC) project. To use the **Add IDL MFC Method** wizard you must be in an MFC Project, ActiveX project or an ATL project that supports MFC. For example, if you have a Microsoft ActiveX control project, and you open the IDL library, using following procedure you can add the method to interface. If the project contains a class associated with the interface, the wizard will add the method to the class, too.

This wizard differs from the [Add Method](../../ide/adding-a-method-visual-cpp.md)  wizard (which adds a method to an IDL interface) in the following ways:

- It's specific to MFC, ActiveX, or ATL projects that support MFC. For ATL projects that don't support MFC, only the **Add Method** wizard is available.

- It adds the following entries if a Dispatch map is found in the project.
```cpp
BEGIN_DISPATCH_MAP(CMFCApplication2Doc, CDocument)
  DISP_FUNCTION_ID(CMFCApplication2Doc, "methodName", dispidmethodName, internalName, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()
```
- It generates the following associated method implementations:
```cpp
void CMFCApplication2Doc::internalName()
{
   AFX_MANAGE_STATE(AfxGetAppModuleState());
      // TODO: Add your dispatch handler code here
}
```
For ATL projects that don't support MFC, this wizard isn't available.

## Add a method to your interface

1. On the **View** menu, choose **Class View**.

1. In **Class View**, expand the project node to display the interface to which you want to add the method.

1. Right-click the name of the interface.

1. On the shortcut menu, choose **Add**, and then choose **Add Method**.

1. In the **Add IDL MFC Method** wizard, provide the information to create the method.

1. Select **OK** to add the method.

### UI element list

The following section describes the UI that you'll use to add a method:

:::image type="content" source="../reference/media/add-idl-mfc-method-wizard.png" alt-text="Add IDL MFC method screenshot.":::

- **Method name**

  Set the name for the method.

  |Interface type|Description|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Provide your own method name.|
  |MFC dispinterface|Provide your own method name or select a suggested method name from the list. If you select a name from the list, the appropriate value appears in the **Return type**, and it can't be changed.|
  |MFC ActiveX control dispinterface|Provide your own or select either of the stock methods [DoClick](../reference/colecontrol-class.md#doclick) and [Refresh](../reference/colecontrol-class.md#refresh). For more information, see [MFC ActiveX controls: Adding stock methods](../mfc-activex-controls-adding-stock-methods.md).|

- **Internal name**

  Only available for custom methods (if **Method type** is selected as custom) added to an MFC dispinterface. The name that will be used in the dispatch map, the header (.h) file, and the implementation (.cpp) file. By default, this name is the same as **Method name**.

  You can change the method name according to the following table if you are adding the method to an MFC dispinterface or MFC ActiveX control dispinterface.

  |Interface type|Description|
  |--------------------|-----------------|
  |ATL dual interface, custom interface, and local custom interface|Not available.|
  |MFC dispinterface|Set to the method name by default. You can edit the internal name.|
  |MFC ActiveX control dispinterface|You can set the internal name only for custom methods. Stock methods don't use an internal name.|

- **Return type**

  The data type returned by the method. The standard way to return error codes from methods defined in an interface is with a `HRESULT`.

  If the interface type is dual interface or custom interface, only `HRESULT` return type is allowed. You can set the data type according to the interface type, as defined in the following table:

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
  |**Custom**|You provide a custom implementation for the method selected in **Method name**. You can provide your own return type, or select one from the **Return type** list|

- **Parameters**

  Displays the method's parameters, modifiers, and types. The wizard updates the **Parameters** list as you add parameters.

- **+**

  Add a parameter. In **Parameters**, type the parameter type, name, and any modifiers. For example, `int x`, and choose **OK**.

  If you don't provide a parameter name, the wizard ignores any parameter attributes (ATL only) or **Parameter type** selections.

- **x**

  Removes the selected parameter from the **Parameters** list.

- **Pencil icon**

  Edit the selected parameter.

- `id`

  Sets the numeric ID that identifies the method. For more information, see [id](/windows/win32/Midl/id) in the *MIDL Reference*.

- `call_as`

  Specifies the name of the remote method to map to this local method. For more information, see [call_as](/windows/win32/Midl/call-as) in the *MIDL Reference*.

- `helpcontext`

  Specifies a context ID that lets the user view information about this method in the Help file. For more information, see [helpcontext](/windows/win32/Midl/helpcontext) in the *MIDL Reference*.

- `helpstring`

  Specifies a text that describes the associated element. By default its *Method name*. For more information, see [helpstring](/windows/win32/Midl/helpstring) in the *MIDL Reference*.

## See also

[Add Method ](../../ide/adding-a-method-visual-cpp.md)