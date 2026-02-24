---
description: "Learn more about: Windows Sockets Classes"
title: "Windows Sockets Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["sockets classes [MFC]", "Windows Sockets [MFC], classes"]
---
# Windows Sockets Classes

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

Windows Sockets provide a network protocol-independent way to communicate between two computers. These sockets can be synchronous (your program waits until the communication is done) or asynchronous (your program continues running while the communication is going on).

[CAsyncSocket](../mfc/reference/casyncsocket-class.md)<br/>
Encapsulates the Windows Sockets API in a thin wrapper.

[CSocket](../mfc/reference/csocket-class.md)<br/>
Higher level abstraction derived from `CAsyncSocket`. It operates synchronously.

[CSocketFile](../mfc/reference/csocketfile-class.md)<br/>
Provides a `CFile` interface to a Windows Socket.

## See also

[Class Overview](../mfc/class-library-overview.md)
