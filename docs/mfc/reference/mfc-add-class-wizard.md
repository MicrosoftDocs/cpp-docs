---
title: "MFC Add Class Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.class.mfc.simple.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC Add Class Wizard"
  - "wizards [MFC]"
ms.assetid: ad3b0989-d307-43b2-9417-3f9a78889024
caps.latest.revision: 16
author: "mikeblome"
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
# MFC Add Class Wizard
Use this code wizard to add a class to an existing MFC project, or to add a class to an ATL project that supports MFC. You can also add MFC classes to Win32 projects that have MFC support. The features you specified when you created your project determine the options available in this dialog box.  
  
## Names  
 In this page, specify the class name, the base class, and file names for the new class.  
  
 **Class name**  
 Specifies the name of the new class and provides the default basis for the names of IDs and files on this page. C++ classes typically start with "C", so for example, "CMyClass" becomes "MyClass.h", and so on.  
  
 **Base class**  
 Specifies the name of the base class for the new class. By default, the base class is [CWnd](../../mfc/reference/cwnd-class.md). The base class you select determines whether other boxes on this page are active.  
  
 The type of class you set as the base class determines whether the class has a dialog ID or a resource ID. The general types of classes are as follows:  
  
-   Classes such as [CButton](../../mfc/reference/cbutton-class.md), [CWnd](../../mfc/reference/cwnd-class.md), or [CDocument](../../mfc/reference/cdocument-class.md), which do not require a dialog ID or resource ID. These classes do not use a dialog or resource ID. If you select one of these classes for your base class, the **Dialog ID** box and the **DHTML resource ID** box are dimmed.  
  
-   Classes such as [CDialog](../../mfc/reference/cdialog-class.md), [CFormView](../../mfc/reference/cformview-class.md), or [CPropertyPage](../../mfc/reference/cpropertypage-class.md), which require a dialog ID.  
  
-   The class [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md), which requires a dialog ID, a DHTML resource ID, and an HTML file name.  
  
 For classes requiring a dialog ID, you might find it more efficient to use the [Resource editor](../../mfc/resource-editors.md) to create the dialog resource, assign its ID in the [Properties window](/visualstudio/ide/reference/properties-window), and then create a class associated with that resource ID. See [Creating a New Dialog Box](../../mfc/creating-a-new-dialog-box.md) for more information on creating a standard Windows dialog box.  
  
> [!NOTE]
>  If you create a dialog resource first and derive its new class from `CDHtmlDialog`, delete the standard Windows **OK** and **Cancel** buttons that appear on the default dialog box. The standard Windows dialog box hosts the DHTML form, which contains its own **OK** and **Cancel** buttons.  
  
 While your dialog box can contain both Windows controls and DHTML controls, it is not recommended.  
  
 **Dialog ID**  
 Specifies the ID of the dialog, if you selected `CDialog`, `CFormView`, `CPropertyPage`, or `CDHtmlDialog` as the **Base class**.  
  
 **.h file**  
 Sets the name of the header file for the new object's class. By default, this name is based on the name you provide in **Class name**. Click the ellipsis button to save the file name to the location of your choice, or to append the class declaration to an existing file. If you choose an existing file, the wizard will not save it to the selected location until you click **Finish** in the wizard.  
  
 The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class declaration should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.  
  
 **.cpp file**  
 Sets the name of the implementation file for the new object's class. By default, this name is based on the name you provide in **Class name**. Click the ellipsis button to save the file name to the location of your choice. The file is not saved to the selected location until you click **Finish** in the wizard.  
  
 The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class implementation should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.  
  
 **Active accessibility**  
 Enables MFC's support for Active Accessibility by calling [EnableActiveAccessibility](../../mfc/reference/cwnd-class.md#cwnd__enableactiveaccessibility) in the constructor. This option is available for classes derived from [CWnd](../../mfc/reference/cwnd-class.md).  
  
 **DHTML resource ID**  
 Applies to classes derived from `CDHtmlDialog` only. Specifies the resource ID of the DHTML dialog box. The resource ID appears in the HTML section of the project's .rc file, along with the HTML dialog box file name. The DHTML resource, identified by this ID, is hosted by the dialog box, identified by **Dialog ID**.  
  
 **.HTM file**  
 Applies to classes derived from `CDHtmlDialog` only. Sets the name of the HTML file for the DHTML dialog box. By default, this file name is based on the class name. The file name appears in the HTML section of the project's .rc file, along with the DHTML dialog box resource ID.  
  
 **Automation**  
 Sets the class level of support for [Automation](../../mfc/automation.md). Automation at the class level is available for all classes that support Automation. It is also available for projects created with support for Automation. That is, either an MFC project that [supports ATL](../../atl/reference/mfc-support-in-atl-projects.md), or an MFC project for which you selected the **Automation** check box in the [Advanced Features](../../mfc/reference/advanced-features-mfc-application-wizard.md) page of the MFC Application Wizard.  
  
|Option|Description|  
|------------|-----------------|  
|**None**|Indicates that the class has no Automation support.|  
|**Automation**|Indicates that the class supports Automation. If you select this option, the newly created class is available as a programmable object by Automation client applications, such as Microsoft Visual Basic and Microsoft Excel. This option is not available for the base classes listed after this table.|  
|**Creatable by type ID**|Indicates that both the class and project support other applications creating objects of this class using Automation. With this option, automation clients can directly create an Automation object. The type ID in the text box is used by the client application to specify the object to be created; it is systemwide and must be unique. This option is not available for the base classes listed after this table.|  
  
 Automation support is not available for the following base classes:  
  
-   `CAsyncMonitorFile`  
  
-   `CAsyncSocket`  
  
-   `CCachedDataPathProperty`  
  
-   `CConnectionPoint`  
  
-   `CDatabase`  
  
-   `CDataPathProperty`  
  
-   `CHttpFilter`  
  
-   `CHttpServer`  
  
-   `CInternetSession`  
  
-   `CObject`  
  
-   `CSocket`  
  
 **Type ID**  
 Sets the type ID of the class. The **Type ID** box concatenates the project name and the new class name as follows: *MFCProj.MFCClass*. This ID is changeable only if you selected the **Automation** option **Creatable by type ID**.  
  
 **Generate DocTemplate resources**  
 Indicates that the documents created by the application have document template resources. To activate this check box, the project must support the MFC document/view architecture, and the base class of this class must be [CFormView](../../mfc/reference/cformview-class.md).  
  
 See [Document Templates and the Document/View Creation Process](../../mfc/document-templates-and-the-document-view-creation-process.md) for more information.  
  
## See Also  
 [MFC Class](../../mfc/reference/adding-an-mfc-class.md)   
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)
