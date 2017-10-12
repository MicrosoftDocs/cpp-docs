---
title: "ATL Collection and Enumerator Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["enumerators, ATL classes", "collection classes, ATL"]
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Collection and Enumerator Classes
ATL provides the following classes to help you implement collections and enumerators.  
  
|Class|Description|  
|-----------|-----------------|  
|[ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)|Collection interface implementation|  
|[IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)|Enumerator interface implementation (assumes data stored in a C++ Standard Library-compatible container)|  
|[CComEnumImpl](../atl/reference/ccomenumimpl-class.md)|Enumerator interface implementation (assumes data stored in an array)|  
|[CComEnumOnSTL](../atl/reference/ccomenumonstl-class.md)|Enumerator object implementation (uses `IEnumOnSTLImpl`)|  
|[CComEnum](../atl/reference/ccomenum-class.md)|Enumerator object implementation (uses `CComEnumImpl`)|  
|[_Copy](../atl/atl-copy-policy-classes.md)|Copy policy class|  
|[_CopyInterface](../atl/atl-copy-policy-classes.md)|Copy policy class|  
|[CAdapt](../atl/reference/cadapt-class.md)|Adapter class (hides **operator &** allowing `CComPtr`, `CComQIPtr`, and `CComBSTR` to be stored in C++ Standard Library containers)|  
  
## See Also  
 [Collections and Enumerators](../atl/atl-collections-and-enumerators.md)

