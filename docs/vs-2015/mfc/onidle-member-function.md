---
title: "OnIdle Member Function | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OnIdle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "processing messages"
  - "OnIdle method"
  - "idle loop processing"
  - "CWinApp class, OnIdle method"
  - "message handling, OnIdle method"
ms.assetid: 51adc874-0075-4f76-be1c-79283f46c10b
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# OnIdle Member Function
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [OnIdle Member Function](https://docs.microsoft.com/cpp/mfc/onidle-member-function).  
  
  
When no Windows messages are being processed, the framework calls the [CWinApp](../mfc/reference/cwinapp-class.md) member function [OnIdle](../mfc/reference/cwinapp-class.md#onidle) (described in the MFC Library Reference).  
  
 Override `OnIdle` to perform background tasks. The default version updates the state of user-interface objects such as toolbar buttons and performs cleanup of temporary objects created by the framework in the course of its operations. The following figure illustrates how the message loop calls `OnIdle` when there are no messages in the queue.  
  
 ![Message loop process](../mfc/media/vc387c1.gif "vc387C1")  
The Message Loop  
  
 For more information about what you can do in the idle loop, see [Idle Loop Processing](../mfc/idle-loop-processing.md).  
  
## See Also  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)




