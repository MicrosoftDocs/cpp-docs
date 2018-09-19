---
title: "Windows Sockets Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.net"]
dev_langs: ["C++"]
helpviewer_keywords: ["sockets classes [MFC]", "Windows Sockets [MFC], classes"]
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Windows Sockets Classes

Windows Sockets provide a network protocol-independent way to communicate between two computers. These sockets can be synchronous (your program waits until the communication is done) or asynchronous (your program continues running while the communication is going on).

[CAsyncSocket](../mfc/reference/casyncsocket-class.md)<br/>
Encapsulates the Windows Sockets API in a thin wrapper.

[CSocket](../mfc/reference/csocket-class.md)<br/>
Higher level abstraction derived from `CAsyncSocket`. It operates synchronously.

[CSocketFile](../mfc/reference/csocketfile-class.md)<br/>
Provides a `CFile` interface to a Windows Socket.

## See Also

[Class Overview](../mfc/class-library-overview.md)

