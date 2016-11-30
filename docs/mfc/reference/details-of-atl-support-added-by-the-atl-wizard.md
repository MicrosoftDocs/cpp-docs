---
title: "Details of ATL Support Added by the ATL Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.atl.support"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, ATL support"
  - "ATL, MFC projects"
ms.assetid: aa66bad0-008f-4886-94c1-2a0a0d04bce4
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
# Details of ATL Support Added by the ATL Wizard
When you [add ATL support to an existing MFC executable or DLL](../../mfc/reference/adding-atl-support-to-your-mfc-project.md), Visual C++ makes the following modifications to the existing MFC project (in this example, the project is called `MFCEXE`):  
  
-   Two new files (an .idl file and an .rgs file, used to register the server) are added.  
  
-   In the main application header and implementation files (Mfcexe.h and Mfcexe.cpp), a new class (derived from **CAtlMFCModule**) is added. In addition to the new class, code is added to `InitInstance` for registration. Code is also added to the `ExitInstance` function for revoking the class object. In the header file, Finally, two new header files (Initguid.h and Mfcexe_i.c) are included in the implementation file, declaring and initializing the new GUIDs for the **CAtlMFCModule**-derived class.  
  
-   To register the server properly, an entry for the new .rgs file is added to the project's resource file.  
  
## Notes for DLL Projects  
 When you add ATL support to an MFC DLL project, you will see some differences. Code is added to the **DLLRegisterServer** and **DLLUnregisterServer** functions for registering and unregistering the DLL. Code is also added to [DllCanUnloadNow](../../atl/reference/catldllmodulet-class.md#catldllmodulet__dllcanunloadnow) and [DllGetClassObject](../../atl/reference/catldllmodulet-class.md#catldllmodulet__dllgetclassobject).  
  
## See Also  
 [ATL Support in an MFC Project](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)   
 [Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)   
 [Adding a Member Function](../../ide/adding-a-member-function-visual-cpp.md)   
 [Adding a Member Variable](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Overriding a Virtual Function](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [MFC Message Handler](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Navigating the Class Structure](../../ide/navigating-the-class-structure-visual-cpp.md)
