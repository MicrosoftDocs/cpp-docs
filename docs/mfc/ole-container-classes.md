---
title: "OLE Container Classes | Microsoft Docs"
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
  - "ActiveX classes [C++]"
  - "container classes [C++]"
  - "OLE classes [C++]"
  - "visual editing [C++], classes"
  - "OLE [C++], classes"
  - "containers [C++], OLE container applications"
ms.assetid: 1e27e1ab-4c22-41eb-8547-6915c72668ae
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

