---
title: "OLE Container Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.ole"]
dev_langs: ["C++"]
helpviewer_keywords: ["ActiveX classes [MFC]", "container classes [MFC]", "OLE classes [MFC]", "visual editing [MFC], classes", "OLE [MFC], classes", "containers [MFC], OLE container applications"]
ms.assetid: 1e27e1ab-4c22-41eb-8547-6915c72668ae
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OLE Container Classes
These classes are used by container applications. Both `COleLinkingDoc` and `COleDocument` manage collections of `COleClientItem` objects. Rather than deriving your document class from **CDocument**, you'll derive it from `COleLinkingDoc` or `COleDocument`, depending on whether you want support for links to objects embedded in your document.  
  
 Use a `COleClientItem` object to represent each OLE item in your document that is embedded from another document or is a link to another document.  
  
 [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)  
 Supports active document containment.  
  
 [COleDocument](../mfc/reference/coledocument-class.md)  
 Used for compound document implementation, as well as basic container support. Serves as a container for classes derived from `CDocItem`. This class can be used as the base class for container documents and is the base class for `COleServerDoc`.  
  
 [COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)  
 A class derived from `COleDocument` that provides the infrastructure for linking. You should derive the document classes for your container applications from this class instead of from `COleDocument` if you want them to support links to embedded objects.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Maintains the list of OLE client items that are in the rich edit control. Used with [CRichEditView](../mfc/reference/cricheditview-class.md) and [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Abstract base class of `COleClientItem` and `COleServerItem`. Objects of classes derived from `CDocItem` represent parts of documents.  
  
 [COleClientItem](../mfc/reference/coleclientitem-class.md)  
 A client item class that represents the client's side of the connection to an embedded or linked OLE item. Derive your client items from this class.  
  
 [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)  
 Provides client-side access to an OLE item stored in a rich edit control when used with `CRichEditView` and `CRichEditDoc`.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 An exception resulting from a failure in OLE processing. This class is used by both containers and servers.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

