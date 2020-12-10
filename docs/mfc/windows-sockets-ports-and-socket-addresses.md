---
description: "Learn more about: Windows Sockets: Ports and Socket Addresses"
title: "Windows Sockets: Ports and Socket Addresses"
ms.date: "11/04/2016"
helpviewer_keywords: ["ports [MFC], definition", "Windows Sockets [MFC], ports", "Windows Sockets [MFC], addresses", "ports [MFC]", "addresses [MFC], socket", "sockets [MFC], addresses", "sockets [MFC], ports"]
ms.assetid: e050261a-9285-4f31-a1c5-6c8033af5b4a
---
# Windows Sockets: Ports and Socket Addresses

This article explains the terms "port" and "address" as used with Windows Sockets.

## <a name="_core_port"></a> Port

A port identifies a unique process for which a service can be provided. In the present context, a port is associated with an application that supports Windows Sockets. The idea is to identify each Windows Sockets application uniquely so you can have more than one Windows Sockets application running on a machine at the same time.

Certain ports are reserved for common services, such as FTP. You should avoid using those ports unless you are providing that kind of service. The Windows Sockets specification details these reserved ports. The file WINSOCK.H also lists them.

To let the Windows Sockets DLL select a usable port for you, pass 0 as the port value. MFC selects a port value greater than 1,024 decimal. You can retrieve the port value that MFC selected by calling the [CAsyncSocket::GetSockName](../mfc/reference/casyncsocket-class.md#getsockname) member function.

## <a name="_core_socket_address"></a> Socket Address

Each socket object is associated with an Internet Protocol (IP) address on the network. Typically, the address is a machine name, such as "ftp.microsoft.com", or a dotted number, such as "128.56.22.8".

When you seek to create a socket, you typically do not need to specify your own address.

> [!NOTE]
> It is possible that your machine has multiple network cards (or your application might someday run on such a machine), each representing a different network. If so, you might need to give an address to specify which network card the socket will use. This is certain to be an advanced usage and a possible portability issue.

For more information, see:

- [Windows Sockets: Using Class CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: Using Sockets with Archives](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: How Sockets with Archives Work](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: Stream Sockets](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: Datagram Sockets](../mfc/windows-sockets-datagram-sockets.md)

## See also

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
