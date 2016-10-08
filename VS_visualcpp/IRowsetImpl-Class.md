---
title: "IRowsetImpl Class"
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
ms.assetid: 6a9189af-7556-45b1-adcb-9d62bb36704c
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
|[AddRefRows](../VS_visualcpp/IRowsetImpl--AddRefRows.md)|Adds a reference count to an existing row handle.|  
|[CreateRow](../VS_visualcpp/IRowsetImpl--CreateRow.md)|Called by [GetNextRows](../VS_visualcpp/IRowsetImpl--GetNextRows.md) to allocate a new **HROW**. Not called directly by user.|  
|[GetData](../VS_visualcpp/IRowsetImpl--GetData.md)|Retrieves data from the rowset's copy of the row.|  
|[GetDBStatus](../VS_visualcpp/IRowsetImpl--GetDBStatus.md)|Returns the status for the specified field.|  
|[GetNextRows](../VS_visualcpp/IRowsetImpl--GetNextRows.md)|Fetches rows sequentially, remembering the previous position.|  
|[IRowsetImpl](../VS_visualcpp/IRowsetImpl-Class.md)|The constructor. Not called directly by user.|  
|[RefRows](../VS_visualcpp/IRowsetImpl--RefRows.md)|Called by [AddRefRows](../VS_visualcpp/IRowsetImpl--AddRefRows.md) and [ReleaseRows](../VS_visualcpp/IRowsetImpl--ReleaseRows.md). Not called directly by user.|  
|[ReleaseRows](../VS_visualcpp/IRowsetImpl--ReleaseRows.md)|Releases rows.|  
|[RestartPosition](../VS_visualcpp/IRowsetImpl--RestartPosition.md)|Repositions the next fetch position to its initial position; that is, its position when the rowset was first created.|  
|[SetDBStatus](../VS_visualcpp/IRowsetImpl--SetDBStatus.md)|Sets the status flags for the specified field.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_bCanFetchBack](../VS_visualcpp/IRowsetImpl--m_bCanFetchBack.md)|Indicates whether a provider supports backward fetching.|  
|[m_bCanScrollBack](../VS_visualcpp/IRowsetImpl--m_bCanScrollBack.md)|Indicates whether a provider can have its cursor scroll backwards.|  
|[m_bReset](../VS_visualcpp/IRowsetImpl--m_bReset.md)|Indicates whether a provider has reset its cursor position. This has special meaning when scrolling backwards or fetching backwards in [GetNextRows](../VS_visualcpp/IRowsetImpl--GetNextRows.md).|  
|[m_iRowset](../VS_visualcpp/IRowsetImpl--m_iRowset.md)|An index to the rowset, representing the cursor.|  
|[m_rgRowHandles](../VS_visualcpp/IRowsetImpl--m_rgRowHandles.md)|A list of row handles.|  
  
## Remarks  
 [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) is the base rowset interface.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)