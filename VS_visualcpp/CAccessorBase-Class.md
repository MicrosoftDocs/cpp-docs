---
title: "CAccessorBase Class"
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
ms.assetid: 389b65be-11ca-4ae0-9290-60c621c4982b
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
# CAccessorBase Class
All accessors in the OLE DB Templates derive from this class. `CAccessorBase` allows one rowset to manage multiple accessors. It also provides binding for both parameters and output columns.  
  
## Syntax  
  
```  
// Replace with syntax  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Close](../VS_visualcpp/CAccessorBase--Close.md)|Closes the accessors.|  
|[GetHAccessor](../VS_visualcpp/CAccessorBase--GetHAccessor.md)|Retrieves the accessor handle.|  
|[GetNumAccessors](../VS_visualcpp/CAccessorBase--GetNumAccessors.md)|Retrieves the number of accessors created by the class.|  
|[IsAutoAccessor](../VS_visualcpp/CAccessorBase--IsAutoAccessor.md)|Tests whether the specified accessor is an autoaccessor.|  
|[ReleaseAccessors](../VS_visualcpp/CAccessorBase--ReleaseAccessors.md)|Releases the accessors.|  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)