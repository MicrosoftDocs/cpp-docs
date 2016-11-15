---
title: "Initializing Regular DLLs | Microsoft Docs"
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
  - "DLLs [C++], regular"
  - "initializing DLLs"
  - "regular DLLs [C++], initializing"
ms.assetid: f1f091d1-bb91-468a-94f4-3c554657b8fc
caps.latest.revision: 8
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
# Initializing Regular DLLs
Because regular DLLs have a `CWinApp` object, they should perform their initialization and termination tasks in the same location as an MFC application: in the `InitInstance` and **ExitInstance** member functions of the DLL's `CWinApp`-derived class. Because MFC provides a `DllMain` function that is called by **_DllMainCRTStartup** for **PROCESS_ATTACH** and **PROCESS_DETACH**, you should not write your own `DllMain` function. The MFC-provided `DllMain` function calls `InitInstance` when your DLL is loaded and it calls `ExitInstance` before the DLL is unloaded.  
  
 A regular DLL can keep track of multiple threads by calling [TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801) and [TlsGetValue](http://msdn.microsoft.com/library/windows/desktop/ms686812) in its `InitInstance` function. These functions allow the DLL to track thread-specific data.  
  
 In your regular DLL that dynamically links to MFC, if you are using any MFC OLE, MFC Database (or DAO), or MFC Sockets support, respectively, the MFC debug extension DLLs MFCOxxD.dll, MFCDxxD.dll, and MFCNxxD.dll (where xx is the version number) are linked in automatically. You must call one of the following predefined initialization functions for each of these DLLs that you are using in your regular DLL's `CWinApp::InitInstance`.  
  
|Type of MFC support|Initialization function to call|  
|-------------------------|-------------------------------------|  
|MFC OLE (MFCOxxD.dll)|`AfxOleInitModule`|  
|MFC Database (MFCDxxD.dll)|`AfxDbInitModule`|  
|MFC Sockets (MFCNxxD.dll)|`AfxNetInitModule`|  
  
## What do you want to do?  
  
-   [Initialize extension DLLs](../build/initializing-extension-dlls.md)  
  
-   [Initialize non-MFC DLLs](../build/initializing-non-mfc-dlls.md)  
  
## What do you want to know more about?  
  
-   [The C run-time library behavior and _DllMainCRTStartup](../build/run-time-library-behavior.md)  
  
-   [Using Database, OLE, and Sockets Extension DLLs in Regular DLLs](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Processes and threads (Windows SDK)](http://msdn.microsoft.com/library/windows/desktop/ms684841)  
  
-   [Thread local storage wrappers (MFC Technical Note 58)](../mfc/tn058-mfc-module-state-implementation.md)  
  
## See Also  
 [Initializing a DLL](../build/initializing-a-dll.md)