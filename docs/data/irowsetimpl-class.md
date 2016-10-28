---
title: "IRowsetImpl Class"
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
  - "IRowsetImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetImpl class"
ms.assetid: 6a9189af-7556-45b1-adcb-9d62bb36704c
caps.latest.revision: 9
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
# IRowsetImpl Class
Provides an implementation of the `IRowset` interface.  
  
## Syntax  
  
```  
template <  
   class T,   
   class RowsetInterface,  
   class RowClass = CSimpleRow,  
   class MapClass = CAtlMap <  
      RowClass::KeyType,  
      RowClass*   
   >  
>  
class ATL_NO_VTABLE IRowsetImpl : public RowsetInterface  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IRowsetImpl`.  
  
 `RowsetInterface`  
 A class derived from `IRowsetImpl`.  
  
 `RowClass`  
 Storage unit for the **HROW**.  
  
 `MapClass`  
 Storage unit for all row handles held by the provider.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddRefRows](../data/irowsetimpl--addrefrows.md)|Adds a reference count to an existing row handle.|  
|[CreateRow](../data/irowsetimpl--createrow.md)|Called by [GetNextRows](../data/irowsetimpl--getnextrows.md) to allocate a new **HROW**. Not called directly by user.|  
|[GetData](../data/irowsetimpl--getdata.md)|Retrieves data from the rowset's copy of the row.|  
|[GetDBStatus](../data/irowsetimpl--getdbstatus.md)|Returns the status for the specified field.|  
|[GetNextRows](../data/irowsetimpl--getnextrows.md)|Fetches rows sequentially, remembering the previous position.|  
|[IRowsetImpl](../data/irowsetimpl-class.md)|The constructor. Not called directly by user.|  
|[RefRows](../data/irowsetimpl--refrows.md)|Called by [AddRefRows](../data/irowsetimpl--addrefrows.md) and [ReleaseRows](../data/irowsetimpl--releaserows.md). Not called directly by user.|  
|[ReleaseRows](../data/irowsetimpl--releaserows.md)|Releases rows.|  
|[RestartPosition](../data/irowsetimpl--restartposition.md)|Repositions the next fetch position to its initial position; that is, its position when the rowset was first created.|  
|[SetDBStatus](../data/irowsetimpl--setdbstatus.md)|Sets the status flags for the specified field.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_bCanFetchBack](../data/irowsetimpl--m_bcanfetchback.md)|Indicates whether a provider supports backward fetching.|  
|[m_bCanScrollBack](../data/irowsetimpl--m_bcanscrollback.md)|Indicates whether a provider can have its cursor scroll backwards.|  
|[m_bReset](../data/irowsetimpl--m_breset.md)|Indicates whether a provider has reset its cursor position. This has special meaning when scrolling backwards or fetching backwards in [GetNextRows](../data/irowsetimpl--getnextrows.md).|  
|[m_iRowset](../data/irowsetimpl--m_irowset.md)|An index to the rowset, representing the cursor.|  
|[m_rgRowHandles](../data/irowsetimpl--m_rgrowhandles.md)|A list of row handles.|  
  
## Remarks  
 [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) is the base rowset interface.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)