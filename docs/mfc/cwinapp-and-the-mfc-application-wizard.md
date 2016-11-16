---
title: "CWinApp and the MFC Application Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWinApp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "application wizards [C++], and CWinApp"
  - "CWinApp class, and MFC Application Wizard"
  - "MFC [C++], wizards"
ms.assetid: f8ac0491-3302-4e46-981d-0790624eb8a2
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
# CWinApp and the MFC Application Wizard
When it creates a skeleton application, the MFC Application Wizard declares an application class derived from [CWinApp](../mfc/reference/cwinapp-class.md). The MFC Application Wizard also generates an implementation file that contains the following items:  
  
-   A message map for the application class.  
  
-   An empty class constructor.  
  
-   A variable that declares the one and only object of the class.  
  
-   A standard implementation of your `InitInstance` member function.  
  
 The application class is placed in the project header and main source files. The names of the class and files created are based on the project name you supply in the MFC Application Wizard. The easiest way to view the code for these classes is through [Class View](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925).  
  
 The standard implementations and message map supplied are adequate for many purposes, but you can modify them as needed. The most interesting of these implementations is the `InitInstance` member function. Typically, you will add code to the skeletal implementation of `InitInstance`.  
  
## See Also  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)   
 [Overridable CWinApp Member Functions](../mfc/overridable-cwinapp-member-functions.md)   
 [Special CWinApp Services](../mfc/special-cwinapp-services.md)

