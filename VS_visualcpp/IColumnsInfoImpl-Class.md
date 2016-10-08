---
title: "IColumnsInfoImpl Class"
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
ms.assetid: ba74c1c5-2eda-4452-8b57-84919fa0d066
caps.latest.revision: 9
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
# IColumnsInfoImpl Class
Provides an implementation of the [IColumnsInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx) interface.  
  
## Syntax  
  
```  
template <class T>  
class ATL_NO_VTABLE IColumnsInfoImpl :   
   public IColumnsInfo,    
   public CDBIDOps  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IColumnsInfoImpl`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetColumnInfo](../VS_visualcpp/IColumnsInfoImpl--GetColumnInfo.md)|Returns the column metadata needed by most consumers.|  
|[MapColumnIDs](../VS_visualcpp/IColumnsInfoImpl--MapColumnIDs.md)|Returns an array of ordinals of the columns in a rowset that are identified by the specified column IDs.|  
  
## Remarks  
 A mandatory interface on rowsets and commands. To modify the behavior of your provider's `IColumnsInfo` implementation, you need to modify the provider column map.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)