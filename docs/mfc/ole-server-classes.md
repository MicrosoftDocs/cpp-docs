---
title: "OLE Server Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE server applications, server classes"
  - "OLE server documents"
  - "COM components, classes"
  - "component classes"
ms.assetid: 8e9b67a2-c0ff-479c-a8d6-19b36c5e6fc6
caps.latest.revision: 9
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
# OLE Server Classes
These classes are used by server applications. Server documents are derived from `COleServerDoc` rather than from **CDocument**. Note that because `COleServerDoc` is derived from `COleLinkingDoc`, server documents can also be containers that support linking.  
  
 The `COleServerItem` class represents a document or portion of a document that can be embedded in another document or linked to.  
  
 `COleIPFrameWnd` and `COleResizeBar` support in-place editing while the object is in a container, and `COleTemplateServer` supports creation of document/view pairs so OLE objects from other applications can be edited.  
  
 [COleServerDoc](../mfc/reference/coleserverdoc-class.md)  
 Used as the base class for server-application document classes. `COleServerDoc` objects provide the bulk of server support through interactions with `COleServerItem` objects. Visual editing capability is provided using the class library's document/view architecture.  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Abstract base class of `COleClientItem` and `COleServerItem`. Objects of classes derived from `CDocItem` represent parts of documents.  
  
 [COleServerItem](../mfc/reference/coleserveritem-class.md)  
 Used to represent the OLE interface to `COleServerDoc` items. There is usually one `COleServerDoc` object, which represents the embedded part of a document. In servers that support links to parts of documents, there can be many `COleServerItem` objects, each of which represents a link to a portion of the document.  
  
 [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)  
 Provides the frame window for a view when a server document is being edited in place.  
  
 [COleResizeBar](../mfc/reference/coleresizebar-class.md)  
 Provides the standard user interface for in-place resizing. Objects of this class are always used in conjunction with `COleIPFrameWnd` objects.  
  
 [COleTemplateServer](../mfc/reference/coletemplateserver-class.md)  
 Used to create documents using the framework's document/view architecture. A `COleTemplateServer` object delegates most of its work to an associated `CDocTemplate` object.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 An exception resulting from a failure in OLE processing. This class is used by both containers and servers.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

