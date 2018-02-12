---
title: "MessageHandler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["MessageHandler"]
dev_langs: ["C++"]
helpviewer_keywords: ["MessageHandler function"]
ms.assetid: 8a0acf97-1b0d-4226-91b9-75446634a03c
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# MessageHandler
**MessageHandler** is the name of the function identified by the second parameter of the `MESSAGE_HANDLER` macro in your message map.  
  
## Syntax  
  
```  
 
    LRESULT 
    MessageHandler 
 (
    UINT uMsg,  
    WPARAM wParam,  
    LPARAM lParam,  
    BOOL& bHandled);
```  
  
#### Parameters  
 `uMsg`  
 Specifies the message.  
  
 `wParam`  
 Additional message-specific information.  
  
 `lParam`  
 Additional message-specific information.  
  
 `bHandled`  
 The message map sets `bHandled` to **TRUE** before `MessageHandler` is called. If `MessageHandler` does not fully handle the message, it should set `bHandled` to **FALSE** to indicate the message needs further processing.  
  
## Return Value  
 The result of message processing. 0 if successful.  
  
## Remarks  
 For an example of using this message handler in a message map, see [MESSAGE_HANDLER](reference/message-map-macros-atl.md#message_handler).  
  
## See Also  
 [Implementing a Window](../atl/implementing-a-window.md)   
 [Message Maps](../atl/message-maps-atl.md)   
 [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)

