---
title: "Automation in a DLL | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLLs [C++], Automation"
  - "Automation [C++], DLLs"
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Automation in a DLL
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Automation in a DLL](https://docs.microsoft.com/cpp/build/automation-in-a-dll).  
  
  
When you choose the Automation option in the MFC DLL Wizard, the wizard provides you with the following:  
  
-   A starter object description language (.ODL) file  
  
-   An include directive in the STDAFX.h file for Afxole.h  
  
-   An implementation of the `DllGetClassObject` function, which calls the **AfxDllGetClassObject** function  
  
-   An implementation of the `DllCanUnloadNow` function, which calls the **AfxDllCanUnloadNow** function  
  
-   An implementation of the `DllRegisterServer` function, which calls the [COleObjectFactory::UpdateRegistryAll](http://msdn.microsoft.com/library/60adcf43-f9f7-45ee-a09d-df9ccc6e1c77) function  
  
## What do you want to know more about?  
  
-   [Automation Servers](../mfc/automation-servers.md)  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)

