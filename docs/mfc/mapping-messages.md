---
title: "Mapping Messages | Microsoft Docs"
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
  - "message maps, about message maps"
  - "mappings, commands"
  - "commands, mapping"
  - "command mapping"
  - "message handling, connecting to handler functions"
  - "commands, connecting to handler functions"
  - "mappings, messages"
  - "messages, mapping"
ms.assetid: 996f0652-0698-4b8c-b893-cdaa836d9d0f
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
# Mapping Messages
Each framework class that can receive messages or commands has its own "message map." The framework uses message maps to connect messages and commands to their handler functions. Any class derived from class `CCmdTarget` can have a message map. Other articles explain message maps in detail and describe how to use them.  
  
 In spite of the name "message map," message maps handle both messages and commands — all three categories of messages listed in [Message Categories](../mfc/message-categories.md).  
  
## See Also  
 [Messages and Commands in the Framework](../mfc/messages-and-commands-in-the-framework.md)

