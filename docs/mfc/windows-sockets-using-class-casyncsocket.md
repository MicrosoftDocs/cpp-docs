---
title: "Windows Sockets: Using Class CAsyncSocket"
description: "Learn more about: Windows Sockets: Using Class CAsyncSocket"
ms.date: "6/8/2021"
helpviewer_keywords: ["CAsyncSocket class [MFC], programming model", "Windows Sockets [MFC], asynchronous", "sockets [MFC], converting between Unicode and MBCS strings", "SOCKET handle", "sockets [MFC], asynchronous operation", "Windows Sockets [MFC], converting Unicode and MBCS strings"]
---
# Windows Sockets: Using Class `CAsyncSocket`

This article explains how to use class [`CAsyncSocket`](reference/casyncsocket-class.md). This class encapsulates the Windows Sockets API at a very low level. `CAsyncSocket` is for use by programmers who know network communications in detail but want the convenience of callbacks for notification of network events. Based on this assumption, this article provides only basic instruction. You should probably consider using `CAsyncSocket` if you want Windows Sockets' ease of dealing with multiple network protocols in an MFC application but don't want to sacrifice flexibility. You might also feel that you can get better efficiency by programming the communications more directly yourself than you could using the more general alternative model of class `CSocket`.

`CAsyncSocket` is documented in the *MFC Reference*. Visual C++ also supplies the Windows Sockets specification, located in the Windows SDK. The details are left to you. Visual C++ doesn't supply a sample application for `CAsyncSocket`.

If you aren't highly knowledgeable about network communications and want a simple solution, use class [`CSocket`](reference/csocket-class.md) with a `CArchive` object. See [Windows Sockets: Using Sockets with Archives](windows-sockets-using-sockets-with-archives.md) for more information.

This article covers:

- Creating and using a `CAsyncSocket` object.

- [Your responsibilities with `CAsyncSocket`](#_core_your_responsibilities_with_casyncsocket).

## <a name="_core_creating_and_using_a_casyncsocket_object"></a> Creating and using a `CAsyncSocket`

#### To use `CAsyncSocket`

1. Construct a [`CAsyncSocket`](reference/casyncsocket-class.md) object and use the object to create the underlying **`SOCKET`** handle.

   Creation of a socket follows the MFC pattern of two-stage construction.

   For example:

   [!code-cpp[NVC_MFCSimpleSocket#3](codesnippet/cpp/windows-sockets-using-class-casyncsocket_1.cpp)]

     -or-

   [!code-cpp[NVC_MFCSimpleSocket#4](codesnippet/cpp/windows-sockets-using-class-casyncsocket_2.cpp)]

   The first constructor above creates a `CAsyncSocket` object on the stack. The second constructor creates a `CAsyncSocket` on the heap. The first [`Create`](reference/casyncsocket-class.md#create) call above uses the default parameters to create a stream socket. The second `Create` call creates a datagram socket with a specified port and address. (You can use either `Create` version with either construction method.)

   The parameters to `Create` are:

   - A "port": a short integer.

      For a server socket, you must specify a port. For a client socket, you typically accept the default value for this parameter, which lets Windows Sockets select a port.

   - A socket type: **`SOCK_STREAM`** (the default) or **`SOCK_DGRAM`**.

   - A socket "address" such as `"ftp.microsoft.com"` or `"128.56.22.8"`.

      This is your Internet Protocol (IP) address on the network. You'll probably always rely on the default value for this parameter.

   The terms "port" and "socket address" are explained in [Windows Sockets: Ports and Socket Addresses](windows-sockets-ports-and-socket-addresses.md).

1. If the socket is a client, connect the socket object to a server socket, using [`CAsyncSocket::Connect`](reference/casyncsocket-class.md#connect).

     -or-

   If the socket is a server, set the socket to begin listening (with [`CAsyncSocket::Listen`](reference/casyncsocket-class.md#listen)) for connect attempts from a client. Upon receiving a connection request, accept it with [`CAsyncSocket::Accept`](reference/casyncsocket-class.md#accept).

   After accepting a connection, you can do tasks like validating passwords.

    > [!NOTE]
    >  The `Accept` member function takes a reference to a new, empty `CSocket` object as its parameter. You must construct this object before you call `Accept`. If this socket object goes out of scope, the connection closes. Don't call `Create` for this new socket object. For an example, see the article [Windows Sockets: Sequence of Operations](windows-sockets-sequence-of-operations.md).

1. Carry out communications with other sockets by calling the `CAsyncSocket` object's member functions that encapsulate the Windows Sockets API functions.

   See the Windows Sockets specification and class [`CAsyncSocket`](reference/casyncsocket-class.md) in the *MFC Reference*.

1. Destroy the `CAsyncSocket` object.

   If you created the socket object on the stack, its destructor is called when the containing function goes out of scope. If you created the socket object on the heap, using the **`new`** operator, you're responsible for using the **`delete`** operator to destroy the object.

   The destructor calls the object's [`Close`](reference/casyncsocket-class.md#close) member function before destroying the object.

For an example of this sequence in code (actually for a `CSocket` object), see [Windows Sockets: Sequence of Operations](windows-sockets-sequence-of-operations.md).

## <a name="_core_your_responsibilities_with_casyncsocket"></a> Your responsibilities with `CAsyncSocket`

When you create an object of class [`CAsyncSocket`](reference/casyncsocket-class.md), the object encapsulates a Windows **`SOCKET`** handle and supplies operations on that handle. When you use `CAsyncSocket`, you must deal with all the issues you might face if using the API directly. For example:

- "Blocking" scenarios.

- Byte order differences between the sending and receiving machines.

- Converting between Unicode and multibyte character set (MBCS) strings.

For definitions of these terms and additional information, see [Windows Sockets: Blocking](windows-sockets-blocking.md), [Windows Sockets: Byte Ordering](windows-sockets-byte-ordering.md), [Windows Sockets: Converting Strings](windows-sockets-converting-strings.md).

Despite these issues, class `CAsyncSocket` may be the right choice for you if your application requires all the flexibility and control you can get. If not, consider using class `CSocket` instead. `CSocket` hides many details from you: it pumps Windows messages during blocking calls and gives you access to `CArchive`, which manages byte order differences and string conversion for you.

For more information, see:

- [Windows Sockets: Background](windows-sockets-background.md)
- [Windows Sockets: Stream Sockets](windows-sockets-stream-sockets.md)
- [Windows Sockets: Datagram Sockets](windows-sockets-datagram-sockets.md)

## See also

[Windows Sockets in MFC](windows-sockets-in-mfc.md)
