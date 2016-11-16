---
title: "Command Targets | Microsoft Docs"
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
  - "command targets"
  - "command mapping"
  - "messages, command"
  - "command routing, command targets"
ms.assetid: b0f784e5-c6dc-4391-9e71-aa7b7dcbe9f0
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
# Command Targets
The figure [Commands in the Framework](../mfc/user-interface-objects-and-command-ids.md) shows the connection between a user-interface object, such as a menu item, and the handler function that the framework calls to carry out the resulting command when the object is clicked.  
  
 Windows sends messages that are not command messages directly to a window whose handler for the message is then called. However, the framework routes commands to a number of candidate objects — called "command targets" — one of which normally invokes a handler for the command. The handler functions work the same way for both commands and standard Windows messages, but the mechanisms by which they are called are different, as explained in [How the Framework Calls a Handler](../mfc/how-the-framework-calls-a-handler.md).  
  
## See Also  
 [Messages and Commands in the Framework](../mfc/messages-and-commands-in-the-framework.md)

