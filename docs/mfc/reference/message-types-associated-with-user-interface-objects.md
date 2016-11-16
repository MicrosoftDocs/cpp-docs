---
title: "Message Types Associated with User-Interface Objects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.uiobject.msgs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "message types and user interface objects"
ms.assetid: 681ee1a7-f6e6-4ea0-9fc6-1fb53a35516e
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
# Message Types Associated with User-Interface Objects
The following table shows the types of objects with which you work, and the types of messages associated with them.  
  
### User Interface Objects and Associated Messages  
  
|Object ID|Messages|  
|---------------|--------------|  
|Class name, representing the containing window|Windows messages appropriate to a [CWnd](../../mfc/reference/cwnd-class.md)-derived class: a dialog box, window, child window, MDI child window, or topmost frame window.|  
|Menu or accelerator identifier|-   **COMMAND** message (executes the program function).<br />-   **UPDATE_COMMAND_UI** message (dynamically updates the menu item).|  
|Control identifier|Control notification messages for the selected control type.|  
  
## See Also  
 [Mapping Messages to Functions](../../mfc/reference/mapping-messages-to-functions.md)   
 [Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Adding a Class](../../ide/adding-a-class-visual-cpp.md)   
 [Adding a Member Function](../../ide/adding-a-member-function-visual-cpp.md)   
 [Adding a Member Variable](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Overriding a Virtual Function](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [MFC Message Handler](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Navigating the Class Structure](../../ide/navigating-the-class-structure-visual-cpp.md)
