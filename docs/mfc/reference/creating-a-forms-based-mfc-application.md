---
title: "Creating a Forms-Based MFC Application | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfcforms.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applications [MFC], forms-based"
  - "forms-based applications"
ms.assetid: 048d2f7d-b60d-4386-ad8e-71d49af9c05e
caps.latest.revision: 12
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
# Creating a Forms-Based MFC Application
A form is a dialog box with controls that let a user access and possibly change data. You may want to develop an application in which the user selects from a selection of forms. Commonly, a forms-based application lets the user access forms by click **New** from the **File** menu. A dialog-based application, which does not give users access to a **New** option in the **File** menu, is also considered a forms-based application.  
  
 A single document interface (SDI), forms-based application allows only one instance of a particular form to run at a time. It is possible to run different forms at the same time from an SDI forms-based application by selecting a new form from the **New** option in the **File** menu.  
  
 If you create a multiple document interface (MDI), forms-based application, the application will be able to support multiple instances of the same form.  
  
 If you create an application with multiple top-level document support, the desktop is the implicit parent for the document and the document's frame is not restricted to the client area of the application. You can open multiple instances of the document, each with its own frame, menu, and task bar icon. You can close subsequent instances of documents individually, but if you select the `Exit` option from the **File** menu of the initial instance, the application closes all instances.  
  
 SDI, MDI, and multiple top-level document applications are all forms based and use the document/view architecture.  
  
 Any dialog-based application, by definition, is forms based. A dialog-based application does not use the document/view architecture, so you must manage the creation and access methods for your own additional forms.  
  
 The base class for form-based applications is [CFormView](../../mfc/reference/cformview-class.md). If your application has database support, then you can also select any class that derives from `CFormView`. A form is any window derived from `CFormView` or from any class that inherits from `CFormView`.  
  
 Even if you use a base class such as [CView](../../mfc/reference/cview-class.md), you can later make your applications forms-based by [adding an MFC class](../../mfc/reference/adding-an-mfc-class.md) derived from `CFormView` and checking the **Generate DocTemplate resources** checkbox in the [MFC Class Wizard](../../mfc/reference/document-template-strings-mfc-add-class-wizard.md).  
  
 Once you finish with the wizard, your project opens, and if you selected `CFormView` (or a class that inherits from `CFormView`) as your base class or if you created a dialog-based application, Visual C++ opens the dialog editor. At this point, you are ready to design your first form.  
  
### To begin creating a forms-based MFC executable  
  
1.  Follow the directions in [Creating an MFC Application](../../mfc/reference/creating-an-mfc-application.md).  
  
2.  In the MFC Application Wizard [Application Type](../../mfc/reference/application-type-mfc-application-wizard.md) page, select the **Document/view architecture support** check box.  
  
3.  Select **Single document**, **Multiple documents**, or **Multiple top-level documents**.  
  
    > [!NOTE]
    >  If you chose a SDI, MDI, or multiple top-level document interface application, by default, `CView` is set as the base class for your application's view in the [Generated Classes](../../mfc/reference/generated-classes-mfc-application-wizard.md) page of the wizard. To create a forms-based application, you must select `CFormView` as the base class for the application's view. Note that the wizard provides no printing support for a forms-based application.  
  
4.  Set any other project options you want on the other pages of the wizard.  
  
5.  Click **Finish** to generate the skeleton application.  
  
 For more information, see:  
  
-   [Derived View Classes](../../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Alternatives to the Document/View Architecture](../../mfc/alternatives-to-the-document-view-architecture.md)  
  
-   [Application Design Choices](../../mfc/application-design-choices.md)  
  
## See Also  
 [MFC Application Wizard](../../mfc/reference/mfc-application-wizard.md)   
 [Form Views](../../mfc/form-views-mfc.md)   
 [Creating a File Explorer-Style MFC Application](../../mfc/reference/creating-a-file-explorer-style-mfc-application.md)   
 [Creating a Web Browser-Style MFC Application](../../mfc/reference/creating-a-web-browser-style-mfc-application.md)

