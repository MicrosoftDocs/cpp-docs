---
title: "Connection Point Macros | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connection points [C++], macros"
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Connection Point Macros
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Connection Point Macros](https://docs.microsoft.com/cpp/atl/reference/connection-point-macros).  
  
  
These macros define connection point maps and entries.  
  
|||  
|-|-|  
|[BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map)|Marks the beginning of the connection point map entries.|  
|[CONNECTION_POINT_ENTRY](#connection_point_entry)|Enters connection points into the map.|  
|[END_CONNECTION_POINT_MAP](#end_connection_point_map)|Marks the end of the connection point map entries.|  
  
##  <a name="begin_connection_point_map"></a>  BEGIN_CONNECTION_POINT_MAP  
 Marks the beginning of the connection point map entries.  
  
```
BEGIN_CONNECTION_POINT_MAP(x)
```  
  
### Parameters  
 *x*  
 [in] The name of the class containing the connection points.  
  
### Remarks  
 Start your connection point map with the `BEGIN_CONNECTION_POINT_MAP` macro, add entries for each of your connection points with the [CONNECTION_POINT_ENTRY](#connection_point_entry) macro, and complete the map with the [END_CONNECTION_POINT_MAP](#end_connection_point_map) macro.  
  
 For more information about connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#101](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/PolyCtl.h#101)]  
  
##  <a name="connection_point_entry"></a>  CONNECTION_POINT_ENTRY  
 Enters a connection point for the specified interface into the connection point map so that it can be accessed.  
  
```
CONNECTION_POINT_ENTRY(iid)
```  
  
### Parameters  
 `iid`  
 [in] The GUID of the interface being added to the connection point map.  
  
### Remarks  
 Connection point entries in the map are used by [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md). The class containing the connection point map must inherit from `IConnectionPointContainerImpl`.  
  
 Start your connection point map with the [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) macro, add entries for each of your connection points with the `CONNECTION_POINT_ENTRY` macro, and complete the map with the [END_CONNECTION_POINT_MAP](#end_connection_point_map) macro.  
  
 For more information about connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#120](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/Connect2.h#120)]  
  
##  <a name="end_connection_point_map"></a>  END_CONNECTION_POINT_MAP  
 Marks the end of the connection point map entries.  
  
```
END_CONNECTION_POINT_MAP()
```  
  
### Remarks  
 Start your connection point map with the [BEGIN_CONNECTION_POINT_MAP](#begin_connection_point_map) macro, add entries for each of your connection points with the [CONNECTION_POINT_ENTRY](#connection_point_entry) macro, and complete the map with the `END_CONNECTION_POINT_MAP` macro.  
  
 For more information about connection points in ATL, see the article [Connection Points](../../atl/atl-connection-points.md).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#128](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyComponent.h#128)]  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)   
 [Connection Point Global Functions](../../atl/reference/connection-point-global-functions.md)






