---
title: "Document Template Strings, MFC Add Class Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.class.mfc.simple.doctemp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC Add Class Wizard, document control strings"
ms.assetid: 14e1c834-5e79-4dbd-811f-ec8f0a9cdcb2
caps.latest.revision: 9
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
# Document Template Strings, MFC Add Class Wizard
This page of the wizard is available only for classes meeting the following criteria:  
  
-   The MFC project supports the document/view architecture.  
  
-   The base class of the new class is [CFormView](../../mfc/reference/cformview-class.md).  
  
-   The check box **Generate DocTemplate resources** is checked on the **Names** section of the [MFC Class Wizard](../../mfc/reference/mfc-add-class-wizard.md).  
  
 The wizard provides defaults for the following values to help with forms view design, management, and localization. Because most document template strings are visible and used by the form's users, they are localized into the **Resource language** indicated in the [Application Types](../../mfc/reference/application-type-mfc-application-wizard.md) page of the MFC Application Wizard when the project was created.  
  
> [!NOTE]
>  The wizard does not provide automatic printing support for classes derived from `CFormView`.  
  
 See [Document Templates and the Document/View Creation Process](../../mfc/document-templates-and-the-document-view-creation-process.md) for more information.  
  
## Nonlocalized strings  
 Applies to applications that create user documents. Users can open and save documents more easily if the document type has a file extension and a file type ID. These items are not localized because they are used by the system rather than by the user.  
  
 **File extension**  
 Sets the file extension associated with the document type for this forms application. The file extension default based on the class name. For example, if the new MFC class is named **CWidget**, by default, the file extension is .wid. The file extension is used in file filters and the **Open** and **Save as** dialog boxes.  
  
 If you change the file extension, the change is reflected in the **Filter name** box.  
  
> [!NOTE]
>  If you change the default file extension, do not include the period.  
  
 **File type ID**  
 Sets the label for your document type in the system registry.  
  
## Localized strings  
 Produces strings associated with the forms and documents that are read and used by the application's users, so the strings are localized.  
  
 **Doc type name**  
 Identifies the type of document under which a document of the application can be grouped. By default, it is based on the name of the class. For example, if the new MFC class is named **CWidget**, by default, the document type name is Widget. Changing the default does not change any other options in this dialog box.  
  
 **Filter name**  
 Sets the name that users can indicate to find files of the specified file type. This option is available from the **Files of type** and **Save as type** options in the standard Windows **Open** and **Save as** dialog boxes. By default, the name is based on the project name plus Files, followed by the extension indicated in **File Extension**. For example, if your project is named Widget, and the file extension is .wid, the **Filter name** is Widget Files (*.wid) by default.  
  
 **File new short name**  
 Sets the name appearing in the standard Windows `New` dialog box, if the project has more than one document template. If your application is an [Automation server](../../mfc/automation-servers.md), this name is used as the short name of your Automation object. By default, this name is based on the class name.  
  
 **File type long name**  
 Sets the file type name in the system registry. If your application is an Automation server, this name is used as the long name of your Automation object. By default, this name is based on the class name plus .Document. For example, if the class name is **CWidget**, the **File type long name** is Widget Document.  
  
 **Document class**  
 Indicates the project's document class. By default, this class is the main application's document class, as listed in the [Review Generated Classes](../../mfc/reference/generated-classes-mfc-application-wizard.md) page of the MFC Application Wizard. You can select another document class from the list, if you have added other document classes in the project.  
  
## See Also  
 [MFC Add Class Wizard](../../mfc/reference/mfc-add-class-wizard.md)   
 [MFC Class](../../mfc/reference/adding-an-mfc-class.md)   
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)
