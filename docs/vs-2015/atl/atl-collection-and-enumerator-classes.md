---
title: "ATL Collection and Enumerator Classes | Microsoft Docs"
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
  - "enumerators, ATL classes"
  - "collection classes, ATL"
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Collection and Enumerator Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ATL Collection and Enumerator Classes](https://docs.microsoft.com/cpp/atl/atl-collection-and-enumerator-classes).  
  
  
ATL provides the following classes to help you implement collections and enumerators.  
  
|Class|Description|  
|-----------|-----------------|  
|[ICollectionOnSTLImpl](../atl/reference/icollectiononstlimpl-class.md)|Collection interface implementation|  
|[IEnumOnSTLImpl](../atl/reference/ienumonstlimpl-class.md)|Enumerator interface implementation (assumes data stored in an STL-compatible container)|  
|[CComEnumImpl](../atl/reference/ccomenumimpl-class.md)|Enumerator interface implementation (assumes data stored in an array)|  
|[CComEnumOnSTL](../atl/reference/ccomenumonstl-class.md)|Enumerator object implementation (uses `IEnumOnSTLImpl`)|  
|[CComEnum](../atl/reference/ccomenum-class.md)|Enumerator object implementation (uses `CComEnumImpl`)|  
|[_Copy](../atl/atl-copy-policy-classes.md)|Copy policy class|  
|[_CopyInterface](../atl/atl-copy-policy-classes.md)|Copy policy class|  
|[CAdapt](../atl/reference/cadapt-class.md)|Adapter class (hides **operator &** allowing `CComPtr`, `CComQIPtr`, and `CComBSTR` to be stored in STL containers)|  
  
## See Also  
 [Collections and Enumerators](../atl/atl-collections-and-enumerators.md)





