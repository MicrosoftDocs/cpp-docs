---
title: "Handlers for Commands and Control Notifications | Microsoft Docs"
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
  - "commands, handlers for"
  - "functions [C++], handler"
  - "handlers"
  - "controls [MFC], notifications"
  - "handlers, control notification"
  - "notifications, handlers for control"
  - "handlers, command"
ms.assetid: 20f57f4a-f577-4c09-80a2-43faf32a1c2e
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
# Handlers for Commands and Control Notifications
There are no default handlers for commands or control-notification messages. Therefore, you are bound only by convention in naming your handlers for these categories of messages. When you map the command or control notification to a handler, the Properties windows proposes a name based on the command ID or control-notification code. You can accept the proposed name, change it, or replace it.  
  
 Convention suggests that you name handlers in both categories for the user-interface object they represent. Thus a handler for the Cut command on the Edit menu might be named  
  
 [!code-cpp[NVC_MFCMessageHandling#4](../mfc/codesnippet/cpp/handlers-for-commands-and-control-notifications_1.h)]  
  
 Because the Cut command is so commonly implemented in applications, the framework predefines the command ID for the Cut command as **ID_EDIT_CUT**. For a list of all predefined command IDs, see the file AFXRES.H. For more information, see [Standard Commands](../mfc/standard-commands.md).  
  
 In addition, convention suggests a handler for the **BN_CLICKED** notification message from a button labeled "My Button" might be named  
  
 [!code-cpp[NVC_MFCMessageHandling#5](../mfc/codesnippet/cpp/handlers-for-commands-and-control-notifications_2.h)]  
  
 You might assign this command an ID of `IDC_MY_BUTTON` because it is equivalent to an application-specific user-interface object.  
  
 Both categories of messages take no arguments and return no value.  
  
## See Also  
 [Declaring Message Handler Functions](../mfc/declaring-message-handler-functions.md)
