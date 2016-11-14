---
title: "Windows Sockets: Datagram Sockets | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sockets [C++], datagram"
  - "Windows Sockets [C++], bi-directional data flow"
  - "datagram sockets [C++]"
  - "Windows Sockets [C++], datagram"
  - "sockets [C++], bi-directional data flow"
ms.assetid: bec16a1c-74c0-4ff9-8c18-c2d87897d264
caps.latest.revision: 10
author: "mikeblome"
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
# Windows Sockets: Datagram Sockets
This article describes datagram sockets, one of the two Windows Socket types available. (The other type is the [stream socket](../mfc/windows-sockets-stream-sockets.md).)  
  
 Datagram sockets support a bidirectional data flow that is not guaranteed to be sequenced or unduplicated. Datagrams also are not guaranteed to be reliable; they can fail to arrive. Datagram data may arrive out of order and possibly duplicated, but record boundaries in the data are preserved, as long as the records are smaller than the receiver's internal size limit. You are responsible for managing sequencing and reliability. (Reliability tends to be good on local-area networks [LAN] but less so on wide-area networks [WAN], such as the Internet.)  
  
 Datagrams are "connectionless", that is, no explicit connection is established; you send a datagram message to a specified socket and you can receive messages from a specified socket.  
  
 An example of a datagram socket is an application that keeps system clocks on the network synchronized. This illustrates an additional capability of datagram sockets in at least some settings: broadcasting messages to a large number of network addresses.  
  
 Datagram sockets are better than stream sockets for record-oriented data. For more information about datagram sockets, see the Windows Sockets specification, available in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Windows Sockets in MFC](../mfc/windows-sockets-in-mfc.md)   
 [Windows Sockets: Background](../mfc/windows-sockets-background.md)

