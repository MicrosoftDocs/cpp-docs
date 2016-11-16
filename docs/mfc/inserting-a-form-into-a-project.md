---
title: "Inserting a Form into a Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inserting forms"
  - "Insert New dialog box"
  - "forms, adding to projects"
ms.assetid: f3bd2998-3ce2-496d-ac5c-57ca70eec7cb
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
# Inserting a Form into a Project
Forms provide a convenient container for controls. You can easily insert an MFC-based form into your application as long as the application supports the MFC libraries.  
  
### To insert a form into your project  
  
1.  From Class View, select the project to which you want to add the form, and click the right mouse button.  
  
2.  From the shortcut menu, click **Add** and then click **Add Class**.  
  
     If the **New Form** command is not available, your project may be based on the Active Template Library (ATL). To add a form to an ATL project, you must [specify certain settings](../atl/reference/application-settings-atl-project-wizard.md) when first creating the project.  
  
3.  From the **MFC** folder, click **MFC Class**.  
  
4.  Using the MFC Class Wizard, make the new class derive from [CFormView](../mfc/reference/cformview-class.md).  
  
 Visual C++ adds the form to your application, opening it inside the Dialog editor so that you can begin adding controls and working on its overall design.  
  
 You may want to perform the following additional steps (not applicable for dialog-based applications):  
  
1.  Override the `OnUpdate` member function.  
  
2.  Implement a member function to move data from your view to your document.  
  
3.  Create an `OnPrint` member function.  
  
## See Also  
 [Form Views](../mfc/form-views-mfc.md)

