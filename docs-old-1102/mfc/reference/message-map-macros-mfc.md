---
title: "Message Map Macros (MFC)"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.messages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "message map macros"
  - "Windows messages [C++], declaration"
  - "demarcating Windows messages"
  - "message maps [C++], macros"
  - "message maps [C++], declaration and demarcation"
  - "message mapping macros"
  - "ranges, message map"
  - "message map ranges"
ms.assetid: 531b15ce-32b5-4ca0-a849-bb519616c731
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
# Message Map Macros (MFC)
To support message maps, MFC supplies the following macros:  
  
### Message-Map Declaration and Demarcation Macros  
  
|||  
|-|-|  
|[DECLARE_MESSAGE_MAP](../Topic/DECLARE_MESSAGE_MAP.md)|Declares that a message map will be used in a class to map messages to functions (must be used in the class declaration).|  
|[BEGIN_MESSAGE_MAP](../Topic/BEGIN_MESSAGE_MAP.md)|Begins the definition of a message map (must be used in the class implementation).|  
|[END_MESSAGE_MAP](../Topic/END_MESSAGE_MAP.md)|Ends the definition of a message map (must be used in the class implementation).|  
  
### Message-Mapping Macros  
  
|||  
|-|-|  
|[ON_COMMAND](../Topic/ON_COMMAND.md)|Indicates which function will handle a specified command message.|  
|[ON_CONTROL](../Topic/ON_CONTROL.md)|Indicates which function will handle a specified control-notification message.|  
|[ON_MESSAGE](../Topic/ON_MESSAGE.md)|Indicates which function will handle a user-defined message.|  
|[ON_OLECMD](../Topic/ON_OLECMD.md)|Indicates which function will handle a menu command from a DocObject or its container.|  
|[ON_REGISTERED_MESSAGE](../Topic/ON_REGISTERED_MESSAGE.md)|Indicates which function will handle a registered user-defined message.|  
|[ON_REGISTERED_THREAD_MESSAGE](../Topic/ON_REGISTERED_THREAD_MESSAGE.md)|Indicates which function will handle a registered user-defined message when you have a `CWinThread` class.|  
|[ON_THREAD_MESSAGE](../Topic/ON_THREAD_MESSAGE.md)|Indicates which function will handle a user-defined message when you have a `CWinThread` class.|  
|[ON_UPDATE_COMMAND_UI](../Topic/ON_UPDATE_COMMAND_UI.md)|Indicates which function will handle a specified user-interface update command message.|  
  
### Message-Map Range Macros  
  
|||  
|-|-|  
|[ON_COMMAND_RANGE](../Topic/ON_COMMAND_RANGE.md)|Indicates which function will handle the range of command IDs specified in the first two parameters to the macro.|  
|[ON_UPDATE_COMMAND_UI_RANGE](../Topic/ON_UPDATE_COMMAND_UI_RANGE.md)|Indicates which update handler will handle the range of command IDs specified in the first two parameters to the macro.|  
|[ON_CONTROL_RANGE](../Topic/ON_CONTROL_RANGE.md)|Indicates which function will handle notifications from the range of control IDs specified in the second and third parameters to the macro. The first parameter is a control-notification message, such as **BN_CLICKED**.|  
  
 For more information on message maps, the message-map declaration and demarcation macros, and the message-mapping macros, see [Message Maps](../../mfc/reference/message-maps-mfc.md) and [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md). For more information about message-map ranges, see [Handlers for Message-Map Ranges](../../mfc/handlers-for-message-map-ranges.md).  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)


