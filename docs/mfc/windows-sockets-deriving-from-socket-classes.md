---
title: "Windows Sockets: Deriving from Socket Classes | Microsoft Docs"
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
  - "derived classes, from socket classes"
  - "Windows Sockets [C++], deriving from socket classes"
  - "sockets [C++], deriving from socket classes"
ms.assetid: 3a26e67a-e323-433b-9b05-eca018799801
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
# Windows Sockets: Deriving from Socket Classes
This article describes some of the functionality you can gain by deriving your own class from one of the socket classes.  
  
 You can derive your own socket classes from either [CAsyncSocket](../mfc/reference/casyncsocket-class.md) or [CSocket](../mfc/reference/csocket-class.md) to add your own functionality. In particular, these classes supply a number of virtual member functions that you can override. These functions include [OnReceive](../mfc/reference/casyncsocket-class.md#casyncsocket__onreceive), [OnSend](../mfc/reference/casyncsocket-class.md#casyncsocket__onsend), [OnAccept](../mfc/reference/casyncsocket-class.md#casyncsocket__onaccept), [OnConnect](../mfc/reference/casyncsocket-class.md#casyncsocket__onconnect), and [OnClose](../mfc/reference/casyncsocket-class.md#casyncsocket__onclose). You can override the functions in your derived socket class to take advantage of the notifications they provide when network events occur. The framework calls these notification callback functions to notify you of important socket events, such as the receipt of data that you can begin reading. For more information about notification functions, see [Windows Sockets: Socket Notifications](../mfc/windows-sockets-socket-notifications.md).  
  
 Additionally, class `CSocket` supplies the [OnMessagePending](../mfc/reference/csocket-class.md#csocket__onmessagepending) member function (an advanced overridable). MFC calls this function while the socket is pumping Windows-based messages. You can override `OnMessagePending` to look for particular messages from Windows and respond to them.  
  
 The default version of `OnMessagePending` supplied in class `CSocket` examines the message queue for `WM_PAINT` messages while waiting for a blocking call to complete. It dispatches paint messages to improve display quality. Aside from doing something useful, this illustrates one way you might override the function yourself. As another example, consider using `OnMessagePending` for the following task. Suppose you display a modeless dialog box while waiting for a network transaction to complete. The dialog box contains a Cancel button that the user can use to cancel blocking transactions that take too long. Your `OnMessagePending` override might pump messages related to this modeless dialog box.  
  
 In your `OnMessagePending` override, return either **TRUE** or the return from a call to the base-class version of `OnMessagePending`. Call the base-class version if it performs work that you still want done.  
  
 For more information, see:  
  
-   [Windows Sockets: Using Sockets with Archives](../mfc/windows-sockets-using-sockets-with-archives.md)  
  
-   [Windows Sockets: Using Class CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)  
  
-   [Windows Sockets: Blocking](../mfc/windows-sockets-blocking.md)  
  
-   [Windows Sockets: Byte Ordering](../mfc/windows-sockets-byte-ordering.md)  
  
-   [Windows Sockets: Converting Strings](../mfc/windows-sockets-converting-strings.md)  
  
## See Also  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)

