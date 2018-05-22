---
title: "Are there any MFC classes or functions that cannot be used in an MFC DLL? | Microsoft Docs"
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
  - "MFC DLLs [C++], restrictions"
  - "DLLs [C++], MFC"
  - "DLLs [C++], restrictions"
ms.assetid: 18e2f1cb-4f72-4d3a-a951-3488208872c7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Are there any MFC classes or functions that cannot be used in an MFC DLL?
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Visual Studio 2017 Documentation](https://docs.microsoft.com/en-us/visualstudio/).  
  
Extension DLLs use the `CWinApp`-derived class of the client application. They must not have their own `CWinApp`-derived class.  
  
 Regular DLLs must have a `CWinApp`-derived class and a single object of that application class, as does an MFC application. Unlike the `CWinApp` object of an application, the `CWinApp` object of the DLL does not have a main message pump.  
  
 Note that because the `CWinApp::Run` mechanism does not apply to a DLL, the application owns the main message pump. If the DLL opens modeless dialog boxes or has a main frame window of its own, the application's main message pump must call a routine exported by the DLL, which in turn calls the `CWinApp::PreTranslateMessage` member function of the DLL's application object.  
  
## See Also  
 [DLL Frequently Asked Questions](../build/dll-frequently-asked-questions.md)

