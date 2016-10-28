---
title: "Connection Point Macros"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connection points [C++], macros"
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
caps.latest.revision: 12
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
# Connection Point Macros
These macros define connection point maps and entries.  
  
|||  
|-|-|  
|[BEGIN_CONNECTION_POINT_MAP](../Topic/BEGIN_CONNECTION_POINT_MAP.md)|Marks the beginning of the connection point map entries.|  
|[CONNECTION_POINT_ENTRY](../Topic/CONNECTION_POINT_ENTRY.md)|Enters connection points into the map.|  
|[END_CONNECTION_POINT_MAP](../Topic/END_CONNECTION_POINT_MAP.md)|Marks the end of the connection point map entries.|  
  
##  <a name="begin_connection_point_map"></a>  BEGIN_CONNECTION_POINT_MAP  
 Marks the beginning of the connection point map entries.  
  
```
BEGIN_CONNECTION_POINT_MAP(x)
```  
  
### Parameters  
 *x*  
 [in] The name of the class containing the connection points.  
  
### Remarks  
 Start your connection point map with the `BEGIN_CONNECTION_POINT_MAP` macro, add entries for each of your connection points with the [CONNECTION_POINT_ENTRY](../Topic/CONNECTION_POINT_ENTRY.md) macro, and complete the map with the [END_CONNECTION_POINT_MAP](../Topic/END_CONNECTION_POINT_MAP.md) macro.  
  
 For more information about connection points in ATL, see the article [Connection Points](../atl/atl-connection-points.md).  
  
### Example  
 [!code[NVC_ATL_Windowing#101](../atl/codesnippet/CPP/connection-point-macros_1.h)]  
  
##  <a name="connection_point_entry"></a>  CONNECTION_POINT_ENTRY  
 Enters a connection point for the specified interface into the connection point map so that it can be accessed.  
  
```
CONNECTION_POINT_ENTRY(iid)
```  
  
### Parameters  
 `iid`  
 [in] The GUID of the interface being added to the connection point map.  
  
### Remarks  
 Connection point entries in the map are used by [IConnectionPointContainerImpl](../atl/iconnectionpointcontainerimpl-class.md). The class containing the connection point map must inherit from `IConnectionPointContainerImpl`.  
  
 Start your connection point map with the [BEGIN_CONNECTION_POINT_MAP](../Topic/BEGIN_CONNECTION_POINT_MAP.md) macro, add entries for each of your connection points with the `CONNECTION_POINT_ENTRY` macro, and complete the map with the [END_CONNECTION_POINT_MAP](../Topic/END_CONNECTION_POINT_MAP.md) macro.  
  
 For more information about connection points in ATL, see the article [Connection Points](../atl/atl-connection-points.md).  
  
### Example  
 [!code[NVC_ATL_Windowing#120](../atl/codesnippet/CPP/connection-point-macros_2.h)]  
  
##  <a name="end_connection_point_map"></a>  END_CONNECTION_POINT_MAP  
 Marks the end of the connection point map entries.  
  
```
END_CONNECTION_POINT_MAP()
```  
  
### Remarks  
 Start your connection point map with the [BEGIN_CONNECTION_POINT_MAP](../Topic/BEGIN_CONNECTION_POINT_MAP.md) macro, add entries for each of your connection points with the [CONNECTION_POINT_ENTRY](../Topic/CONNECTION_POINT_ENTRY.md) macro, and complete the map with the `END_CONNECTION_POINT_MAP` macro.  
  
 For more information about connection points in ATL, see the article [Connection Points](../atl/atl-connection-points.md).  
  
### Example  
 [!code[NVC_ATL_Windowing#128](../atl/codesnippet/CPP/connection-point-macros_3.h)]  
  
## See Also  
 [Macros](../atl/atl-macros.md)   
 [Connection Point Global Functions](../atl/connection-point-global-functions.md)

