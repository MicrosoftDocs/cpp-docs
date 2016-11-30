---
title: "Message Map Macros (MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
|[DECLARE_MESSAGE_MAP](http://msdn.microsoft.com/library/c225e7e0-a81b-495c-97f9-3e0aa1f65036)|Declares that a message map will be used in a class to map messages to functions (must be used in the class declaration).|  
|[BEGIN_MESSAGE_MAP](http://msdn.microsoft.com/library/d9201e18-04e0-4639-9810-f15768627fc2)|Begins the definition of a message map (must be used in the class implementation).|  
|[END_MESSAGE_MAP](http://msdn.microsoft.com/library/40f611f1-a3b4-4097-b683-091bf7cfab8b)|Ends the definition of a message map (must be used in the class implementation).|  
  
### Message-Mapping Macros  
  
|||  
|-|-|  
|[ON_COMMAND](http://msdn.microsoft.com/library/f24f8bda-2cf4-49d5-aa3d-6f2e6bb003f2)|Indicates which function will handle a specified command message.|  
|[ON_CONTROL](http://msdn.microsoft.com/library/2cb7ebdf-296b-4606-b191-3449835003db)|Indicates which function will handle a specified control-notification message.|  
|[ON_MESSAGE](http://msdn.microsoft.com/library/e2faeb13-9f6e-4c0d-9f6d-b2e141a0db1e)|Indicates which function will handle a user-defined message.|  
|[ON_OLECMD](http://msdn.microsoft.com/library/6c86327c-3d48-42ac-9dae-e0ccd3a81793)|Indicates which function will handle a menu command from a DocObject or its container.|  
|[ON_REGISTERED_MESSAGE](http://msdn.microsoft.com/library/93c1c068-ae8c-4e04-8a60-a603800ab57d)|Indicates which function will handle a registered user-defined message.|  
|[ON_REGISTERED_THREAD_MESSAGE](http://msdn.microsoft.com/library/3f598bc2-b2f0-410f-8ba0-7714502170f3)|Indicates which function will handle a registered user-defined message when you have a `CWinThread` class.|  
|[ON_THREAD_MESSAGE](http://msdn.microsoft.com/library/f718f47a-d5b1-4514-914b-e3fe2d919003)|Indicates which function will handle a user-defined message when you have a `CWinThread` class.|  
|[ON_UPDATE_COMMAND_UI](http://msdn.microsoft.com/library/c4de3c21-2d2e-4b89-a4ce-d0c0e2d9edc4)|Indicates which function will handle a specified user-interface update command message.|  
  
### Message-Map Range Macros  
  
|||  
|-|-|  
|[ON_COMMAND_RANGE](http://msdn.microsoft.com/library/c52719fc-dd6e-48c9-af79-383f48d608e0)|Indicates which function will handle the range of command IDs specified in the first two parameters to the macro.|  
|[ON_UPDATE_COMMAND_UI_RANGE](http://msdn.microsoft.com/library/b7105bf1-44ad-4b00-b947-31478f964729)|Indicates which update handler will handle the range of command IDs specified in the first two parameters to the macro.|  
|[ON_CONTROL_RANGE](http://msdn.microsoft.com/library/46f0e1bb-569b-4b8b-9b80-89701d1cd7fd)|Indicates which function will handle notifications from the range of control IDs specified in the second and third parameters to the macro. The first parameter is a control-notification message, such as **BN_CLICKED**.|  
  
 For more information on message maps, the message-map declaration and demarcation macros, and the message-mapping macros, see [Message Maps](../../mfc/reference/message-maps-mfc.md) and [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md). For more information about message-map ranges, see [Handlers for Message-Map Ranges](../../mfc/handlers-for-message-map-ranges.md).  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)


