---
description: "Learn more about: MFC ActiveX Controls: Adding Another Custom Property Page"
title: "MFC ActiveX Controls: Adding Another Custom Property Page"
ms.date: "11/04/2016"
helpviewer_keywords: ["property pages [MFC], MFC ActiveX controls", "custom property pages [MFC]", "ActiveX controls [MFC], property pages", "MFC ActiveX controls [MFC], property pages"]
ms.assetid: fcf7e119-9f29-41a9-908d-e9b1607e08af
---
# MFC ActiveX Controls: Adding Another Custom Property Page

Occasionally, an ActiveX control will have more properties than can reasonably fit on one property page. In this case, you can add property pages to the ActiveX control to display these properties.

This article discusses adding new property pages to an ActiveX control that already has at least one property page. For more information on adding stock property pages (font, picture, or color), see the article [MFC ActiveX Controls: Using Stock Property Pages](mfc-activex-controls-using-stock-property-pages.md).

The following procedures use a sample ActiveX control framework created by the ActiveX Control Wizard. Therefore, the class names and identifiers are unique to this example.

For more information on using property pages in an ActiveX control, see the following articles:

- [MFC ActiveX Controls: Property Pages](mfc-activex-controls-property-pages.md)

- [MFC ActiveX Controls: Using Stock Property Pages](mfc-activex-controls-using-stock-property-pages.md)

    > [!NOTE]
    >  It is strongly recommended that new property pages adhere to the size standard for ActiveX control property pages. The stock picture and color property pages measure 250x62 dialog units (DLU). The standard font property page is 250x110 DLUs. The default property page created by the ActiveX Control Wizard uses the 250x62 DLU standard.

### To insert a new property page template into your project

1. With your control project open, open Resource View in the project workspace.

1. Right-click in Resource View to open the shortcut menu and click **Add Resource**.

1. Expand the **Dialog** node, and select **IDD_OLE_PROPPAGE_SMALL**.

1. Click **New** to add the resource to your project.

1. Select the new property page template to refresh the **Properties** window (in **Resource View**).

1. Enter a new value for the **ID** property. This example uses **IDD_PROPPAGE_NEWPAGE**.

1. Click **Save** on the toolbar.

### To associate the new template with a class

1. Open Class View.

1. Right-click in Class View to open the shortcut menu.

1. From the shortcut menu, click **Add** and then click **Add Class**.

   This opens the [Add Class](../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box.

1. Double-click the **MFC Class** template.

1. In the **Class Name** box in the [MFC Class Wizard](reference/mfc-add-class-wizard.md), type a name for the new dialog class. (In this example, `CAddtlPropPage`.)

1. If you want to change file names, click **Change**. Type in the names for your implementation and header files, or accept the default names.

1. In the **Base Class** box, select `COlePropertyPage`.

1. In the **Dialog ID** box, select **IDD_PROPPAGE_NEWPAGE**.

1. Click **Finish** to create the class.

To allow the control's users access to this new property page, make the following changes to the control's property page IDs macro section (located in the control implementation file):

[!code-cpp[NVC_MFC_AxUI#32](codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_1.cpp)]

Note that you must increase the second parameter of the BEGIN_PROPPAGEIDS macro (the property page count) from 1 to 2.

You must also modify the control implementation file (.CPP) file to include the header (.H) file of the new property page class.

The next step involves creating two new string resources that will provide a type name and a caption for the new property page.

#### To add new string resources to a property page

1. With your control project open, open Resource View.

1. Double-click the **String Table** folder and then double-click the existing string table resource to which you want to add a string.

   This opens the string table in a window.

1. Select the blank line at the end of the string table and type the text, or caption, of the string: for example, "Additional Property Page."

   This opens a **String Properties** page showing **Caption** and **ID** boxes. The **Caption** box contains the string you typed.

1. In the **ID** box, select or type an ID for the string. Press Enter when you finish.

   This example uses **IDS_SAMPLE_ADDPAGE** for the type name of the new property page.

1. Repeat steps 3 and 4 using **IDS_SAMPLE_ADDPPG_CAPTION** for the ID and "Additional Property Page" for the caption.

1. In the .CPP file of your new property page class (in this example, `CAddtlPropPage`) modify the `CAddtlPropPage::CAddtlPropPageFactory::UpdateRegistry` so that IDS_SAMPLE_ADDPAGE is passed by [AfxOleRegisterPropertyPageClass](reference/registering-ole-controls.md#afxoleregisterpropertypageclass), as in the following example:

   [!code-cpp[NVC_MFC_AxUI#33](codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_2.cpp)]

1. Modify the constructor of `CAddtlPropPage` so that IDS_SAMPLE_ADDPPG_CAPTION is passed to the `COlePropertyPage` constructor, as follows:

   [!code-cpp[NVC_MFC_AxUI#34](codesnippet/cpp/mfc-activex-controls-adding-another-custom-property-page_3.cpp)]

After you have made the necessary modifications rebuild your project and use Test Container to test the new property page. See [Testing Properties and Events with Test Container](testing-properties-and-events-with-test-container.md) for information on how to access the test container.

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
