---
title: "Windows Sockets: Deriving from Socket Classes"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3a26e67a-e323-433b-9b05-eca018799801
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Windows Sockets: Deriving from Socket Classes
This article describes some of the functionality you can gain by deriving your own class from one of the socket classes.  
  
 You can derive your own socket classes from either [CAsyncSocket](../VS_visualcpp/CAsyncSocket-Class.md) or [CSocket](../VS_visualcpp/CSocket-Class.md) to add your own functionality. In particular, these classes supply a number of virtual member functions that you can override. These functions include [OnReceive](../Topic/CAsyncSocket::OnReceive.md), [OnSend](../Topic/CAsyncSocket::OnSend.md), [OnAccept](../Topic/CAsyncSocket::OnAccept.md), [OnConnect](../Topic/CAsyncSocket::OnConnect.md), and [OnClose](../Topic/CAsyncSocket::OnClose.md). You can override the functions in your derived socket class to take advantage of the notifications they provide when network events occur. The framework calls these notification callback functions to notify you of important socket events, such as the receipt of data that you can begin reading. For more information about notification functions, see [Windows Sockets: Socket Notifications](../VS_visualcpp/Windows-Sockets--Socket-Notifications.md).  
  
 Additionally, class `CSocket` supplies the [OnMessagePending](../Topic/CSocket::OnMessagePending.md) member function (an advanced overridable). MFC calls this function while the socket is pumping Windows-based messages. You can override `OnMessagePending` to look for particular messages from Windows and respond to them.  
  
 The default version of `OnMessagePending` supplied in class `CSocket` examines the message queue for `WM_PAINT` messages while waiting for a blocking call to complete. It dispatches paint messages to improve display quality. Aside from doing something useful, this illustrates one way you might override the function yourself. As another example, consider using `OnMessagePending` for the following task. Suppose you display a modeless dialog box while waiting for a network transaction to complete. The dialog box contains a Cancel button that the user can use to cancel blocking transactions that take too long. Your `OnMessagePending` override might pump messages related to this modeless dialog box.  
  
 In your `OnMessagePending` override, return either **TRUE** or the return from a call to the base-class version of `OnMessagePending`. Call the base-class version if it performs work that you still want done.  
  
 For more information, see:  
  
-   [Windows Sockets: Using Sockets with Archives](../VS_visualcpp/Windows-Sockets--Using-Sockets-with-Archives.md)  
  
-   [Windows Sockets: Using Class CAsyncSocket](../VS_visualcpp/Windows-Sockets--Using-Class-CAsyncSocket.md)  
  
-   [Windows Sockets: Blocking](../VS_visualcpp/Windows-Sockets--Blocking.md)  
  
-   [Windows Sockets: Byte Ordering](../VS_visualcpp/Windows-Sockets--Byte-Ordering.md)  
  
-   [Windows Sockets: Converting Strings](../VS_visualcpp/Windows-Sockets--Converting-Strings.md)  
  
## See Also  
 [Windows Sockets in MFC](../VS_visualcpp/Windows-Sockets-in-MFC.md)