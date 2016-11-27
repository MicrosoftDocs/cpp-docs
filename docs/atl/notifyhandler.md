---
title: "NotifyHandler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "NotifyHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NotifyHandler function"
ms.assetid: 5ff953ec-de35-42bc-8b3c-d384d636c139
caps.latest.revision: 11
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
# NotifyHandler
The name of the function identified by the third parameter of the `NOTIFY_HANDLER` macro in your message map.  
  
## Syntax  
  
```  
 
    LRESULT 
    NotifyHandler 
 (
    int idCtrl,  
    LPNMHDR pnmh,  
    BOOL& bHandled);
```  
  
#### Parameters  
 `idCtrl`  
 The identifier of the control sending the message.  
  
 *pnmh*  
 Address of an [NMHDR](http://msdn.microsoft.com/library/windows/desktop/bb775514) structure that contains the notification code and additional information. For some notification messages, this parameter points to a larger structure that has the **NMHDR** structure as its first member.  
  
 `bHandled`  
 The message map sets `bHandled` to **TRUE** before *NotifyHandler* is called. If *NotifyHandler* does not fully handle the message, it should set `bHandled` to **FALSE** to indicate the message needs further processing.  
  
## Return Value  
 The result of message processing. 0 if successful.  
  
## Remarks  
 For an example of using this message handler in a message map, see [NOTIFY_HANDLER](http://msdn.microsoft.com/library/0c546767-9683-45f9-9cbc-e243a7106790).  
  
## See Also  
 [Implementing a Window](../atl/implementing-a-window.md)   
 [Message Maps](../atl/message-maps-atl.md)   
 [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)

