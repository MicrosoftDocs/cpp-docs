---
title: "Windows Sockets: Using Class CAsyncSocket"
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
ms.assetid: 825dae17-7c1b-4b86-8d6c-da7f1afb5d8d
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
# Windows Sockets: Using Class CAsyncSocket
This article explains how to use class [CAsyncSocket](../VS_visualcpp/CAsyncSocket-Class.md). Be aware that this class encapsulates the Windows Sockets API at a very low level. `CAsyncSocket` is for use by programmers who know network communications in detail but want the convenience of callbacks for notification of network events. Based on this assumption, this article provides only basic instruction. You should probably consider using `CAsyncSocket` if you want Windows Sockets' ease of dealing with multiple network protocols in an MFC application but do not want to sacrifice flexibility. You might also feel that you can get better efficiency by programming the communications more directly yourself than you could using the more general alternative model of class `CSocket`.  
  
 `CAsyncSocket` is documented in the *MFC Reference*. Visual C++ also supplies the Windows Sockets specification, located in the Windows SDK. The details are left to you. Visual C++ does not supply a sample application for `CAsyncSocket`.  
  
 If you are not highly knowledgeable about network communications and want a simple solution, use class [CSocket](../VS_visualcpp/CSocket-Class.md) with a `CArchive` object. See [Windows Sockets: Using Sockets with Archives](../VS_visualcpp/Windows-Sockets--Using-Sockets-with-Archives.md) for more information.  
  
 This article covers:  
  
-   Creating and using a `CAsyncSocket` object.  
  
-   [Your responsibilities with CAsyncSocket](#_core_your_responsibilities_with_casyncsocket).  
  
##  <a name="_core_creating_and_using_a_casyncsocket_object"></a> Creating and Using a CAsyncSocket Object  
  
#### To use CAsyncSocket  
  
1.  Construct a [CAsyncSocket](../VS_visualcpp/CAsyncSocket-Class.md) object and use the object to create the underlying **SOCKET** handle.  
  
     Creation of a socket follows the MFC pattern of two-stage construction.  
  
     For example:  
  
     [!CODE [NVC_MFCSimpleSocket#3](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCSimpleSocket#3)]  
  
     -or-  
  
     [!CODE [NVC_MFCSimpleSocket#4](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCSimpleSocket#4)]  
  
     The first constructor above creates a `CAsyncSocket` object on the stack. The second constructor creates a `CAsyncSocket` on the heap. The first [Create](../Topic/CAsyncSocket::Create.md) call above uses the default parameters to create a stream socket. The second **Create** call creates a datagram socket with a specified port and address. (You can use either **Create** version with either construction method.)  
  
     The parameters to **Create** are:  
  
    -   A "port": a short integer.  
  
         For a server socket, you must specify a port. For a client socket, you typically accept the default value for this parameter, which lets Windows Sockets select a port.  
  
    -   A socket type: **SOCK_STREAM** (the default) or **SOCK_DGRAM**.  
  
    -   A socket "address," such as "ftp.microsoft.com" or "128.56.22.8".  
  
         This is your Internet Protocol (IP) address on the network. You will probably always rely on the default value for this parameter.  
  
     The terms "port" and "socket address" are explained in [Windows Sockets: Ports and Socket Addresses](../VS_visualcpp/Windows-Sockets--Ports-and-Socket-Addresses.md).  
  
2.  If the socket is a client, connect the socket object to a server socket, using [CAsyncSocket::Connect](../Topic/CAsyncSocket::Connect.md).  
  
     -or-  
  
     If the socket is a server, set the socket to begin listening (with [CAsyncSocket::Listen](../Topic/CAsyncSocket::Listen.md)) for connect attempts from a client. Upon receiving a connection request, accept it with [CAsyncSocket::Accept](../Topic/CAsyncSocket::Accept.md).  
  
     After accepting a connection, you can perform such tasks as validating passwords.  
  
    > [!NOTE]
    >  The **Accept** member function takes a reference to a new, empty `CSocket` object as its parameter. You must construct this object before you call **Accept**. If this socket object goes out of scope, the connection closes. Do not call **Create** for this new socket object. For an example, see the article [Windows Sockets: Sequence of Operations](../VS_visualcpp/Windows-Sockets--Sequence-of-Operations.md).  
  
3.  Carry out communications with other sockets by calling the `CAsyncSocket` object's member functions that encapsulate the Windows Sockets API functions.  
  
     See the Windows Sockets specification and class [CAsyncSocket](../VS_visualcpp/CAsyncSocket-Class.md) in the *MFC Reference*.  
  
4.  Destroy the `CAsyncSocket` object.  
  
     If you created the socket object on the stack, its destructor is called when the containing function goes out of scope. If you created the socket object on the heap, using the **new** operator, you are responsible for using the **delete** operator to destroy the object.  
  
     The destructor calls the object's [Close](../Topic/CAsyncSocket::Close.md) member function before destroying the object.  
  
 For an example of this sequence in code (actually for a `CSocket` object), see [Windows Sockets: Sequence of Operations](../VS_visualcpp/Windows-Sockets--Sequence-of-Operations.md).  
  
##  <a name="_core_your_responsibilities_with_casyncsocket"></a> Your Responsibilities with CAsyncSocket  
 When you create an object of class [CAsyncSocket](../VS_visualcpp/CAsyncSocket-Class.md), the object encapsulates a Windows **SOCKET** handle and supplies operations on that handle. When you use `CAsyncSocket`, you must deal with all the issues you might face if using the API directly. For example:  
  
-   "Blocking" scenarios.  
  
-   Byte order differences between the sending and receiving machines.  
  
-   Converting between Unicode and multibyte character set (MBCS) strings.  
  
 For definitions of these terms and additional information, see [Windows Sockets: Blocking](../VS_visualcpp/Windows-Sockets--Blocking.md), [Windows Sockets: Byte Ordering](../VS_visualcpp/Windows-Sockets--Byte-Ordering.md), [Windows Sockets: Converting Strings](../VS_visualcpp/Windows-Sockets--Converting-Strings.md).  
  
 Despite these issues, class **CAsycnSocket** may be the right choice for you if your application requires all the flexibility and control you can get. If not, you should consider using class `CSocket` instead. `CSocket` hides a lot of detail from you: it pumps Windows messages during blocking calls and gives you access to `CArchive`, which manages byte order differences and string conversion for you.  
  
 For more information, see:  
  
-   [Windows Sockets: Background](../VS_visualcpp/Windows-Sockets--Background.md)  
  
-   [Windows Sockets: Stream Sockets](../VS_visualcpp/Windows-Sockets--Stream-Sockets.md)  
  
-   [Windows Sockets: Datagram Sockets](../VS_visualcpp/Windows-Sockets--Datagram-Sockets.md)  
  
## See Also  
 [Windows Sockets in MFC](../VS_visualcpp/Windows-Sockets-in-MFC.md)