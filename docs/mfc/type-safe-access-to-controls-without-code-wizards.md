---
title: "Type-Safe Access to Controls Without Code Wizards | Microsoft Docs"
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
  - "dialog boxes, accessing controls"
  - "dialog box controls, accessing"
ms.assetid: 325b4927-d49b-42b4-8e0b-fc84f31fb059
caps.latest.revision: 10
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
# Type-Safe Access to Controls Without Code Wizards
The first approach to creating type-safe access to controls uses an inline member function to cast the return type of class `CWnd`'s `GetDlgItem` member function to the appropriate C++ control type, as in this example:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#50](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_1.cpp)]  
  
 You can then use this member function to access the control in a type-safe manner with code similar to the following:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#51](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_2.cpp)]  
  
## See Also  
 [Type-Safe Access to Controls in a Dialog Box](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)   
 [Type-Safe Access to Controls With Code Wizards](../mfc/type-safe-access-to-controls-with-code-wizards.md)

