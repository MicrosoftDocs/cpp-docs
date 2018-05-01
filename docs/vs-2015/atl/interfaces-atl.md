---
title: "Interfaces (ATL) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM interfaces"
  - "interfaces, COM"
ms.assetid: de6c8b12-6230-4fdc-af66-a28b91d5ee55
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Interfaces (ATL)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Interfaces (ATL)](https://docs.microsoft.com/cpp/atl/interfaces-atl).  
  
  
An interface is the way in which an object exposes its functionality to the outside world. In COM, an interface is a table of pointers (like a C++ vtable) to functions implemented by the object. The table represents the interface, and the functions to which it points are the methods of that interface. An object can expose as many interfaces as it chooses.  
  
 Each interface is based on the fundamental COM interface, [IUnknown](../atl/iunknown.md). The methods of **IUnknown** allow navigation to other interfaces exposed by the object.  
  
 Also, each interface is given a unique interface ID (IID). This uniqueness makes it easy to support interface versioning. A new version of an interface is simply a new interface, with a new IID.  
  
> [!NOTE]
>  IIDs for the standard COM and OLE interfaces are predefined.  
  
## See Also  
 [Introduction to COM](../atl/introduction-to-com.md)   
 [COM Objects and Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms690343)





