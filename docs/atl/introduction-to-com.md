---
title: "Introduction to COM | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "index-page "
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM"
ms.assetid: 120735d9-db71-4ad3-a730-ce576ea2354e
caps.latest.revision: 11
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
# Introduction to COM
COM is the fundamental "object model" on which ActiveX Controls and OLE are built. COM allows an object to expose its functionality to other components and to host applications. It defines both how the object exposes itself and how this exposure works across processes and across networks. COM also defines the object's life cycle.  
  
 Fundamental to COM are these concepts:  
  
-   [Interfaces](../atl/interfaces-atl.md) — the mechanism through which an object exposes its functionality.  
  
-   [IUnknown](../atl/iunknown.md) — the basic interface on which all others are based. It implements the reference counting and interface querying mechanisms running through COM.  
  
-   [Reference counting](../atl/reference-counting.md) — the technique by which an object (or, strictly, an interface) decides when it is no longer being used and is therefore free to remove itself.  
  
-   [QueryInterface](../atl/queryinterface.md) — the method used to query an object for a given interface.  
  
-   [Marshaling](../atl/marshaling.md) — the mechanism that enables objects to be used across thread, process, and network boundaries, allowing for location independence.  
  
-   [Aggregation](../atl/aggregation.md) — a way in which one object can make use of another.  
  
## See Also  
 [Introduction to COM and ATL](../atl/introduction-to-com-and-atl.md)   
 [The Component Object Model](http://msdn.microsoft.com/library/windows/desktop/ms694363)

