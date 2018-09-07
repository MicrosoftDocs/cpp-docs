---
title: "OLE Automation Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
f1_keywords: ["vc.classes.ole"]
dev_langs: ["C++"]
helpviewer_keywords: ["Automation, classes", "Automation classes [MFC], OLE classes", "OLE Automation [MFC], classes", "Automation classes [MFC]", "OLE Automation [MFC]"]
ms.assetid: 96e5372b-ff8a-4da1-933b-4d9bbf4dceb3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OLE Automation Classes
These classes support automation clients (applications that control other applications). Automation servers (applications that can be controlled by other applications) are supported through [dispatch maps](../mfc/reference/dispatch-maps.md).  
  
 [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md)  
 Used to call automation servers from your automation client. When adding a class, this class is used to create type-safe classes for automation servers that provide a type library.  
  
 [COleDispatchException](../mfc/reference/coledispatchexception-class.md)  
 An exception resulting from an error during OLE automation. Automation exceptions are thrown by automation servers and caught by automation clients.  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

