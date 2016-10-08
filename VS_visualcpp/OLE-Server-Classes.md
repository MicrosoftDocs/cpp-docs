---
title: "OLE Server Classes"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 8e9b67a2-c0ff-479c-a8d6-19b36c5e6fc6
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# OLE Server Classes
These classes are used by server applications. Server documents are derived from `COleServerDoc` rather than from **CDocument**. Note that because `COleServerDoc` is derived from `COleLinkingDoc`, server documents can also be containers that support linking.  
  
 The `COleServerItem` class represents a document or portion of a document that can be embedded in another document or linked to.  
  
 `COleIPFrameWnd` and `COleResizeBar` support in-place editing while the object is in a container, and `COleTemplateServer` supports creation of document/view pairs so OLE objects from other applications can be edited.  
  
 [COleServerDoc](../VS_visualcpp/COleServerDoc-Class.md)  
 Used as the base class for server-application document classes. `COleServerDoc` objects provide the bulk of server support through interactions with `COleServerItem` objects. Visual editing capability is provided using the class library's document/view architecture.  
  
 [CDocItem](../VS_visualcpp/CDocItem-Class.md)  
 Abstract base class of `COleClientItem` and `COleServerItem`. Objects of classes derived from `CDocItem` represent parts of documents.  
  
 [COleServerItem](../VS_visualcpp/COleServerItem-Class.md)  
 Used to represent the OLE interface to `COleServerDoc` items. There is usually one `COleServerDoc` object, which represents the embedded part of a document. In servers that support links to parts of documents, there can be many `COleServerItem` objects, each of which represents a link to a portion of the document.  
  
 [COleIPFrameWnd](../VS_visualcpp/COleIPFrameWnd-Class.md)  
 Provides the frame window for a view when a server document is being edited in place.  
  
 [COleResizeBar](../VS_visualcpp/COleResizeBar-Class.md)  
 Provides the standard user interface for in-place resizing. Objects of this class are always used in conjunction with `COleIPFrameWnd` objects.  
  
 [COleTemplateServer](../VS_visualcpp/COleTemplateServer-Class.md)  
 Used to create documents using the framework's document/view architecture. A `COleTemplateServer` object delegates most of its work to an associated `CDocTemplate` object.  
  
 [COleException](../VS_visualcpp/COleException-Class.md)  
 An exception resulting from a failure in OLE processing. This class is used by both containers and servers.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)