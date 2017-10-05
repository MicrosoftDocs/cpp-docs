---
title: "OLE Background: Containers and Servers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["OLE full-server applications [MFC]", "server applications [MFC], communication with containers", "full-server [MFC]", "server applications [MFC], requirements", "server applications [MFC], defined", "OLE server applications [MFC], about server applications", "server applications [MFC], full-server vs. mini-server", "OLE server applications [MFC], mini-server applications", "OLE containers [MFC], container applications", "containers [MFC], OLE container applications", "server applications [MFC]"]
ms.assetid: dafbb31d-096c-4654-b774-12900d832919
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# OLE Background: Containers and Servers
A container application is an application that can incorporate embedded or linked items into its own documents. The documents managed by a container application must be able to store and display OLE document components as well as the data created by the application itself. A container application must also allow users to insert new items or edit existing items by activating server applications when necessary. The user-interface requirements of a container application are listed in the article [Containers: User-Interface Issues](../mfc/containers-user-interface-issues.md).  
  
 A server application or component application is an application that can create OLE document components for use by container applications. Server applications usually support drag and drop or copying their data to the Clipboard so that a container application can insert the data as an embedded or linked item. An application can be both a container and a server.  
  
 Most servers are stand-alone applications or full servers; they can either be run as stand-alone applications or can be launched by a container application. A miniserver is a special type of server application that can be launched only by a container. It cannot be run as a stand-alone application. Microsoft Draw and Microsoft Graph servers are examples of miniservers.  
  
 Containers and servers do not communicate directly. Instead, they communicate through the OLE system dynamic-link libraries (DLL). These DLLs provide functions that containers and servers call, and the containers and servers provide callback functions that the DLLs call.  
  
 Using this means of communication, a container does not need to know the implementation details of the server application. It allows a container to accept items created by any server without having to define the types of servers with which it can work. As a result, the user of a container application can take advantage of future applications and data formats. If these new applications are OLE components, then a compound document will be able to incorporate items created by those applications.  
  
## See Also  
 [OLE Background](../mfc/ole-background.md)   
 [OLE Background: MFC Implementation](../mfc/ole-background-mfc-implementation.md)   
 [Containers](../mfc/containers.md)   
 [Servers](../mfc/servers.md)   
 [Containers: Client Items](../mfc/containers-client-items.md)   
 [Servers: Server Items](../mfc/servers-server-items.md)

