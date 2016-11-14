---
title: "How to: Display Command Information in the Status Bar | Microsoft Docs"
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
  - "prompts [C++]"
  - "displaying command status"
  - "status bars, message area"
  - "status bars, displaying command information"
ms.assetid: de895cbe-61ee-46bf-9787-76b247527d6d
caps.latest.revision: 13
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
# How to: Display Command Information in the Status Bar
When you run the Application Wizard to create the skeleton of your application, you can support a toolbar and a status bar. Just one option in the Application Wizard supports both. When a status bar is present, the application automatically provides helpful feedback as the user moves the pointer over items on the menus. The application automatically displays a prompt string in the status bar when the menu item is highlighted. For example, when the user moves the pointer over the **Cut** command on the **Edit** menu, the status bar might display "Cuts the selection and puts it on the Clipboard" in the message area of the status bar. The prompt helps the user understand the purpose of the menu item. This also works when the user clicks a toolbar button.  
  
 You can add to this status-bar help by defining prompt strings for menu items that you add to the program. To do this, provide the prompt strings when you edit the properties of the menu item in the menu editor. The strings you define are stored in the application resource file; they have the same IDs as the commands they explain.  
  
 By default, the Application Wizard adds `AFX_IDS_IDLEMESSAGE`, the ID for a standard "Ready" message, which is displayed when the program is waiting for new messages. If you specify the Context-Sensitive Help option in the Application Wizard, the message is changed to "For Help, press F1."  
  
## See Also  
 [Message Handling and Mapping](../mfc/message-handling-and-mapping.md)

