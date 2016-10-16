---
title: "ATL Collection and Enumerator Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "enumerators, ATL classes"
  - "collection classes, ATL"
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
caps.latest.revision: 8
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
# ATL Collection and Enumerator Classes
ATL provides the following classes to help you implement collections and enumerators.  
  
|Class|Description|  
|-----------|-----------------|  
|[ICollectionOnSTLImpl](../atl/icollectiononstlimpl-class.md)|Collection interface implementation|  
|[IEnumOnSTLImpl](../atl/ienumonstlimpl-class.md)|Enumerator interface implementation (assumes data stored in an STL-compatible container)|  
|[CComEnumImpl](../atl/ccomenumimpl-class.md)|Enumerator interface implementation (assumes data stored in an array)|  
|[CComEnumOnSTL](../atl/ccomenumonstl-class.md)|Enumerator object implementation (uses `IEnumOnSTLImpl`)|  
|[CComEnum](../atl/ccomenum-class.md)|Enumerator object implementation (uses `CComEnumImpl`)|  
|[_Copy](../atl/atl-copy-policy-classes.md)|Copy policy class|  
|[_CopyInterface](../atl/atl-copy-policy-classes.md)|Copy policy class|  
|[CAdapt](../atl/cadapt-class.md)|Adapter class (hides **operator &** allowing `CComPtr`, `CComQIPtr`, and `CComBSTR` to be stored in STL containers)|  
  
## See Also  
 [Collections and Enumerators](../atl/atl-collections-and-enumerators.md)