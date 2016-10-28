---
title: "Application Type, MFC Application Wizard"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.exe.apptype"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "static libraries, MFC"
ms.assetid: c3f62b0e-3f13-42c5-9859-d3890d0c3e1d
caps.latest.revision: 10
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Application Type, MFC Application Wizard
Use this page of the [MFC Application Wizard](../mfcref/mfc-application-wizard.md) to design and add basic features to a new MFC application.  
  
 **Application type**  
 Specifies the type of document support that you want to create in your application. The type of application you select determines the user interface options that are available for your application. See [User Interface Features, MFC Application Wizard](../mfcref/user-interface-features--mfc-application-wizard.md) for more information.  
  
 For more information about the types of documents, see:  
  
-   [SDI and MDI](../mfc/sdi-and-mdi.md)  
  
-   [Frame Windows](../mfc/frame-windows.md)  
  
-   [Frame-Window Classes](../mfc/frame-window-classes.md)  
  
-   [Documents, Views, and the Framework](../mfc/documents--views--and-the-framework.md)  
  
-   [Dialog Boxes](../mfc/dialog-boxes.md)  
  
|Option|Description|  
|------------|-----------------|  
|**Single document**|Creates a single document interface (SDI) architecture for your application, where a view class is based on [CView Class](../mfcref/cview-class.md). You can change the base class for the view in the [Generated Classes, MFC Application Wizard](../mfcref/generated-classes--mfc-application-wizard.md) page of the wizard. To create a form-based application, for example, use [CFormView Class](../mfcref/cformview-class.md) for the view class.<br /><br /> In this type of application, the document's frame window can hold only one document.|  
|**Multiple documents**|Creates a multiple document interface (MDI) architecture for your application, where a view class is based on `CView`. You can change the base class for the view in the **Generated Classes** page of the wizard. To create a form-based application, for example, use `CFormView` for the view class.<br /><br /> In this type of application, the document's frame window can hold multiple child windows.|  
|**Tabbed documents**|Places each document on a separate tab.|  
|**Dialog based**|Creates a dialog-based architecture for your application where a dialog class is based on `CDialog`. (To create an HTML dialog, select the box **Use HTML dialog**.)|  
|**Use HTML dialog**|For dialog box applications only. Derives the dialog class from [CDHtmlDialog Class](../mfcref/cdhtmldialog-class.md) instead of [CDialog Class](../mfcref/cdialog-class.md). If you check this box, `CDHtmlDialog` is listed in the **Base class** box in the [Generated Classes, MFC Application Wizard](../mfcref/generated-classes--mfc-application-wizard.md) page of the wizard.<br /><br /> A `CDHtmlDialog`-derived dialog box displays HTML-based dialog boxes, exchanges data with HTML controls and handles HTML events.|  
|**Multiple top-level documents**|Creates a multiple top-level architecture for your application, where a view class is based on `CView`.<br /><br /> In this type of application, when a user clicks **New** (or **New Frame**) on the **File** menu, the application creates a window whose parent is implicitly the desktop. The new document frame appears in the taskbar and is not restricted to the client area of the application window.|  
  
 **Document/view architecture support**  
 Specifies whether to include document/view architecture in your application by using the [CDocument Class](../mfcref/cdocument-class.md) and the [CView Class](../mfcref/cview-class.md) (default). Clear this check box if you are porting a non-MFC application or if you want to reduce the size of your compiled executable. By default, an application without document/view architecture is derived from [CWinApp Class](../mfcref/cwinapp-class.md), and it does not include MFC support for opening a document from a disk file.  
  
 **Resource language**  
 Sets the language of your resources. The list displays the languages available on your system, as installed by Visual Studio. If you want to select a language other than your system language, the appropriate template folder for that language must already be installed. For more information about installing language resources different from the defaults available in the **Resource language** list, see [Wizard Support for Other Languages](../ide/wizard-support-for-other-languages.md).  
  
 The language that you select is reflected in the **Localized strings** option of the [Document Template Strings, MFC Application Wizard](../mfcref/document-template-strings--mfc-application-wizard.md) page of the wizard.  
  
 **Use Unicode libraries**  
 Specifies whether the Unicode or non-Unicode version of the MFC libraries is used.  
  
 **Project style**  
 Indicates whether your application has a standard MFC, File Explorer, Visual Studio, or Office architecture and display. For more information, see [Creating a File Explorer-Style MFC Application](../mfcref/creating-a-file-explorer-style-mfc-application.md).  
  
|Option|Description|  
|------------|-----------------|  
|**MFC standard**|Provides a standard MFC application architecture.|  
|**File Explorer**|Implements a File Explorer–like application by using a splitter window where the left pane is a [CTreeView Class](../mfcref/ctreeview-class.md) and the right pane is a [CListView Class](../mfcref/clistview-class.md).|  
|**Visual Studio**|Implements a Visual Studio–like application that contains four dockable panes (**File View**, **Class View**, **Properties**, and **Output**) that are derived from [CDockablePane Class](../mfcref/cdockablepane-class.md) and a main frame window that is derived from [CMDIFrameWndEx Class](../mfcref/cmdiframewndex-class.md) (default).|  
|**Office**|Implements an Office–like application that contains a ribbon that is derived from [CMFCRibbonBar Class](../mfcref/cmfcribbonbar-class.md), an Outlook bar that is derived from [CMFCOutlookBar Class](../mfcref/cmfcoutlookbar-class.md), a caption bar that is derived from [CMFCCaptionBar Class](../mfcref/cmfccaptionbar-class.md), and a main frame that is derived from [CMDIFrameWndEx Class](../mfcref/cmdiframewndex-class.md).|  
  
 **Visual style and colors**  
 Determines the visual style of the application. The following options are available:  
  
-   **Windows Native/Default**  
  
-   **Office 2003**  
  
-   **Visual Studio 2005**  
  
-   **Office 2007 (Blue theme)**  
  
-   **Office 2007 (Black theme)**  
  
-   **Office 2007 (Silver theme)**  
  
-   **Office 2007 (Aqua theme)**  
  
 **Enable visual style switching**  
 Specifies whether the user can change the visual style of the application at runtime, usually by selecting the appropriate visual style from a menu or ribbon.  
  
 **Use of MFC**  
 Specifies how to link to the MFC library. By default, MFC is linked as a shared DLL.  
  
|Option|Description|  
|------------|-----------------|  
|**Use MFC in a shared DLL**|Links the MFC library to an application as a shared DLL. The application makes calls to the MFC library at run time. This option reduces the disk and memory requirements of applications that consist of multiple executable files that use the MFC library. Both Win32 and MFC applications can call functions in your DLL (default)|  
|**Use MFC in a static library**|Links an application to the static MFC library at build time.|  
  
## See Also  
 [MFC Application Wizard](../mfcref/mfc-application-wizard.md)   
 [File Types Created for Visual C++ Projects](../ide/file-types-created-for-visual-c---projects.md)