---
title: "Automation in a DLL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["DLLs [C++], Automation", "Automation [C++], DLLs"]
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Automation in a DLL
When you choose the Automation option in the MFC DLL Wizard, the wizard provides you with the following:  
  
-   A starter object description language (.ODL) file  
  
-   An include directive in the STDAFX.h file for Afxole.h  
  
-   An implementation of the `DllGetClassObject` function, which calls the **AfxDllGetClassObject** function  
  
-   An implementation of the `DllCanUnloadNow` function, which calls the **AfxDllCanUnloadNow** function  
  
-   An implementation of the `DllRegisterServer` function, which calls the [COleObjectFactory::UpdateRegistryAll](../mfc/reference/coleobjectfactory-class.md#updateregistryall) function  
  
## What do you want to know more about?  
  
-   [Automation Servers](../mfc/automation-servers.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)