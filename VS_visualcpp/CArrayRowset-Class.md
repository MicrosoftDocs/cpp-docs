---
title: "CArrayRowset Class"
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
ms.assetid: 511427e1-73ca-4fd8-9ba1-ae9463557cb6
caps.latest.revision: 10
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
# CArrayRowset Class
Accesses elements of a rowset using array syntax.  
  
## Syntax  
  
```  
template < class TAccessor >  
class CArrayRowset :   
   public CVirtualBuffer <TAccessor>,   
   protected CBulkRowset <TAccessor>  
```  
  
#### Parameters  
 `TAccessor`  
 The type of accessor class that you want the rowset to use.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CArrayRowset](../VS_visualcpp/CArrayRowset--CArrayRowset.md)|Constructor.|  
|[Snapshot](../VS_visualcpp/CArrayRowset--Snapshot.md)|Reads the entire rowset into memory.|  
  
### Operators  
  
|||  
|-|-|  
|[Operator&#91;&#93;](../VS_visualcpp/CArrayRowset--operator.md)|Accesses an element of the rowset.|  
  
### Data Members  
  
|||  
|-|-|  
|[CArrayRowset::m_nRowsRead](../VS_visualcpp/CArrayRowset--m_nRowsRead.md)|The number of rows already read.|  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)   
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)