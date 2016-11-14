---
title: "CRowset::UpdateAll | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset::UpdateAll"
  - "ATL.CRowset.UpdateAll"
  - "CRowset<TAccessor>.UpdateAll"
  - "ATL.CRowset<TAccessor>.UpdateAll"
  - "UpdateAll"
  - "CRowset.UpdateAll"
  - "ATL::CRowset<TAccessor>::UpdateAll"
  - "CRowset<TAccessor>::UpdateAll"
  - "ATL::CRowset::UpdateAll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UpdateAll method"
ms.assetid: e5b26c0a-40fc-4c91-a293-5084951788e6
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
# CRowset::UpdateAll
Transmits any pending changes made to all rows since the last fetch or **Update** call on it.  
  
## Syntax  
  
```  
  
      HRESULT UpdateAll(   
   DBCOUNTITEM* pcRows = NULL,   
   HROW** pphRow = NULL,   
   DBROWSTATUS** ppStatus = NULL    
) throw( );  
```  
  
#### Parameters  
 `pcRows`  
 [out] A pointer to the location where `UpdateAll` returns the number of rows it attempted to update, if required.  
  
 `pphRow`  
 [out] A pointer to memory in which `UpdateAll` returns the handle of the row it attempted to update. No handle is returned if `pphRow` is null.  
  
 `ppStatus`  
 [out] A pointer to the location where **Update** returns the row status value. No status is returned if `ppStatus` is null.  
  
## Remarks  
 Transmits any pending changes made to all rows since those rows were last fetched or updated using [Update](../../data/oledb/crowset-update.md) or `UpdateAll`. `UpdateAll` will update every row that has been modified, regardless of whether you still have the handle for them (see `pphRow`) or not.  
  
 For example, if you used **Insert** to insert five rows in a rowset, you could either call **Update** five times or call `UpdateAll` once to update them all.  
  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetUpdate** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx)   
 [CRowset::SetData](../../data/oledb/crowset-setdata.md)   
 [CRowset::Update](../../data/oledb/crowset-update.md)