---
description: "Learn more about: Windows Sockets: Background"
title: "Windows Sockets: Background"
ms.date: "11/04/2016"
helpviewer_keywords: ["record-oriented data [MFC]", "e-mail [MFC]", "Internet Protocol Suite", "mail [MFC]", "communications [MFC], domain", "Windows Sockets [MFC], stream sockets", "mail [MFC], programming for", "sockets [MFC], stream sockets", "datagram sockets [MFC]", "SOCKET handle", "data types [MFC], socket", "e-mail [MFC], programming for", "X Window servers", "sequenced data flow", "stream sockets [MFC]"]
ms.assetid: f60d4ed2-bf23-4a0e-98d2-fee77e8473dd
---
# Windows Sockets: Background

This article explains the nature and purpose of Windows Sockets. The article also:

- [Defines the term "socket"](#_core_definition_of_a_socket).

- [Describes the SOCKET handle data type](#_core_the_socket_data_type).

- [Describes uses for sockets](#_core_uses_for_sockets).

The Windows Sockets specification defines a binary-compatible network programming interface for Microsoft Windows. Windows Sockets are based on the UNIX sockets implementation in the Berkeley Software Distribution (BSD, release 4.3) from the University of California at Berkeley. The specification includes both BSD-style socket routines and extensions specific to Windows. Using Windows Sockets permits your application to communicate across any network that conforms to the Windows Sockets API. On Win32, Windows Sockets provide for thread safety.

Many network software vendors support Windows Sockets under network protocols including Transmission Control Protocol/Internet Protocol (TCP/IP), Xerox Network System (XNS), Digital Equipment Corporation's DECNet protocol, Novell Corporation's Internet Packet Exchange/Sequenced Packed Exchange (IPX/SPX), and others. Although the present Windows Sockets specification defines the sockets abstraction for TCP/IP, any network protocol can comply with Windows Sockets by supplying its own version of the dynamic-link library (DLL) that implements Windows Sockets. Examples of commercial applications written with Windows Sockets include X Windows servers, terminal emulators, and electronic mail systems.

> [!NOTE]
> The purpose of Windows Sockets is to abstract away the underlying network so that you do not have to be knowledgeable about that network and so your application can run on any network that supports sockets. Consequently, this documentation does not discuss the details of network protocols.

The Microsoft Foundation Class Library (MFC) supports programming with the Windows Sockets API by supplying two classes. One of these classes, `CSocket`, provides a high level of abstraction to simplify your network communications programming.

The Windows Sockets specification, Windows Sockets: An Open Interface for Network Computing Under Microsoft Windows, now at version 1.1, was developed as an open networking standard by a large group of individuals and corporations in the TCP/IP community and is freely available for use. The sockets programming model supports one "communication domain" currently, using the Internet Protocol Suite. The specification is available in the Windows SDK.

> [!TIP]
> Because sockets use the Internet Protocol Suite, they are the preferred route for applications that support Internet communications on the "information highway."

## <a name="_core_definition_of_a_socket"></a> Definition of a Socket

A socket is a communication endpoint — an object through which a Windows Sockets application sends or receives packets of data across a network. A socket has a type and is associated with a running process, and it may have a name. Currently, sockets generally exchange data only with other sockets in the same "communication domain," which uses the Internet Protocol Suite.

Both kinds of sockets are bidirectional; they are data flows that can be communicated in both directions simultaneously (full-duplex).

Two socket types are available:

- Stream sockets

   Stream sockets provide for a data flow without record boundaries: a stream of bytes. Streams are guaranteed to be delivered and to be correctly sequenced and unduplicated.

- Datagram sockets

   Datagram sockets support a record-oriented data flow that is not guaranteed to be delivered and may not be sequenced as sent or unduplicated.

"Sequenced" means that packets are delivered in the order sent. "Unduplicated" means that you get a particular packet only once.

> [!NOTE]
> Under some network protocols, such as XNS, streams can be record oriented, as streams of records rather than streams of bytes. Under the more common TCP/IP protocol, however, streams are byte streams. Windows Sockets provides a level of abstraction independent of the underlying protocol.

For information about these types and which kind of socket to use in which situations, see [Windows Sockets: Stream Sockets](../mfc/windows-sockets-stream-sockets.md) and [Windows Sockets: Datagram Sockets](../mfc/windows-sockets-datagram-sockets.md).

## <a name="_core_the_socket_data_type"></a> The SOCKET Data Type

Each MFC socket object encapsulates a handle to a Windows Sockets object. The data type of this handle is **SOCKET**. A **SOCKET** handle is analogous to the `HWND` for a window. MFC socket classes provide operations on the encapsulated handle.

The **SOCKET** data type is described in detail in the Windows SDK. See "Socket Data Type and Error Values" under Windows Sockets.

## <a name="_core_uses_for_sockets"></a> Uses for Sockets

Sockets are highly useful in at least three communications contexts:

- Client/server models.

- Peer-to-peer scenarios, such as messaging applications.

- Making remote procedure calls (RPC) by having the receiving application interpret a message as a function call.

> [!TIP]
> The ideal case for using MFC sockets is when you are writing both ends of the communication: using MFC at both ends. For more information on this topic, including how to manage the case when you're communicating with non-MFC applications, see [Windows Sockets: Byte Ordering](../mfc/windows-sockets-byte-ordering.md).

For more information, see Windows Sockets Specification: **ntohs**, **ntohl**, **htons**, **htonl**. Also, see the following topics:

- [Windows Sockets: Using Sockets with Archives](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: Example of Sockets Using Archives](../mfc/windows-sockets-example-of-sockets-using-archives.md)

- [Windows Sockets: Using Class CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

## See also

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)
