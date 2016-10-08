---
title: "Document Classes"
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
ms.assetid: 4bf19b02-0a4f-4319-b68e-cddcba2705cb
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
# Document Classes
Document class objects, created by document-template objects, manage the application's data. You will derive a class for your documents from one of these classes.  
  
 Document class objects interact with view objects. View objects represent the client area of a window, display a document's data, and allow users to interact with it. Documents and views are created by a document-template object.  
  
 [CDocument](../VS_visualcpp/CDocument-Class.md)  
 The base class for application-specific documents. Derive your document class or classes from **CDocument**.  
  
 [COleDocument](../VS_visualcpp/COleDocument-Class.md)  
 Used for compound document implementation, as well as basic container support. Serves as a container for classes derived from [CDocItem](../VS_visualcpp/CDocItem-Class.md). This class can be used as the base class for container documents and is the base class for `COleServerDoc`.  
  
 [COleLinkingDoc](../VS_visualcpp/COleLinkingDoc-Class.md)  
 A class derived from `COleDocument` that provides the infrastructure for linking. You should derive the document classes for your container applications from this class instead of from `COleDocument` if you want them to support links to embedded objects.  
  
 [CRichEditDoc](../VS_visualcpp/CRichEditDoc-Class.md)  
 Maintains the list of OLE client items that are in the rich edit control. Used with [CRichEditView](../VS_visualcpp/CRichEditView-Class.md) and [CRichEditCntrItem](../VS_visualcpp/CRichEditCntrItem-Class.md).  
  
 [COleServerDoc](../VS_visualcpp/COleServerDoc-Class.md)  
 Used as the base class for server-application document classes. `COleServerDoc` objects provide the bulk of server support through interactions with [COleServerItem](../VS_visualcpp/COleServerItem-Class.md) objects. Visual editing capability is provided using the class library's document/view architecture.  
  
 [CHtmlEditDoc](../VS_visualcpp/CHtmlEditDoc-Class.md)  
 Provides, with [CHtmlEditView](../VS_visualcpp/CHtmlEditView-Class.md), the functionality of the WebBrowser HTML editing platform within the context of the MFC document-view architecture.  
  
## Related Classes  
 Document class objects can be persistent — in other words, they can write their state to a storage medium and read it back. MFC provides the `CArchive` class to facilitate transferring the document's data to a storage medium.  
  
 [CArchive](../VS_visualcpp/CArchive-Class.md)  
 Cooperates with a [CFile](../VS_visualcpp/CFile-Class.md) object to implement persistent storage for objects through serialization (see [CObject::Serialize](../Topic/CObject::Serialize.md)).  
  
 Documents can also contain OLE objects. `CDocItem` is the base class of the server and client items.  
  
 [CDocItem](../VS_visualcpp/CDocItem-Class.md)  
 Abstract base class of [COleClientItem](../VS_visualcpp/COleClientItem-Class.md) and [COleServerItem](../VS_visualcpp/COleServerItem-Class.md). Objects of classes derived from `CDocItem` represent parts of documents.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)