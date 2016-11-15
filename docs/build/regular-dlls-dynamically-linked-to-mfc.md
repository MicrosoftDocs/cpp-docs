---
title: "Regular DLLs Dynamically Linked to MFC | Microsoft Docs"
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
  - "regular DLLs [C++], dynamically linked to MFC"
  - "AFX_MANAGE_STATE macro"
  - "DLLs [C++], regular"
  - "shared DLL versions [C++]"
  - "dynamically linked DLLs [C++]"
ms.assetid: b4f7ab92-8723-42a5-890e-214f4e29dcd0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
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
# Regular DLLs Dynamically Linked to MFC
A regular DLL dynamically linked to MFC is a DLL that uses MFC internally, and the exported functions in the DLL can be called by either MFC or non-MFC executables. As the name describes, this kind of DLL is built using the dynamic-link library version of MFC (also known as the shared version of MFC). Functions are usually exported from a regular DLL using the standard C interface.  
  
 You must add the `AFX_MANAGE_STATE` macro at the beginning of all the exported functions in regular DLLs that dynamically link to MFC to set the current module state to the one for the DLL. This is done by adding the following line of code to the beginning of functions exported from the DLL:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
 A regular DLL, dynamically linked to MFC has the following features:  
  
-   This is a new type of DLL introduced by Visual C++ 4.0.  
  
-   The client executable can be written in any language that supports the use of DLLs (C, C++, Pascal, Visual Basic, and so on); it does not have to be an MFC application.  
  
-   Unlike the statically linked regular DLL, this type of DLL is dynamically linked to the MFC DLL (also known as the shared MFC DLL).  
  
-   The MFC import library linked to this type of DLL is the same one used for extension DLLs or applications using the MFC DLL: MFCxx(D).lib.  
  
 A regular DLL, dynamically linked to MFC has the following requirements:  
  
-   These DLLs are compiled with **_AFXDLL** defined, just like an executable that is dynamically linked to the MFC DLL. But **_USRDLL** is also defined, just like a regular DLL that is statically linked to MFC.  
  
-   This type of DLL must instantiate a `CWinApp`-derived class.  
  
-   This type of DLL uses the `DllMain` provided by MFC. Place all DLL-specific initialization code in the `InitInstance` member function and termination code in `ExitInstance` as in a normal MFC application.  
  
 Because this kind of DLL uses the dynamic-link library version of MFC, you must explicitly set the current module state to the one for the DLL. To do this, use the [AFX_MANAGE_STATE](http://msdn.microsoft.com/Library/620cb840-4227-4a75-b36d-f7d507f44606) macro at the beginning of every function exported from the DLL.  
  
 Regular DLLs must have a `CWinApp`-derived class and a single object of that application class, as does an MFC application. However, the `CWinApp` object of the DLL does not have a main message pump, as does the `CWinApp` object of an application.  
  
 Note that the `CWinApp::Run` mechanism does not apply to a DLL, because the application owns the main message pump. If your DLL brings up modeless dialogs or has a main frame window of its own, your application's main message pump must call a DLL-exported routine that calls `CWinApp::PreTranslateMessage`.  
  
 Place all DLL-specific initialization in the `CWinApp::InitInstance` member function as in a normal MFC application. The `CWinApp::ExitInstance` member function of your `CWinApp` derived class is called from the MFC provided `DllMain` function before the DLL is unloaded.  
  
 You must distribute the shared DLLs MFCx0.dll and Msvcr*0.dll (or similar files) with your application.  
  
 A DLL that is dynamically linked to MFC cannot also statically link to MFC. Applications link to regular DLLs dynamically linked to MFC it just like any other DLL.  
  
 Symbols are usually exported from a regular DLL using the standard C interface. The declaration of a function exported from a regular DLL looks something like this:  
  
```  
extern "C" __declspec(dllexport) MyExportedFunction( );  
```  
  
 All memory allocations within a regular DLL should stay within the DLL; the DLL should not pass to or receive from the calling executable any of the following:  
  
-   pointers to MFC objects  
  
-   pointers to memory allocated by MFC  
  
 If you need to do any of the above, or if you need to pass MFC-derived objects between the calling executable and the DLL, then you must build an extension DLL.  
  
 It is safe to pass pointers to memory that were allocated by the C run-time libraries between an application and a DLL only if you make a copy of the data. You must not delete or resize these pointers or use them without making a copy of the memory.  
  
 When building a regular DLL that dynamically links to MFC, you need to use the macro [AFX_MANAGE_STATE](http://msdn.microsoft.com/Library/620cb840-4227-4a75-b36d-f7d507f44606) to switch the MFC module state correctly. This is done by adding the following line of code to the beginning of functions exported from the DLL:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
 The **AFX_MANAGE_STATE** macro should not be used in regular DLLs that statically link to MFC or in extension DLLs. For more information, see [Managing the State Data of MFC Modules](../mfc/managing-the-state-data-of-mfc-modules.md).  
  
 For an example of how to write, build, and use a regular DLL, see the sample [DLLScreenCap](http://msdn.microsoft.com/en-us/2171291d-3a50-403b-90a1-d93c2acb4f4a). For more information about regular DLLs that dynamically link to MFC, see the section titled "Converting DLLScreenCap to Dynamically Link with the MFC DLL" in the abstract for the sample.  
  
## What do you want to do?  
  
-   [Initialize regular DLLs](../build/initializing-regular-dlls.md)  
  
## What do you want to know more about?  
  
-   [The module states of a regular DLL dynamically linked to MFC](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)  
  
-   [Managing the state data of MFC modules](../mfc/managing-the-state-data-of-mfc-modules.md)  
  
-   [Using Database, OLE, and Sockets Extension DLLs in Regular DLLs](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Using MFC as Part of a DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
## See Also  
 [Kinds of DLLs](../build/kinds-of-dlls.md)