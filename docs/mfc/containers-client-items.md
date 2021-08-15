---
description: "Learn more about: Containers: Client Items"
title: "Containers: Client Items"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE containers [MFC], client items", "client items and OLE containers"]
ms.assetid: 231528b5-0744-4f83-8897-083bf55ed087
---
# Containers: Client Items

This article explains what client items are and from what classes your application should derive its client items.

Client items are data items belonging to another application that are either contained in or referenced by an OLE container application's document. Client items whose data is contained within the document are embedded; those whose data is stored in another location referenced by the container document are linked.

The document class in an OLE application is derived from the class [COleDocument](reference/coledocument-class.md) rather than from `CDocument`. The `COleDocument` class inherits from `CDocument` all the functionality necessary for using the document/view architecture on which MFC applications are based. `COleDocument` also defines an interface that treats a document as a collection of `CDocItem` objects. Several `COleDocument` member functions are provided for adding, retrieving, and deleting elements of that collection.

Every container application should derive at least one class from `COleClientItem`. Objects of this class represent items, embedded or linked, in the OLE document. These objects exist for the life of the document containing them, unless they are deleted from the document.

`CDocItem` is the base class for `COleClientItem` and `COleServerItem`. Objects of classes derived from these two act as intermediaries between the OLE item and the client and server applications, respectively. Each time a new OLE item is added to the document, the MFC framework adds a new object of your client application's `COleClientItem`-derived class to the document's collection of `CDocItem` objects.

## See also

[Containers](containers.md)<br/>
[Containers: Compound Files](containers-compound-files.md)<br/>
[Containers: User-Interface Issues](containers-user-interface-issues.md)<br/>
[Containers: Advanced Features](containers-advanced-features.md)<br/>
[COleClientItem Class](reference/coleclientitem-class.md)<br/>
[COleServerItem Class](reference/coleserveritem-class.md)
