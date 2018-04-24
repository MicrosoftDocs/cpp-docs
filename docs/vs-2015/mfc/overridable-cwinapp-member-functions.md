---
title: "Overridable CWinApp Member Functions | Microsoft Docs"
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
  - "CWinApp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overriding, overridable functions in CWinApp"
  - "application class"
  - "CWinApp class, overridables"
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Overridable CWinApp Member Functions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Overridable CWinApp Member Functions](https://docs.microsoft.com/cpp/mfc/overridable-cwinapp-member-functions).  
  
  
CWinApp](../Topic/CWinApp%20Class.md) provides several key overridable member functions (`CWinApp` overrides these members from class [CWinThread](../mfc/reference/cwinthread-class.md), from which `CWinApp` derives):  
  
-   [InitInstance](../mfc/initinstance-member-function.md)  
  
-   [Run](../mfc/run-member-function.md)  
  
-   [ExitInstance](../mfc/exitinstance-member-function.md)  
  
-   [OnIdle](../mfc/onidle-member-function.md)  
  
 The only `CWinApp` member function that you must override is `InitInstance`.  
  
## See Also  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)




