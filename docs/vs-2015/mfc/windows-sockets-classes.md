---
title: "Windows Sockets Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.net"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sockets classes"
  - "Windows Sockets [C++], classes"
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Sockets Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Windows Sockets Classes](https://docs.microsoft.com/cpp/mfc/windows-sockets-classes).  
  
  
Windows Sockets provide a network protocol-independent way to communicate between two computers. These sockets can be synchronous (your program waits until the communication is done) or asynchronous (your program continues running while the communication is going on).  
  
 [CAsyncSocket](../mfc/reference/casyncsocket-class.md)  
 Encapsulates the Windows Sockets API in a thin wrapper.  
  
 [CSocket](../mfc/reference/csocket-class.md)  
 Higher level abstraction derived from `CAsyncSocket`. It operates synchronously.  
  
 [CSocketFile](../mfc/reference/csocketfile-class.md)  
 Provides a `CFile` interface to a Windows Socket.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)





