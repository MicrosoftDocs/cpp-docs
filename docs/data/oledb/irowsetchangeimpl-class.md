---
title: "IRowsetChangeImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IRowsetChangeImpl"
  - "IRowsetChangeImpl"
  - "ATL.IRowsetChangeImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "providers, updatable"
  - "updatable providers, immediate update"
  - "IRowsetChangeImpl class"
ms.assetid: 1e9fee15-ed9e-4387-af8f-215569beca6c
caps.latest.revision: 11
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
# IRowsetChangeImpl Class
The OLE DB Templates implementation of the [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx) interface in the OLE DB specification.  
  
## Syntax  
  
```  
template <  
   class T,   
   class Storage,   
   class BaseInterface = IRowsetChange,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap < RowClass::KeyType, RowClass* >   
>  
class ATL_NO_VTABLE IRowsetChangeImpl : public BaseInterface  
```  
  
#### Parameters  
 `T`  
 A class derived from `IRowsetChangeImpl`.  
  
 `Storage`  
 The user record.  
  
 `BaseInterface`  
 The base class for the interface, such as `IRowsetChange`.  
  
 `RowClass`  
 The storage unit for the row handle.  
  
 `MapClass`  
 The storage unit for all row handles held by the provider.  
  
## Members  
  
### Interface Methods (Used with IRowsetChange)  
  
|||  
|-|-|  
|[DeleteRows](../../data/oledb/irowsetchangeimpl-deleterows.md)|Deletes rows from the rowset.|  
|[InsertRow](../../data/oledb/irowsetchangeimpl-insertrow.md)|Inserts a row into the rowset.|  
|[SetData](../../data/oledb/irowsetchangeimpl-setdata.md)|Sets data values in one or more columns.|  
  
### Implementation Method (Callback)  
  
|||  
|-|-|  
|[FlushData](../../data/oledb/irowsetchangeimpl-flushdata.md)|Overidden by provider to commit data to its store.|  
  
## Remarks  
 This interface is responsible for immediate write operations to a data store. "Immediate" means that when the end user (the person using the consumer) makes any changes, those changes are immediately transmitted to the data store (and cannot be undone).  
  
 `IRowsetChangeImpl` implements the OLE DB `IRowsetChange` interface, which enables updating of values of columns in existing rows, deleting rows, and inserting new rows.  
  
 The OLE DB Templates implementation supports all the base methods (`SetData`, `InsertRow`, and `DeleteRows`).  
  
> [!IMPORTANT]
>  It is strongly recommended that you read the following documentation BEFORE attempting to implement your provider:  
  
-   [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)  
  
-   Chapter 6 of the *OLE DB Programmer's Reference*  
  
-   Also see how the `RUpdateRowset` class is used in the UpdatePV sample  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)