---
description: "Learn more about: OLE Container Classes"
title: "OLE Container Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["ActiveX classes [MFC]", "container classes [MFC]", "OLE classes [MFC]", "visual editing [MFC], classes", "OLE [MFC], classes", "containers [MFC], OLE container applications"]
ms.assetid: 1e27e1ab-4c22-41eb-8547-6915c72668ae
---
# OLE Container Classes

These classes are used by container applications. Both `COleLinkingDoc` and `COleDocument` manage collections of `COleClientItem` objects. Rather than deriving your document class from `CDocument`, you'll derive it from `COleLinkingDoc` or `COleDocument`, depending on whether you want support for links to objects embedded in your document.

Use a `COleClientItem` object to represent each OLE item in your document that is embedded from another document or is a link to another document.

[COleDocObjectItem](reference/coledocobjectitem-class.md)<br/>
Supports active document containment.

[COleDocument](reference/coledocument-class.md)<br/>
Used for compound document implementation, as well as basic container support. Serves as a container for classes derived from `CDocItem`. This class can be used as the base class for container documents and is the base class for `COleServerDoc`.

[COleLinkingDoc](reference/colelinkingdoc-class.md)<br/>
A class derived from `COleDocument` that provides the infrastructure for linking. You should derive the document classes for your container applications from this class instead of from `COleDocument` if you want them to support links to embedded objects.

[CRichEditDoc](reference/cricheditdoc-class.md)<br/>
Maintains the list of OLE client items that are in the rich edit control. Used with [CRichEditView](reference/cricheditview-class.md) and [CRichEditCntrItem](reference/cricheditcntritem-class.md).

[CDocItem](reference/cdocitem-class.md)<br/>
Abstract base class of `COleClientItem` and `COleServerItem`. Objects of classes derived from `CDocItem` represent parts of documents.

[COleClientItem](reference/coleclientitem-class.md)<br/>
A client item class that represents the client's side of the connection to an embedded or linked OLE item. Derive your client items from this class.

[CRichEditCntrItem](reference/cricheditcntritem-class.md)<br/>
Provides client-side access to an OLE item stored in a rich edit control when used with `CRichEditView` and `CRichEditDoc`.

[COleException](reference/coleexception-class.md)<br/>
An exception resulting from a failure in OLE processing. This class is used by both containers and servers.

## See also

[Class Overview](class-library-overview.md)
