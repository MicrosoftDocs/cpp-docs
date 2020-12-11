---
description: "Learn more about: Servers: Implementing Server Documents"
title: "Servers: Implementing Server Documents"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE server applications [MFC], managing server documents", "OLE server applications [MFC], implementing OLE servers", "servers, server documents", "server documents [MFC], implementing"]
ms.assetid: cca1451a-ad09-47ed-b56e-bccd78fc86d1
---
# Servers: Implementing Server Documents

This article explains the steps you must take to successfully implement a server document if you did not specify the OLE Server option in the application wizard.

#### To define a server document class

1. Derive your document class from `COleServerDoc` instead of `CDocument`.

1. Create a server item class derived from `COleServerItem`.

1. Implement the `OnGetEmbeddedItem` member function of your server document class.

   `OnGetEmbeddedItem` is called when the user of a container application creates or edits an embedded item. It should return an item representing the entire document. This should be an object of your `COleServerItem`-derived class.

1. Override the `Serialize` member function to serialize the contents of the document. You do not need to serialize the list of server items unless you are using them to represent the native data in your document. For more information, see *Implementing Server Items* in the article [Servers: Server Items](../mfc/servers-server-items.md).

When a server document is created, the framework automatically registers the document with the OLE system DLLs. This allows the DLLs to identify the server documents.

For more information, see [COleServerItem](../mfc/reference/coleserveritem-class.md) and [COleServerDoc](../mfc/reference/coleserverdoc-class.md) in the *Class Library Reference*.

## See also

[Servers](../mfc/servers.md)<br/>
[Servers: Server Items](../mfc/servers-server-items.md)<br/>
[Servers: Implementing a Server](../mfc/servers-implementing-a-server.md)<br/>
[Servers: Implementing In-Place Frame Windows](../mfc/servers-implementing-in-place-frame-windows.md)
