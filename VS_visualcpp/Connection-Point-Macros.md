---
title: "Connection Point Macros"
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
ms.topic: reference
ms.assetid: cc3a6dd3-5538-45df-b027-1f34963c31e5
caps.latest.revision: 11
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
  
BEGIN_CONNECTION_POINT_MAP(  
x  
)  
  
```  
  
### Parameters  
 *x*  
 [in] The name of the class containing the connection points.  
  
### Remarks  
 Start your connection point map with the                         `BEGIN_CONNECTION_POINT_MAP` macro, add entries for each of your connection points with the                         [CONNECTION_POINT_ENTRY](../Topic/CONNECTION_POINT_ENTRY.md) macro, and complete the map with the                         [END_CONNECTION_POINT_MAP](../Topic/END_CONNECTION_POINT_MAP.md) macro.  
  
 For more information about connection points in ATL, see the article                         [Connection Points](../VS_visualcpp/ATL-Connection-Points.md).  
  
### Example  
 [!CODE [NVC_ATL_Windowing#101](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#101)]  
  
##  <a name="connection_point_entry"></a>  CONNECTION_POINT_ENTRY  
 Enters a connection point for the specified interface into the connection point map so that it can be accessed.  
  
```  
  
CONNECTION_POINT_ENTRY(   
iid  
 )  
  
```  
  
### Parameters  
 `iid`  
 [in] The GUID of the interface being added to the connection point map.  
  
### Remarks  
 Connection point entries in the map are used by                         [IConnectionPointContainerImpl](../VS_visualcpp/IConnectionPointContainerImpl-Class.md). The class containing the connection point map must inherit from                         `IConnectionPointContainerImpl`.  
  
 Start your connection point map with the                         [BEGIN_CONNECTION_POINT_MAP](../Topic/BEGIN_CONNECTION_POINT_MAP.md) macro, add entries for each of your connection points with the                         `CONNECTION_POINT_ENTRY` macro, and complete the map with the                         [END_CONNECTION_POINT_MAP](../Topic/END_CONNECTION_POINT_MAP.md) macro.  
  
 For more information about connection points in ATL, see the article                         [Connection Points](../VS_visualcpp/ATL-Connection-Points.md).  
  
### Example  
 [!CODE [NVC_ATL_Windowing#120](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#120)]  
  
##  <a name="end_connection_point_map"></a>  END_CONNECTION_POINT_MAP  
 Marks the end of the connection point map entries.  
  
```  
  
END_CONNECTION_POINT_MAP( )  
  
```  
  
### Remarks  
 Start your connection point map with the                         [BEGIN_CONNECTION_POINT_MAP](../Topic/BEGIN_CONNECTION_POINT_MAP.md) macro, add entries for each of your connection points with the                         [CONNECTION_POINT_ENTRY](../Topic/CONNECTION_POINT_ENTRY.md) macro, and complete the map with the                         `END_CONNECTION_POINT_MAP` macro.  
  
 For more information about connection points in ATL, see the article                         [Connection Points](../VS_visualcpp/ATL-Connection-Points.md).  
  
### Example  
 [!CODE [NVC_ATL_Windowing#128](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#128)]  
  
## See Also  
 [Macros](../VS_visualcpp/ATL-Macros.md)   
 [Connection Point Global Functions](../VS_visualcpp/Connection-Point-Global-Functions.md)