---
title: "ATL Collection and Enumerator Classes"
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
ms.assetid: 6818db73-7094-48d8-a0ca-18147beec362
caps.latest.revision: 8
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
# ATL Collection and Enumerator Classes
ATL provides the following classes to help you implement collections and enumerators.  
  
|Class|Description|  
|-----------|-----------------|  
|[ICollectionOnSTLImpl](../VS_visualcpp/ICollectionOnSTLImpl-Class.md)|Collection interface implementation|  
|[IEnumOnSTLImpl](../VS_visualcpp/IEnumOnSTLImpl-Class.md)|Enumerator interface implementation (assumes data stored in an STL-compatible container)|  
|[CComEnumImpl](../VS_visualcpp/CComEnumImpl-Class.md)|Enumerator interface implementation (assumes data stored in an array)|  
|[CComEnumOnSTL](../VS_visualcpp/CComEnumOnSTL-Class.md)|Enumerator object implementation (uses `IEnumOnSTLImpl`)|  
|[CComEnum](../VS_visualcpp/CComEnum-Class.md)|Enumerator object implementation (uses `CComEnumImpl`)|  
|[_Copy](../VS_visualcpp/ATL-Copy-Policy-Classes.md)|Copy policy class|  
|[_CopyInterface](../VS_visualcpp/ATL-Copy-Policy-Classes.md)|Copy policy class|  
|[CAdapt](../VS_visualcpp/CAdapt-Class.md)|Adapter class (hides **operator &** allowing `CComPtr`, `CComQIPtr`, and `CComBSTR` to be stored in STL containers)|  
  
## See Also  
 [Collections and Enumerators](../VS_visualcpp/ATL-Collections-and-Enumerators.md)