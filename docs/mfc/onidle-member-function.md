---
title: "OnIdle Member Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["OnIdle"]
dev_langs: ["C++"]
helpviewer_keywords: ["processing messages [MFC]", "OnIdle method [MFC]", "idle loop processing [MFC]", "CWinApp class [MFC], OnIdle method [MFC]", "message handling [MFC], OnIdle method [MFC]"]
ms.assetid: 51adc874-0075-4f76-be1c-79283f46c10b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OnIdle Member Function
When no Windows messages are being processed, the framework calls the [CWinApp](../mfc/reference/cwinapp-class.md) member function [OnIdle](../mfc/reference/cwinapp-class.md#onidle) (described in the MFC Library Reference).  
  
 Override `OnIdle` to perform background tasks. The default version updates the state of user-interface objects such as toolbar buttons and performs cleanup of temporary objects created by the framework in the course of its operations. The following figure illustrates how the message loop calls `OnIdle` when there are no messages in the queue.  
  
 ![Message loop process](../mfc/media/vc387c1.gif "vc387c1")  
The Message Loop  
  
 For more information about what you can do in the idle loop, see [Idle Loop Processing](../mfc/idle-loop-processing.md).  
  
## See Also  
 [CWinApp: The Application Class](../mfc/cwinapp-the-application-class.md)
