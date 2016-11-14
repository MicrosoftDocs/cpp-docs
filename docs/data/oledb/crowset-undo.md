---
title: "CRowset::Undo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset.Undo"
  - "ATL::CRowset<TAccessor>::Undo"
  - "CRowset<TAccessor>::Undo"
  - "ATL.CRowset.Undo"
  - "ATL.CRowset<TAccessor>.Undo"
  - "CRowset<TAccessor>.Undo"
  - "ATL::CRowset::Undo"
  - "CRowset::Undo"
  - "Undo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Undo method"
ms.assetid: 1ccd70e2-3931-41c4-893e-a05d0e295410
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
# CRowset::Undo
Undoes any changes made to a row since the last fetch or [Update](../../data/oledb/crowset-update.md).  
  
## Syntax  
  
```  
  
      HRESULT Undo(   
   DBCOUNTITEM* pcRows = NULL,   
   HROW* phRow = NULL,   
   DBROWSTATUS* pStatus = NULL    
) throw( );  
```  
  
#### Parameters  
 `pcRows`  
 [out] A pointer to the location where **Undo** returns the number of rows it attempted to undo if required.  
  
 `phRow`  
 [out] A pointer to the location where **Undo** returns an array of handles to all rows it attempted to undo if required.  
  
 `pStatus`  
 [out] A pointer to the location where **Undo** returns the row status value. No status is returned if `pStatus` is null.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetUpdate** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx)