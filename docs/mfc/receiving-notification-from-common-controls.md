---
title: "Receiving Notification from Common Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_NOTIFY"
  - "WM_NOTIFY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnNotify method"
  - "common controls [C++], notifications"
  - "ON_NOTIFY macro"
  - "controls [MFC], notifications"
  - "receiving notifications from common controls"
  - "notifications, common controls"
  - "Windows common controls [C++], notifications"
  - "WM_NOTIFY message"
ms.assetid: 50194592-d60d-44d0-8ab3-338a2a2c63e7
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
# Receiving Notification from Common Controls
Common controls are child windows that send notification messages to the parent window when events, such as input from the user, occur in the control.  
  
 The application relies on these notification messages to determine what action the user wants it to take. Most common controls send notification messages as **WM_NOTIFY** messages. Windows controls send most notification messages as **WM_COMMAND** messages. [CWnd::OnNotify](../mfc/reference/cwnd-class.md#cwnd__onnotify) is the handler for the **WM_NOTIFY** message. As with `CWnd::OnCommand`, the implementation of `OnNotify` dispatches the notification message to `OnCmdMsg` for handling in message maps. The message-map entry for handling notifications is `ON_NOTIFY`. For more information, see [Technical Note 61: ON_NOTIFY and WM_NOTIFY Messages](../mfc/tn061-on-notify-and-wm-notify-messages.md).  
  
 Alternately, a derived class can handle its own notification messages using "message reflection." For more information, see [Technical Note 62: Message Reflection for Windows Controls](../mfc/tn062-message-reflection-for-windows-controls.md).  
  
## Retrieving the Cursor Position in a Notification Message  
 On occasion, it is useful to determine the current position of the cursor when certain notification messages are received by a common control. For example, it would be helpful to determine the current cursor location when a common control receives a **NM_RCLICK** notification message.  
  
 There is a simple way to accomplish this by calling `CWnd::GetCurrentMessage`. However, this method only retrieves the cursor position at the time the message was sent. Because the cursor may have been moved since the message was sent you must call **CWnd::GetCursorPos** to get the current cursor position.  
  
> [!NOTE]
>  `CWnd::GetCurrentMessage` should only be called within a message handler.  
  
 Add the following code to the body of the notification message handler (in this example, **NM_RCLICK**):  
  
 [!code-cpp[NVC_MFCControlLadenDialog#4](../mfc/codesnippet/cpp/receiving-notification-from-common-controls_1.cpp)]  
  
 At this point, the mouse cursor location is stored in the `cursorPos` object.  
  
## See Also  
 [Making and Using Controls](../mfc/making-and-using-controls.md)   
 [Controls](../mfc/controls-mfc.md)

