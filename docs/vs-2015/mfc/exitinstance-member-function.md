---
title: "ExitInstance Member Function | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CWinApp::ExitInstance"
  - "CWinApp.ExitInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "programs [C++], terminating"
  - "CWinApp class, ExitInstance"
  - "ExitInstance method"
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ExitInstance Member Function
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ExitInstance Member Function](https://docs.microsoft.com/cpp/mfc/exitinstance-member-function).  
  
  
The [ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) member function of class [CWinApp](../mfc/reference/cwinapp-class.md) is called each time a copy of your application terminates, usually as a result of the user quitting the application.  
  
 Override `ExitInstance` if you need special cleanup processing, such as freeing graphics device interface (GDI) resources or deallocating memory used during program execution. Cleanup of standard items such as documents and views, however, is provided by the framework, with other overridable functions for doing special cleanup specific to those objects.  
  
## See Also  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)




