---
title: "Document Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.document"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "document classes"
ms.assetid: 4bf19b02-0a4f-4319-b68e-cddcba2705cb
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
# Document Classes
Document class objects, created by document-template objects, manage the application's data. You will derive a class for your documents from one of these classes.  
  
 Document class objects interact with view objects. View objects represent the client area of a window, display a document's data, and allow users to interact with it. Documents and views are created by a document-template object.  
  
 [CDocument](../mfc/reference/cdocument-class.md)  
 The base class for application-specific documents. Derive your document class or classes from **CDocument**.  
  
 [COleDocument](../mfc/reference/coledocument-class.md)  
 Used for compound document implementation, as well as basic container support. Serves as a container for classes derived from [CDocItem](../mfc/reference/cdocitem-class.md). This class can be used as the base class for container documents and is the base class for `COleServerDoc`.  
  
 [COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)  
 A class derived from `COleDocument` that provides the infrastructure for linking. You should derive the document classes for your container applications from this class instead of from `COleDocument` if you want them to support links to embedded objects.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Maintains the list of OLE client items that are in the rich edit control. Used with [CRichEditView](../mfc/reference/cricheditview-class.md) and [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).  
  
 [COleServerDoc](../mfc/reference/coleserverdoc-class.md)  
 Used as the base class for server-application document classes. `COleServerDoc` objects provide the bulk of server support through interactions with [COleServerItem](../mfc/reference/coleserveritem-class.md) objects. Visual editing capability is provided using the class library's document/view architecture.  
  
 [CHtmlEditDoc](../mfc/reference/chtmleditdoc-class.md)  
 Provides, with [CHtmlEditView](../mfc/reference/chtmleditview-class.md), the functionality of the WebBrowser HTML editing platform within the context of the MFC document-view architecture.  
  
## Related Classes  
 Document class objects can be persistent — in other words, they can write their state to a storage medium and read it back. MFC provides the `CArchive` class to facilitate transferring the document's data to a storage medium.  
  
 [CArchive](../mfc/reference/carchive-class.md)  
 Cooperates with a [CFile](../mfc/reference/cfile-class.md) object to implement persistent storage for objects through serialization (see [CObject::Serialize](../mfc/reference/cobject-class.md#cobject__serialize)).  
  
 Documents can also contain OLE objects. `CDocItem` is the base class of the server and client items.  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Abstract base class of [COleClientItem](../mfc/reference/coleclientitem-class.md) and [COleServerItem](../mfc/reference/coleserveritem-class.md). Objects of classes derived from `CDocItem` represent parts of documents.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

