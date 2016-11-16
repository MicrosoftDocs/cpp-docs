---
title: "Servers: Implementing Server Documents | Microsoft Docs"
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
  - "OLE server applications, managing server documents"
  - "OLE server applications, implementing OLE servers"
  - "servers, server documents"
  - "server documents, implementing"
ms.assetid: cca1451a-ad09-47ed-b56e-bccd78fc86d1
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
# Servers: Implementing Server Documents
This article explains the steps you must take to successfully implement a server document if you did not specify the OLE Server option in the application wizard.  
  
#### To define a server document class  
  
1.  Derive your document class from `COleServerDoc` instead of **CDocument**.  
  
2.  Create a server item class derived from `COleServerItem`.  
  
3.  Implement the `OnGetEmbeddedItem` member function of your server document class.  
  
     `OnGetEmbeddedItem` is called when the user of a container application creates or edits an embedded item. It should return an item representing the entire document. This should be an object of your `COleServerItem`-derived class.  
  
4.  Override the `Serialize` member function to serialize the contents of the document. You do not need to serialize the list of server items unless you are using them to represent the native data in your document. For more information, see *Implementing Server Items* in the article [Servers: Server Items](../mfc/servers-server-items.md).  
  
 When a server document is created, the framework automatically registers the document with the OLE system DLLs. This allows the DLLs to identify the server documents.  
  
 For more information, see [COleServerItem](../mfc/reference/coleserveritem-class.md) and [COleServerDoc](../mfc/reference/coleserverdoc-class.md) in the *Class Library Reference*.  
  
## See Also  
 [Servers](../mfc/servers.md)   
 [Servers: Server Items](../mfc/servers-server-items.md)   
 [Servers: Implementing a Server](../mfc/servers-implementing-a-server.md)   
 [Servers: Implementing In-Place Frame Windows](../mfc/servers-implementing-in-place-frame-windows.md)

