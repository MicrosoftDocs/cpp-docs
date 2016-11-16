---
title: "MSG Structure1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MSG structure"
ms.assetid: dc166d27-9423-41f1-9599-5ba76d2f0138
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
# MSG Structure1
The `MSG` structure contains message information from a thread's message queue.  
  
## Syntax  
  
```  
typedef struct tagMSG {     // msg    
    HWND hwnd;  
    UINT message;  
    WPARAM wParam;  
    LPARAM lParam;  
    DWORD time;  
    POINT pt;  
} MSG;  
```  
  
#### Parameters  
 *hwnd*  
 Identifies the window whose window procedure receives the message.  
  
 `message`  
 Specifies the message number.  
  
 `wParam`  
 Specifies additional information about the message. The exact meaning depends on the value of the **message** member.  
  
 `lParam`  
 Specifies additional information about the message. The exact meaning depends on the value of the **message** member.  
  
 `time`  
 Specifies the time at which the message was posted.  
  
 `pt`  
 Specifies the cursor position, in screen coordinates, when the message was posted.  
  
## Requirements  
 **Header:** winuser.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

