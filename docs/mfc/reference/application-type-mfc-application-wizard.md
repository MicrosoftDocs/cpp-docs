---
description: "Learn more about: Application Type, MFC Application Wizard"
title: "Application Type, MFC Application Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.appwiz.mfc.exe.apptype"]
helpviewer_keywords: ["static libraries, MFC"]
ms.assetid: c3f62b0e-3f13-42c5-9859-d3890d0c3e1d
---
# Application Type, MFC Application Wizard

Use this page of the [MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md) to design and add basic features to a new MFC application.

- **Application type**

  Specifies the type of document support that you want to create in your application. The type of application you select determines the user interface options that are available for your application. See [User Interface Features, MFC Application Wizard](../../mfc/reference/user-interface-features-mfc-application-wizard.md) for more information.

   For more information about the types of documents, see:

  - [SDI and MDI](../../mfc/sdi-and-mdi.md)

  - [Frame Windows](../../mfc/frame-windows.md)

  - [Frame-Window Classes](../../mfc/frame-window-classes.md)

  - [Documents, Views, and the Framework](../../mfc/documents-views-and-the-framework.md)

  - [Dialog Boxes](../../mfc/dialog-boxes.md)

  |Option|Description|
  |------------|-----------------|
  |**Single document**|Creates a single document interface (SDI) architecture for your application, where a view class is based on [CView Class](../../mfc/reference/cview-class.md). You can change the base class for the view in the [Generated Classes, MFC Application Wizard](../../mfc/reference/generated-classes-mfc-application-wizard.md) page of the wizard. To create a form-based application, for example, use [CFormView Class](../../mfc/reference/cformview-class.md) for the view class.<br /><br /> In this type of application, the document's frame window can hold only one document.|
  |**Multiple documents**|Creates a multiple document interface (MDI) architecture for your application, where a view class is based on `CView`. You can change the base class for the view in the **Generated Classes** page of the wizard. To create a form-based application, for example, use `CFormView` for the view class.<br /><br /> In this type of application, the document's frame window can hold multiple child windows.|
  |**Tabbed documents**|Places each document on a separate tab.|
  |**Dialog based**|Creates a dialog-based architecture for your application where a dialog class is based on `CDialog`. (To create an HTML dialog, select the box **Use HTML dialog**.)|
  |**Use HTML dialog**|For dialog box applications only. Derives the dialog class from [CDHtmlDialog Class](../../mfc/reference/cdhtmldialog-class.md) instead of [CDialog Class](../../mfc/reference/cdialog-class.md). If you check this box, `CDHtmlDialog` is listed in the **Base class** box in the [Generated Classes, MFC Application Wizard](../../mfc/reference/generated-classes-mfc-application-wizard.md) page of the wizard.<br /><br /> A `CDHtmlDialog`-derived dialog box displays HTML-based dialog boxes, exchanges data with HTML controls and handles HTML events.|
  |**Multiple top-level documents**|Creates a multiple top-level architecture for your application, where a view class is based on `CView`.<br /><br /> In this type of application, when a user clicks **New** (or **New Frame**) on the **File** menu, the application creates a window whose parent is implicitly the desktop. The new document frame appears in the taskbar and is not restricted to the client area of the application window.|

- **Document/view architecture support**

  Specifies whether to include document/view architecture in your application by using the [CDocument Class](../../mfc/reference/cdocument-class.md) and the [CView Class](../../mfc/reference/cview-class.md) (default). Clear this check box if you are porting a non-MFC application or if you want to reduce the size of your compiled executable. By default, an application without document/view architecture is derived from [CWinApp Class](../../mfc/reference/cwinapp-class.md), and it does not include MFC support for opening a document from a disk file.

- **Resource language**

  Sets the language of your resources. The list displays the languages available on your system, as installed by Visual Studio. If you want to select a language other than your system language, the appropriate template folder for that language must already be installed.

  The language that you select is reflected in the **Localized strings** option of the [Document Template Strings, MFC Application Wizard](../../mfc/reference/document-template-strings-mfc-application-wizard.md) page of the wizard.

- **Use Unicode libraries**

  Specifies whether the Unicode or non-Unicode version of the MFC libraries is used.

- **Project style**

  Indicates whether your application has a standard MFC, File Explorer, Visual Studio, or Office architecture and display. For more information, see [Creating a File Explorer-Style MFC Application](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md).

  |Option|Description|
  |------------|-----------------|
  |**MFC standard**|Provides a standard MFC application architecture.|
  |**File Explorer**|Implements a File Explorer-like application by using a splitter window where the left pane is a [CTreeView Class](../../mfc/reference/ctreeview-class.md) and the right pane is a [CListView Class](../../mfc/reference/clistview-class.md).|
  |**Visual Studio**|Implements a Visual Studio-like application that contains four dockable panes (**File View**, **Class View**, **Properties**, and **Output**) that are derived from [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) and a main frame window that is derived from [CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md) (default).|
  |**Office**|Implements an Office-like application that contains a ribbon that is derived from [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md), an Outlook bar that is derived from [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md), a caption bar that is derived from [CMFCCaptionBar Class](../../mfc/reference/cmfccaptionbar-class.md), and a main frame that is derived from [CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md).|

- **Visual style and colors**

  Determines the visual style of the application. The following options are available:

  - **Windows Native/Default**

  - **Office 2003**

  - **Visual Studio 2005**

  - **Office 2007 (Blue theme)**

  - **Office 2007 (Black theme)**

  - **Office 2007 (Silver theme)**

  - **Office 2007 (Aqua theme)**

- **Enable visual style switching**

  Specifies whether the user can change the visual style of the application at runtime, usually by selecting the appropriate visual style from a menu or ribbon.

- **Use of MFC**

  Specifies how to link to the MFC library. By default, MFC is linked as a shared DLL.

  |Option|Description|
  |------------|-----------------|
  |**Use MFC in a shared DLL**|Links the MFC library to an application as a shared DLL. The application makes calls to the MFC library at run time. This option reduces the disk and memory requirements of applications that consist of multiple executable files that use the MFC library. Both Win32 and MFC applications can call functions in your DLL (default)|
  |**Use MFC in a static library**|Links an application to the static MFC library at build time.|

## See also

[MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)<br/>
[File Types Created for Visual Studio C++ projects](../../build/reference/file-types-created-for-visual-cpp-projects.md)
