---
description: "Learn more about: How WinInet Makes It Easier to Create Internet Client Applications"
title: "How WinInet Makes It Easier to Create Internet Client Applications"
ms.date: "11/04/2016"
helpviewer_keywords: ["Windows Sockets [MFC], vs. WinInet", "WinInet classes [MFC], vs. WinSock", "WinInet classes [MFC], Internet client applications"]
ms.assetid: dc0f9f47-3184-4e7a-8074-2c63e0359885
---
# How WinInet Makes It Easier to Create Internet Client Applications

The Win32 Internet Extensions, or WinInet, provide access to common Internet protocols, including gopher, FTP, and HTTP. Using WinInet, you can write Internet client applications at a higher level of programming, without having to deal with WinSock, TCP/IP, or the details of specific Internet protocols. WinInet provides a consistent set of functions for all three protocols, with a familiar Win32 API interface. This consistency minimizes code changes you need to make if the underlying protocol changes (for example, from FTP to HTTP).

Visual C++ provides two ways for you to use WinInet. You can call the Win32 Internet functions directly (see the OLE documentation in the Windows SDK for more information) or you can use WinInet through the [MFC WinInet classes](mfc-classes-for-creating-internet-client-applications.md).

**You can use WinInet to:**

- Download HTML pages.

   HTTP is a protocol used to transfer HTML pages from a server to a client browser.

- Send FTP requests to upload or download files or get directory listings.

   A typical request is an anonymous logon to download a file.

- Use gopher's menu system for accessing resources on the Internet.

   Menu items can be several types, including other menus, an indexed database you can search, a newsgroup, or a file.

For all three protocols, you establish a connection, make requests to the server, and close the connection.

**The MFC WinInet classes make it easy to:**

- Read information from HTTP, FTP, and gopher servers as easily as reading files from a hard drive.

- Use HTTP, FTP, and gopher protocols without programming directly to WinSock or TCP/IP.

   Developers who use the Win32 Internet functions do not need to be familiar with TCP/IP or Windows Sockets. You can still program at the socket level, using WinSock and TCP/IP protocols directly, but it's even easier to use the MFC WinInet classes to access HTTP, FTP, and gopher protocols across the Internet. For many common operations, developers do not need to know the details of the particular protocol they are using.

Many operations that can be performed by your computer as a client to other computers on the Internet can take a long time. The speed of these operations is usually limited by the speed of your network connection, but they can also be affected by other network traffic and the complexity of the operation. Connecting to a remote FTP server, for example, requires that your computer first look up the name of that server to find its address. Your application will then attempt to connect to the server at that address. Once the connection is opened, your computer and the remote server will initiate a conversation with the file transfer protocol before you can actually use the connection to retrieve files.

## See also

[Win32 Internet Extensions (WinInet)](win32-internet-extensions-wininet.md)<br/>
[How MFC Makes It Easier to Create Internet Client Applications](how-mfc-makes-it-easier-to-create-internet-client-applications.md)
