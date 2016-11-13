---
title: "Overridable CWinApp Member Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Overridable CWinApp Member Functions
[CWinApp](../mfc/reference/cwinapp-class.md) provides several key overridable member functions (`CWinApp` overrides these members from class [CWinThread](../mfc/reference/cwinthread-class.md), from which `CWinApp` derives):  
  
-   [InitInstance](../mfc/initinstance-member-function.md)  
  
-   [Run](../mfc/run-member-function.md)  
  
-   [ExitInstance](../mfc/exitinstance-member-function.md)  
  
-   [OnIdle](../mfc/onidle-member-function.md)  
  
 The only `CWinApp` member function that you must override is `InitInstance`.  
  
## See Also  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)
