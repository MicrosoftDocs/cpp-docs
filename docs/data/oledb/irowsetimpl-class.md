---
title: "IRowsetImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetImpl class"
ms.assetid: 6a9189af-7556-45b1-adcb-9d62bb36704c
caps.latest.revision: 9
author: "mikeblome"
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
|[AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md)|Adds a reference count to an existing row handle.|  
|[CreateRow](../../data/oledb/irowsetimpl-createrow.md)|Called by [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) to allocate a new **HROW**. Not called directly by user.|  
|[GetData](../../data/oledb/irowsetimpl-getdata.md)|Retrieves data from the rowset's copy of the row.|  
|[GetDBStatus](../../data/oledb/irowsetimpl-getdbstatus.md)|Returns the status for the specified field.|  
|[GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md)|Fetches rows sequentially, remembering the previous position.|  
|[IRowsetImpl](../../data/oledb/irowsetimpl-class.md)|The constructor. Not called directly by user.|  
|[RefRows](../../data/oledb/irowsetimpl-refrows.md)|Called by [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) and [ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md). Not called directly by user.|  
|[ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md)|Releases rows.|  
|[RestartPosition](../../data/oledb/irowsetimpl-restartposition.md)|Repositions the next fetch position to its initial position; that is, its position when the rowset was first created.|  
|[SetDBStatus](../../data/oledb/irowsetimpl-setdbstatus.md)|Sets the status flags for the specified field.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_bCanFetchBack](../../data/oledb/irowsetimpl-m-bcanfetchback.md)|Indicates whether a provider supports backward fetching.|  
|[m_bCanScrollBack](../../data/oledb/irowsetimpl-m-bcanscrollback.md)|Indicates whether a provider can have its cursor scroll backwards.|  
|[m_bReset](../../data/oledb/irowsetimpl-m-breset.md)|Indicates whether a provider has reset its cursor position. This has special meaning when scrolling backwards or fetching backwards in [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md).|  
|[m_iRowset](../../data/oledb/irowsetimpl-m-irowset.md)|An index to the rowset, representing the cursor.|  
|[m_rgRowHandles](../../data/oledb/irowsetimpl-m-rgrowhandles.md)|A list of row handles.|  
  
## Remarks  
 [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) is the base rowset interface.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)