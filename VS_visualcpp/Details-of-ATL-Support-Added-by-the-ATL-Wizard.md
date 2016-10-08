---
title: "Details of ATL Support Added by the ATL Wizard"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: aa66bad0-008f-4886-94c1-2a0a0d04bce4
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Details of ATL Support Added by the ATL Wizard
When you [add ATL support to an existing MFC executable or DLL](../VS_visualcpp/Adding-ATL-Support-to-Your-MFC-Project.md), Visual C++ makes the following modifications to the existing MFC project (in this example, the project is called `MFCEXE`):  
  
-   Two new files (an .idl file and an .rgs file, used to register the server) are added.  
  
-   In the main application header and implementation files (Mfcexe.h and Mfcexe.cpp), a new class (derived from **CAtlMFCModule**) is added. In addition to the new class, code is added to `InitInstance` for registration. Code is also added to the `ExitInstance` function for revoking the class object. In the header file, Finally, two new header files (Initguid.h and Mfcexe_i.c) are included in the implementation file, declaring and initializing the new GUIDs for the **CAtlMFCModule**-derived class.  
  
-   To register the server properly, an entry for the new .rgs file is added to the project's resource file.  
  
## Notes for DLL Projects  
 When you add ATL support to an MFC DLL project, you will see some differences. Code is added to the **DLLRegisterServer** and **DLLUnregisterServer** functions for registering and unregistering the DLL. Code is also added to [DllCanUnloadNow](../Topic/CAtlDllModuleT::DllCanUnloadNow.md) and [DllGetClassObject](../Topic/CAtlDllModuleT::DllGetClassObject.md).  
  
## See Also  
 [ATL Support in an MFC Project](../VS_visualcpp/Adding-ATL-Support-to-Your-MFC-Project.md)   
 [Adding Functionality with Code Wizards](../VS_visualcpp/Adding-Functionality-with-Code-Wizards--C---.md)   
 [Adding a Class](../VS_visualcpp/Adding-a-Class--Visual-C---.md)   
 [Adding a Member Function](../VS_visualcpp/Adding-a-Member-Function--Visual-C---.md)   
 [Adding a Member Variable](../VS_visualcpp/Adding-a-Member-Variable---Visual-C---.md)   
 [Overriding a Virtual Function](../VS_visualcpp/Overriding-a-Virtual-Function--Visual-C---.md)   
 [MFC Message Handler](../VS_visualcpp/Adding-an-MFC-Message-Handler.md)   
 [Navigating the Class Structure](../VS_visualcpp/Navigating-the-Class-Structure--Visual-C---.md)