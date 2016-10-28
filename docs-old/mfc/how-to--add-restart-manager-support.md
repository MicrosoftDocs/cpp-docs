---
title: "How to: Add Restart Manager Support"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Restart manager"
  - "C++, application crash support"
ms.assetid: 7f3f5867-d4bc-4ba8-b3c9-dc1e7be93642
caps.latest.revision: 7
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to: Add Restart Manager Support
The restart manager is a feature added to [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] for [!INCLUDE[wiprlhext](../crt/includes/wiprlhext_md.md)]. The restart manager adds support for your application if it unexpectedly closes or restarts. The behavior of the restart manager depends on the type of your application. If your application is a document editor, the restart manager enabled your application to automatically save the state and content of any open documents and restarts your application after an unexpected closure. If your application is not a document editor, the restart manager will restart the application, but it cannot save the state of the application by default.  
  
 After restart, the application displays a task dialog box if the application is Unicode. If it is an ANSI application, the application displays a Windows Message box. At this point, the user chooses whether to restore the automatically saved documents. If the user does not restore the automatically saved documents, the restart manager discards the temporary files.  
  
> [!NOTE]
>  You can override the default behavior of the restart manager for saving data and restarting the application.  
  
 By default, MFC applications created by using the project wizard in [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] support the restart manager when the applications are run on a computer that has [!INCLUDE[wiprlhext](../crt/includes/wiprlhext_md.md)]. If you do not want your application to support the restart manager, you can disable the restart manager in the new project wizard.  
  
### To Add Support For the Restart Manager to an Existing Application  
  
1.  Open an existing MFC application in [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)].  
  
2.  Open the source file for your main application. By default this is the .cpp file that has the same name as your application. For example, the main application source file for MyProject is MyProject.cpp.  
  
3.  Find the constructor for your main application. For example, if your project is MyProject, the constructor is `CMyProjectApp::CMyProjectApp()`.  
  
4.  Add the following line of code to your constructor.  
  
    ```  
    m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;  
    ```  
  
5.  Make sure the `InitInstance` method of your application calls its parent `InitInstance` method: [CWinApp::InitInstance](../Topic/CWinApp::InitInstance.md) or `CWinAppEx::InitInstance`. The `InitInstance` method is responsible for checking the `m_dwRestartManagerSupportFlags` parameter.  
  
6.  Compile and run your application.  
  
## See Also  
 [CDataRecoveryHandler Class](../mfcref/cdatarecoveryhandler-class.md)   
 [CWinApp::m_dwRestartManagerSupportFlags](../Topic/CWinApp::m_dwRestartManagerSupportFlags.md)   
 [CWinApp Class](../mfcref/cwinapp-class.md)   
 [CWinApp::m_nAutosaveInterval](../Topic/CWinApp::m_nAutosaveInterval.md)   
 [CDocument::OnDocumentEvent](../Topic/CDocument::OnDocumentEvent.md)