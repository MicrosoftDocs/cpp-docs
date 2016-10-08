---
title: "CRowset::UpdateAll"
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
ms.assetid: e5b26c0a-40fc-4c91-a293-5084951788e6
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
 Transmits any pending changes made to all rows since those rows were last fetched or updated using [Update](../VS_visualcpp/CRowset--Update.md) or `UpdateAll`. `UpdateAll` will update every row that has been modified, regardless of whether you still have the handle for them (see `pphRow`) or not.  
  
 For example, if you used **Insert** to insert five rows in a rowset, you could either call **Update** five times or call `UpdateAll` once to update them all.  
  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetUpdate** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)   
 [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx)   
 [CRowset::SetData](../VS_visualcpp/CRowset--SetData.md)   
 [CRowset::Update](../VS_visualcpp/CRowset--Update.md)