---
title: "Adding a Class (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.classes.adding"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL projects, adding classes"
  - "classes [C++], creating"
  - "classes [C++], adding"
ms.assetid: c34b5f70-4e72-4faa-ba21-e2b05361c4d9
caps.latest.revision: 24
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
# Adding a Class (Visual C++)
To add a class in a Visual C++ project, in **Solution Explorer**, right-click the project, click **Add**, and then click **Class**. This opens the [Add Class Dialog Box](../ide/add-class-dialog-box.md) dialog box.  
  
 When you add a class, you must specify a name that is different from classes that already exist in MFC or ATL. If you specify a name that already exists in either library, Visual C++ displays a message that indicates that the specified name is reserved.  
  
 If your project naming convention requires you to use an existing name, then you can just change the case of one or more letters in the name because Visual C++ is case-sensitive. For example, although you cannot name a class `CDocument`, you can name it `cdocument`.  
  
## What Kind of Class Do You Want to Add?  
 In the **Add Class** dialog box, when you expand the **Visual C++** node in the left pane several groupings of installed templates are displayed. The groups include **CLR**, **ATL**, **MFC**, and **C++**. When you select a group, a list of the available templates in that group is displayed in the middle pane. Each template contains the files and source code that are required for a class.  
  
 To generate a new class, select a template in the middle pane, type a name for the class in the **Name** box, and click **Add**. This opens the **Add Class Wizard** so that you can specify options for the class.  
  
-   For more information about how to create MFC classes, see [MFC Class](../mfc/reference/adding-an-mfc-class.md).  
  
-   For more information about how to create ATL classes, see [ATL Simple Object](../atl/reference/adding-an-atl-simple-object.md).  
  
> [!NOTE]
>  The template **Add ATL Support to MFC** does not create a class, but instead configures the project to use ATL. For more information, see [ATL Support in an MFC Project](../mfc/reference/adding-atl-support-to-your-mfc-project.md).  
  
 To make a C++ class that does not use MFC, ATL, or CLR, use the **C++ Class** template in the **C++** group of installed templates. For more information, see [Adding a Generic C++ Class](../ide/adding-a-generic-cpp-class.md).  
  
 Two kinds of form-based C++ classes are available. The first one, [CFormView Class](../mfc/reference/cformview-class.md) creates an MFC class. The second one creates a CLR Windows Forms class.  
  
## See Also  
 [Creating a Forms-Based MFC Application](../mfc/reference/creating-a-forms-based-mfc-application.md)   
 [Add Class Dialog Box](../ide/add-class-dialog-box.md)   
 [Creating Desktop Projects By Using Application Wizards](../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)