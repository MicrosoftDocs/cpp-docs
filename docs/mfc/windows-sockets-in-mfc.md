---
description: "Learn more about: Windows Sockets in MFC"
title: "Windows Sockets in MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["WINSOCK.DLL", "sockets [MFC], programming models", "MFC, Windows Sockets", "Windows Sockets [MFC], MFC support", "Windows Sockets [MFC], programming models", "WSOCK32.DLL", "sockets [MFC], MFC"]
ms.assetid: 1f3c476a-9c68-49fe-9a25-d22971a334d0
---
# Windows Sockets in MFC

> [!NOTE]
> MFC supports Windows Sockets 1 but does not support [Windows Sockets 2](/windows/win32/WinSock/windows-sockets-start-page-2). Windows Sockets 2 first shipped with Windows 98 and is the version included with Windows 2000.

MFC supplies two models for writing network communications programs with Windows Sockets, embodied in two MFC classes. This article describes these models and further details MFC sockets support. A "socket" is an endpoint of communication: an object through which your application communicates with other Windows Sockets applications across a network.

For information on Windows Sockets, including an explanation of the socket concept, see [Windows Sockets: Background](../mfc/windows-sockets-background.md).

## <a name="_core_sockets_programming_models"></a> Sockets Programming Models

The two MFC Windows Sockets programming models are supported by the following classes:

- `CAsyncSocket`

   This class encapsulates the Windows Sockets API. [CAsyncSocket](../mfc/reference/casyncsocket-class.md) is for programmers who know network programming and want the flexibility of programming directly to the sockets API but also want the convenience of callback functions for notification of network events. Other than packaging sockets in object-oriented form for use in C++, the only additional abstraction this class supplies is converting certain socket-related Windows messages into callbacks. For more information, see [Windows Sockets: Socket Notifications](../mfc/windows-sockets-socket-notifications.md).

- `CSocket`

   This class, derived from `CAsyncSocket`, supplies a higher level abstraction for working with sockets through an MFC [CArchive](../mfc/reference/carchive-class.md) object. Using a socket with an archive greatly resembles using MFC's file serialization protocol. This makes it easier to use than the `CAsyncSocket` model. [CSocket](../mfc/reference/csocket-class.md) inherits many member functions from `CAsyncSocket` that encapsulate Windows Sockets APIs; you will have to use some of these functions and understand sockets programming generally. But `CSocket` manages many aspects of the communication that you would have to do yourself using either the raw API or class `CAsyncSocket`. Most importantly, `CSocket` provides blocking (with background processing of Windows messages), which is essential to the synchronous operation of `CArchive`.

Creating and using `CSocket` and `CAsyncSocket` objects is described in [Windows Sockets: Using Sockets with Archives](../mfc/windows-sockets-using-sockets-with-archives.md) and [Windows Sockets: Using Class CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md).

## <a name="_core_mfc_socket_samples_and_windows_sockets_dlls"></a> Windows Sockets DLLs

The Microsoft Windows operating systems supply the Windows Sockets dynamic-link libraries (DLL). Visual C++ supplies the appropriate header files and libraries and the Windows Sockets specification.

For more information about Windows Sockets, see:

- [Windows Sockets: Stream Sockets](../mfc/windows-sockets-stream-sockets.md)

- [Windows Sockets: Datagram Sockets](../mfc/windows-sockets-datagram-sockets.md)

- [Windows Sockets: Using Sockets with Archives](../mfc/windows-sockets-using-sockets-with-archives.md)

- [Windows Sockets: Sequence of Operations](../mfc/windows-sockets-sequence-of-operations.md)

- [Windows Sockets: Example of Sockets Using Archives](../mfc/windows-sockets-example-of-sockets-using-archives.md)

- [Windows Sockets: How Sockets with Archives Work](../mfc/windows-sockets-how-sockets-with-archives-work.md)

- [Windows Sockets: Using Class CAsyncSocket](../mfc/windows-sockets-using-class-casyncsocket.md)

- [Windows Sockets: Deriving from Socket Classes](../mfc/windows-sockets-deriving-from-socket-classes.md)

- [Windows Sockets: Socket Notifications](../mfc/windows-sockets-socket-notifications.md)

- [Windows Sockets: Blocking](../mfc/windows-sockets-blocking.md)

- [Windows Sockets: Byte Ordering](../mfc/windows-sockets-byte-ordering.md)

- [Windows Sockets: Converting Strings](../mfc/windows-sockets-converting-strings.md)

- [Windows Sockets: Ports and Socket Addresses](../mfc/windows-sockets-ports-and-socket-addresses.md)

## See also

[Windows Sockets](../mfc/windows-sockets.md)
