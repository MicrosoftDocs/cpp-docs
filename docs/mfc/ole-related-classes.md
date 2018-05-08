---
title: "OLE-Related Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.ole"]
dev_langs: ["C++"]
helpviewer_keywords: ["ActiveX classes [MFC]", "OLE classes [MFC]", "OLE [MFC], classes"]
ms.assetid: 2135cf54-1d9d-4e0e-91b4-943b3440effa
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OLE-Related Classes
These classes provide a number of different services, ranging from exceptions to file input and output.  
  
 [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md)  
 Used to create items when requested from other containers. This class serves as the base class for more specific types of factories, including `COleTemplateServer`.  
  
 [COleMessageFilter](../mfc/reference/colemessagefilter-class.md)  
 Used to manage concurrency with OLE Lightweight Remote Procedure Calls (LRPC).  
  
 [COleStreamFile](../mfc/reference/colestreamfile-class.md)  
 Uses the COM `IStream` interface to provide `CFile` access to compound files. This class (derived from `CFile`) enables MFC serialization to use OLE structured storage.  
  
 [CRectTracker](../mfc/reference/crecttracker-class.md)  
 Used to allow moving, resizing, and reorientation of in-place items.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

