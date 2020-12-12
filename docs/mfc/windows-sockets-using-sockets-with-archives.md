---
description: "Learn more about: Windows Sockets: Using Sockets with Archives"
title: "Windows Sockets: Using Sockets with Archives"
ms.date: "11/04/2016"
helpviewer_keywords: ["Windows Sockets [MFC], archives", "sockets [MFC], with archives", "archives [MFC], and Windows Sockets", "CSocket class [MFC], programming model"]
ms.assetid: 17e71a99-a09e-4e1a-9fda-13d62805c824
---
# Windows Sockets: Using Sockets with Archives

This article describes the [CSocket programming model](#_core_the_csocket_programming_model). Class [CSocket](../mfc/reference/csocket-class.md) supplies socket support at a higher level of abstraction than does class [CAsyncSocket](../mfc/reference/casyncsocket-class.md). `CSocket` uses a version of the MFC serialization protocol to pass data to and from a socket object through an MFC [CArchive](../mfc/reference/carchive-class.md) object. `CSocket` provides blocking (while managing background processing of Windows messages) and gives you access to `CArchive`, which manages many aspects of the communication that you would have to do yourself using either the raw API or class `CAsyncSocket`.

> [!TIP]
> You can use class `CSocket` by itself, as a more convenient version of `CAsyncSocket`, but the simplest programming model is to use `CSocket` with a `CArchive` object.

For more information about how the implementation of sockets with archives works, see [Windows Sockets: How Sockets with Archives Work](../mfc/windows-sockets-how-sockets-with-archives-work.md). For example code, see [Windows Sockets: Sequence of Operations](../mfc/windows-sockets-sequence-of-operations.md) and [Windows Sockets: Example of Sockets Using Archives](../mfc/windows-sockets-example-of-sockets-using-archives.md). For information about some of the functionality you can gain by deriving your own classes from the sockets classes, see [Windows Sockets: Deriving from Socket Classes](../mfc/windows-sockets-deriving-from-socket-classes.md).

> [!NOTE]
> If you are writing an MFC client program to communicate with established (non-MFC) servers, do not send C++ objects through the archive. Unless the server is an MFC application that understands the kinds of objects you want to send, it will not be able to receive and deserialize your objects. For related material on the subject of communicating with non-MFC applications, also see the article [Windows Sockets: Byte Ordering](../mfc/windows-sockets-byte-ordering.md).

## <a name="_core_the_csocket_programming_model"></a> The CSocket Programming Model

Using a `CSocket` object involves creating and associating together several MFC class objects. In the general procedure below, each step is taken by both the server socket and the client socket, except for step 3, in which each socket type requires a different action.

> [!TIP]
> At run time, the server application usually starts first to be ready and "listening" when the client application seeks a connection. If the server is not ready when the client tries to connect, you typically require the user application to try connecting again later.

#### To set up communication between a server socket and a client socket

1. Construct a [CSocket](../mfc/reference/csocket-class.md) object.

1. Use the object to create the underlying **SOCKET** handle.

   For a `CSocket` client object, you should normally use the default parameters to [Create](../mfc/reference/casyncsocket-class.md#create), unless you need a datagram socket. For a `CSocket` server object, you must specify a port in the `Create` call.

    > [!NOTE]
    >  `CArchive` does not work with datagram sockets. If you want to use `CSocket` for a datagram socket, you must use the class as you would use `CAsyncSocket`, that is, without an archive. Because datagrams are unreliable (not guaranteed to arrive and may be repeated or out of sequence), they are not compatible with serialization through an archive. You expect a serialization operation to complete reliably and in sequence. If you try to use `CSocket` with a `CArchive` object for a datagram, an MFC assertion fails.

1. If the socket is a client, call [CAsyncSocket::Connect](../mfc/reference/casyncsocket-class.md#connect) to connect the socket object to a server socket.

     -or-

   If the socket is a server, call [CAsyncSocket::Listen](../mfc/reference/casyncsocket-class.md#listen) to begin listening for connect attempts from a client. Upon receiving a connection request, accept it by calling [CAsyncSocket::Accept](../mfc/reference/casyncsocket-class.md#accept).

    > [!NOTE]
    >  The `Accept` member function takes a reference to a new, empty `CSocket` object as its parameter. You must construct this object before you call `Accept`. If this socket object goes out of scope, the connection closes. Do not call `Create` for this new socket object.

1. Create a [CSocketFile](../mfc/reference/csocketfile-class.md) object, associating the `CSocket` object with it.

1. Create a [CArchive](../mfc/reference/carchive-class.md) object for either loading (receiving) or storing (sending) data. The archive is associated with the `CSocketFile` object.

   Keep in mind that `CArchive` does not work with datagram sockets.

1. Use the `CArchive` object to pass data between the client and server sockets.

   Keep in mind that a given `CArchive` object moves data in one direction only: either for loading (receiving) or storing (sending). In some cases, you will use two `CArchive` objects: one for sending data, the other for receiving acknowledgments.

   After accepting a connection and setting up the archive, you can perform such tasks as validating passwords.

1. Destroy the archive, socket file, and socket objects.

    > [!NOTE]
    >  Class `CArchive` supplies the `IsBufferEmpty` member function specifically for use with class `CSocket`. If the buffer contains multiple data messages, for example, you need to loop until all of them are read and the buffer is cleared. Otherwise, your next notification that there is data to be received may be indefinitely delayed. Use `IsBufferEmpty` to assure that you retrieve all data.

The article [Windows Sockets: Sequence of Operations](../mfc/windows-sockets-sequence-of-operations.md) illustrates both sides of this process with example code.

For more information, see:

- [Windows Sockets: Stream Sockets](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: Datagram Sockets](../mfc/windows-sockets-datagram-sockets.md)

## See also

[Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)<br/>
[CSocket::Create](../mfc/reference/csocket-class.md#create)
