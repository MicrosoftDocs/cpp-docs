---
description: "Learn more about: Adding a Property Page (ATL Tutorial, Part 6)"
title: "Adding a Property Page (ATL Tutorial, Part 6)"
ms.custom: "get-started-article"
ms.date: "09/27/2018"
ms.assetid: df80d255-e7ea-49d9-b940-3f012e90cf9b
---
# Adding a Property Page (ATL Tutorial, Part 6)

> [!NOTE]
> The ATL OLE DB Provider wizard is not available in Visual Studio 2019 and later.

Property pages are implemented as separate COM objects, which allow them to be shared if required. In this step, you will do the following tasks to add a property page to the control:

- Creating the Property Page Resource

- Adding Code to Create and Manage the Property Page

- Adding the Property Page to the Control

## Creating the Property Page Resource

To add a property page to your control, use the ATL Property Page template.

### To add a Property Page

1. In **Solution Explorer**, right-click `Polygon`.

1. On the shortcut menu, click **Add** > **New Item**.

1. From the list of templates, select **ATL** > **ATL Property Page** and click **Add**.

1. When the **ATL Property Page Wizard** appears, enter *PolyProp* as the **Short** name.

1. Click **Strings** to open the **Strings** page and enter **&Polygon** as the **Title**.

   The **Title** of the property page is the string that appears in the tab for that page. The **Doc string** is a description that a property frame uses to put in a status line or tool tip. Note that the standard property frame currently does not use this string, so you can leave it with the default contents. You will not generate a **Help file** at the moment, so delete the entry in that text box.

1. Click **Finish**, and the property page object will be created.

The following three files are created:

|File|Description|
|----------|-----------------|
|PolyProp.h|Contains the C++ class `CPolyProp`, which implements the property page.|
|PolyProp.cpp|Includes the PolyProp.h file.|
|PolyProp.rgs|The registry script that registers the property page object.|

The following code changes are also made:

- The new property page is added to the object entry map in Polygon.cpp.

- The `PolyProp` class is added to the Polygon.idl file.

- The new registry script file PolyProp.rgs is added to the project resource.

- A dialog box template is added to the project resource for the property page.

- The property strings that you specified are added to the resource string table.

Now add the fields that you want to appear on the property page.

### To add fields to the Property Page

1. In **Solution Explorer**, double-click the Polygon.rc resource file. This will open **Resource View**.

1. In **Resource View**, expand the `Dialog` node and double-click `IDD_POLYPROP`. Note that the dialog box that appears is empty except for a label that tells you to insert your controls here.

1. Select that label and change it to read `Sides:` by altering the **Caption** text in the **Properties** window.

1. Resize the label box so that it fits the size of the text.

1. Drag an **Edit Control** from the **Toolbox** to the right of the label.

1. Finally, change the **ID** of the edit control to `IDC_SIDES` using the **Properties** window.

This completes the process of creating the property page resource.

## Adding Code to Create and Manage the Property Page

Now that you have created the property page resource, you need to write the implementation code.

First, enable the `CPolyProp` class to set the number of sides in your object when the **Apply** button is pressed.

### To modify the Apply function to set the number of sides

1. Replace the `Apply` function in PolyProp.h with the following code:

    [!code-cpp[NVC_ATL_Windowing#58](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_1.h)]

A property page can have more than one client attached to it at a time, so the `Apply` function loops around and calls `put_Sides` on each client with the value retrieved from the edit box. You are using the [CComQIPtr](../atl/reference/ccomqiptr-class.md) class, which performs the `QueryInterface` on each object to obtain the `IPolyCtl` interface from the `IUnknown` interface (stored in the `m_ppUnk` array).

The code now checks that setting the `Sides` property actually worked. If it fails, the code displays a message box displaying error details from the `IErrorInfo` interface. Typically, a container asks an object for the `ISupportErrorInfo` interface and calls `InterfaceSupportsErrorInfo` first, to determine whether the object supports setting error information. You can skip this task.

[CComPtr](../atl/reference/ccomptr-class.md) helps you by automatically handling the reference counting, so you do not need to call `Release` on the interface. `CComBSTR` helps you with BSTR processing, so you do not have to perform the final `SysFreeString` call. You also use one of the various string conversion classes, so you can convert the BSTR if necessary (this is why the USES_CONVERSION macro is at the start of the function).

You also need to set the property page's dirty flag to indicate that the **Apply** button should be enabled. This occurs when the user changes the value in the **Sides** edit box.

### To handle the Apply button

1. In **Class View**, right-click `CPolyProp` and click **Properties** on the shortcut menu.

1. In the **Properties** window, click the **Events** icon.

1. Expand the `IDC_SIDES` node in the event list.

1. Select `EN_CHANGE`, and from the drop-down menu to the right, click **\<Add> OnEnChangeSides**. The `OnEnChangeSides` handler declaration will be added to Polyprop.h, and the handler implementation to Polyprop.cpp.

Next, you will modify the handler.

### To modify the OnEnChangeSides method

1. Add the following code in Polyprop.cpp to the `OnEnChangeSides` method (deleting any code that the wizard put there):

    [!code-cpp[NVC_ATL_Windowing#59](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_2.cpp)]

`OnEnChangeSides` will be called when a `WM_COMMAND` message is sent with the `EN_CHANGE` notification for the `IDC_SIDES` control. `OnEnChangeSides` then calls `SetDirty` and passes TRUE to indicate the property page is now dirty and the **Apply** button should be enabled.

## Adding the Property Page to the Control

The ATL Property Page template and wizard do not add the property page to your control for you automatically, because there could be multiple controls in your project. You will need to add an entry to the control's property map.

### To add the property page

1. Open PolyCtl.h and add these lines to the property map:

    [!code-cpp[NVC_ATL_Windowing#60](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_3.h)]

The control's property map now looks like this:

[!code-cpp[NVC_ATL_Windowing#61](../atl/codesnippet/cpp/adding-a-property-page-atl-tutorial-part-6_4.h)]

You could have added a `PROP_PAGE` macro with the CLSID of your property page, but if you use the `PROP_ENTRY` macro as shown, the `Sides` property value is also saved when the control is saved.

The three parameters to the macro are the property description, the DISPID of the property, and the CLSID of the property page that has the property on it. This is useful if, for example, you load the control into Visual Basic and set the number of Sides at design time. Because the number of Sides is saved, when you reload your Visual Basic project, the number of Sides will be restored.

## Building and Testing the Control

Now build that control and insert it into ActiveX Control Test Container. In **Test Container**, on the **Edit** menu, click **PolyCtl Class Object**. The property page appears with the information you added.

The **Apply** button is initially disabled. Start typing a value in the **Sides** box and the **Apply** button will become enabled. After you have finished entering the value, click the **Apply** button. The control display changes, and the **Apply** button is again disabled. Try entering an invalid value. You will see a message box containing the error description that you set from the `put_Sides` function.

Next, you will put your control on a Web page.

[Back to Step 5](../atl/adding-an-event-atl-tutorial-part-5.md) &#124; [On to Step 7](../atl/putting-the-control-on-a-web-page-atl-tutorial-part-7.md)

## See also

[Tutorial](../atl/active-template-library-atl-tutorial.md)
