---
title: "CArrayRowset Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "ATL.CArrayRowset<TAccessor>"
  - "ATL.CArrayRowset"
  - "CArrayRowset"
  - "ATL::CArrayRowset"
  - "ATL::CArrayRowset<TAccessor>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArrayRowset class"
ms.assetid: 511427e1-73ca-4fd8-9ba1-ae9463557cb6
caps.latest.revision: 10
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
|[CArrayRowset](../data/carrayrowset--carrayrowset.md)|Constructor.|  
|[Snapshot](../data/carrayrowset--snapshot.md)|Reads the entire rowset into memory.|  
  
### Operators  
  
|||  
|-|-|  
|[Operator&#91;&#93;](../data/carrayrowset--operator.md)|Accesses an element of the rowset.|  
  
### Data Members  
  
|||  
|-|-|  
|[CArrayRowset::m_nRowsRead](../data/carrayrowset--m_nrowsread.md)|The number of rows already read.|  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)   
 [CRowset Class](../data/crowset-class.md)