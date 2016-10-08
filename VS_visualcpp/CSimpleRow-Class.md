---
title: "CSimpleRow Class"
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
ms.assetid: 06d9621d-60cc-4508-8b0c-528d1b1a809b
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
# CSimpleRow Class
Provides a default implementation for the row handle, which is used in the [IRowsetImpl](../VS_visualcpp/IRowsetImpl-Class.md) class.  
  
## Syntax  
  
```  
class CSimpleRow  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddRefRow](../VS_visualcpp/CSimpleRow--AddRefRow.md)|Adds a reference count to an existing row handle.|  
|[Compare](../VS_visualcpp/CSimpleRow--Compare.md)|Compares two rows to see if they refer to the same row instance.|  
|[CSimpleRow](../VS_visualcpp/CSimpleRow--CSimpleRow.md)|The constructor.|  
|[ReleaseRow](../VS_visualcpp/CSimpleRow--ReleaseRow.md)|Releases rows.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_dwRef](../VS_visualcpp/CSimpleRow--m_dwRef.md)|Reference count to an existing row handle.|  
|[m_iRowset](../VS_visualcpp/CSimpleRow--m_iRowset.md)|An index to the rowset representing the cursor.|  
  
## Remarks  
 A row handle is logically a unique tag for a result row. `IRowsetImpl` creates a new `CSimpleRow` for every row requested in [IRowsetImpl::GetNextRows](../VS_visualcpp/IRowsetImpl--GetNextRows.md). `CSimpleRow` can also be replaced with your own implementation of the row handle, as it is a default template argument to `IRowsetImpl`. The only requirement to replacing this class is to have the replacement class provide a constructor that accepts a single parameter of type **LONG**.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)   
 [IRowsetImpl Class](../VS_visualcpp/IRowsetImpl-Class.md)