---
title: "Run Member Function | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WinMain method, calls CWinApp::Run"
  - "messages, loops"
  - "Run method, messages and idle processing"
  - "message pump in CWinApp::Run"
  - "WinMain method"
  - "CWinApp class, Run"
ms.assetid: 24ab7597-2354-495b-9a20-2c8ccc7385b3
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Run Member Function
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Run Member Function](https://docs.microsoft.com/cpp/mfc/run-member-function).  
  
  
A framework application spends most of its time in the [Run](../mfc/reference/cwinapp-class.md#run) member function of class [CWinApp](../mfc/reference/cwinapp-class.md). After initialization, `WinMain` calls **Run** to process the message loop.  
  
 **Run** cycles through a message loop, checking the message queue for available messages. If a message is available, **Run** dispatches it for action. If no messages are available, which is often true, **Run** calls `OnIdle` to do any idle-time processing that you or the framework may need done. If there are no messages and no idle processing to do, the application waits until something happens. When the application terminates, **Run** calls `ExitInstance`. The figure in [OnIdle Member Function](../mfc/onidle-member-function.md) shows the sequence of actions in the message loop.  
  
 Message dispatching depends on the kind of message. For more information, see [Messages and Commands in the Framework](../mfc/messages-and-commands-in-the-framework.md).  
  
## See Also  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)




