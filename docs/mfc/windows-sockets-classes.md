---
title: "Windows Sockets Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc.classes.net"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sockets classes"
  - "Windows Sockets [C++], classes"
ms.assetid: 58b9ab8d-9e44-4db3-8265-e04e713d2e9a
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Windows Sockets Classes
Windows Sockets provide a network protocol-independent way to communicate between two computers. These sockets can be synchronous (your program waits until the communication is done) or asynchronous (your program continues running while the communication is going on).  
  
 [CAsyncSocket](../mfcref/casyncsocket-class.md)  
 Encapsulates the Windows Sockets API in a thin wrapper.  
  
 [CSocket](../mfcref/csocket-class.md)  
 Higher level abstraction derived from `CAsyncSocket`. It operates synchronously.  
  
 [CSocketFile](../mfcref/csocketfile-class.md)  
 Provides a `CFile` interface to a Windows Socket.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)