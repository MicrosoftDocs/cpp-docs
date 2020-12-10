---
description: "Learn more about: MFC Add Class Wizard"
title: "MFC Add Class Wizard"
ms.date: "09/06/2019"
f1_keywords: ["vc.codewiz.class.mfc.simple.overview"]
helpviewer_keywords: ["MFC Add Class Wizard", "wizards [MFC]"]
ms.assetid: ad3b0989-d307-43b2-9417-3f9a78889024
---
# MFC Add Class Wizard

Use this code wizard to add a class to an existing MFC project, or to add a class to an ATL project that supports MFC. You can also add MFC classes to Win32 projects that have MFC support. The features you specified when you created your project determine the options available in this dialog box. To access the wizard, click on **Add Class** in [Class Wizard](mfc-class-wizard.md).

![Add MFC Class Wizard](media/add-mfc-class-wizard.png "Add MFC Class Wizard")

## Names

In this page, specify the class name, the base class, and file names for the new class.

- **Class name**

  Specifies the name of the new class and provides the default basis for the names of IDs and files on this page. C++ classes typically start with "C", so for example, "CMyClass" becomes "MyClass.h", and so on.

- **Base class**

  Specifies the name of the base class for the new class. By default, the base class is [CWnd](../../mfc/reference/cwnd-class.md). The base class you select determines whether other boxes on this page are active.

  The type of class you set as the base class determines whether the class has a dialog ID or a resource ID. The general types of classes are as follows:

  - Classes such as [CButton](../../mfc/reference/cbutton-class.md), [CWnd](../../mfc/reference/cwnd-class.md), or [CDocument](../../mfc/reference/cdocument-class.md), which do not require a dialog ID or resource ID. These classes do not use a dialog or resource ID. If you select one of these classes for your base class, the **Dialog ID** box and the **DHTML resource ID** box are dimmed.

  - Classes such as [CDialog](../../mfc/reference/cdialog-class.md), [CFormView](../../mfc/reference/cformview-class.md), or [CPropertyPage](../../mfc/reference/cpropertypage-class.md), which require a dialog ID.

  - The class [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md), which requires a dialog ID, a DHTML resource ID, and an HTML file name.

  For classes requiring a dialog ID, you might find it more efficient to use the [Resource editor](../../windows/resource-editors.md) to create the dialog resource, assign its ID in the [Class Wizard](mfc-class-wizard.md), and then create a class associated with that resource ID. See [Creating a New Dialog Box](../../windows/creating-a-new-dialog-box.md) for more information on creating a standard Windows dialog box.

  > [!NOTE]
  > If you create a dialog resource first and derive its new class from `CDHtmlDialog`, delete the standard Windows **OK** and **Cancel** buttons that appear on the default dialog box. The standard Windows dialog box hosts the DHTML form, which contains its own **OK** and **Cancel** buttons.

  While your dialog box can contain both Windows controls and DHTML controls, it is not recommended.

- **Dialog ID**

  Specifies the ID of the dialog, if you selected `CDialog`, `CFormView`, `CPropertyPage`, or `CDHtmlDialog` as the **Base class**.

- **.h file**

  Sets the name of the header file for the new object's class. By default, this name is based on the name you provide in **Class name**. Click the ellipsis button to save the file name to the location of your choice, or to append the class declaration to an existing file. If you choose an existing file, the wizard will not save it to the selected location until you click **Finish** in the wizard.

  The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class declaration should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.

- **.cpp file**

  Sets the name of the implementation file for the new object's class. By default, this name is based on the name you provide in **Class name**. Click the ellipsis button to save the file name to the location of your choice. The file is not saved to the selected location until you click **Finish** in the wizard.

  The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class implementation should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.

- **Active accessibility**

  Enables MFC's support for Active Accessibility by calling [EnableActiveAccessibility](../../mfc/reference/cwnd-class.md#enableactiveaccessibility) in the constructor. This option is available for classes derived from [CWnd](../../mfc/reference/cwnd-class.md).

- **Automation**

  Sets the class level of support for [Automation](../../mfc/automation.md). Automation at the class level is available for all classes that support Automation. It is also available for projects created with support for Automation. That is, either an MFC project that [supports ATL](../../atl/reference/mfc-support-in-atl-projects.md), or an MFC project for which you selected the **Automation** check box in the [Advanced Features](../../mfc/reference/advanced-features-mfc-application-wizard.md) page of the MFC Application Wizard.

   Automation support is not available for the following base classes:

  - `CAsyncMonitorFile`

  - `CAsyncSocket`

  - `CCachedDataPathProperty`

  - `CConnectionPoint`

  - `CDatabase`

  - `CDataPathProperty`

  - `CHttpFilter`

  - `CHttpServer`

  - `CInternetSession`

  - `CObject`

  - `CSocket`

## See also

[MFC Class](../../mfc/reference/adding-an-mfc-class.md)<br/>
[Adding a Class](../../ide/adding-a-class-visual-cpp.md)
