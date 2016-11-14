---
title: "CRowset::GetRowStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset.GetRowStatus"
  - "ATL.CRowset<TAccessor>.GetRowStatus"
  - "ATL::CRowset<TAccessor>::GetRowStatus"
  - "CRowset::GetRowStatus"
  - "ATL::CRowset::GetRowStatus"
  - "CRowset<TAccessor>::GetRowStatus"
  - "ATL.CRowset.GetRowStatus"
  - "CRowset<TAccessor>.GetRowStatus"
  - "GetRowStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetRowStatus method"
ms.assetid: 7a29a235-cb7e-40c1-92ce-5441751febee
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
# CRowset::GetRowStatus
Returns the status of all rows.  
  
## Syntax  
  
```  
  
      HRESULT GetRowStatus(   
   DBPENDINGSTATUS* pStatus    
) const throw( );  
```  
  
#### Parameters  
 `pStatus`  
 [out] A pointer to a location where `GetRowStatus` returns the status value. See DBPENDINGSTATUS in the OLE DB Programmer's Reference.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method requires the optional interface `IRowsetUpdate`, which might not be supported on all providers; if this is the case, the method returns **E_NOINTERFACE**. You must also set **DBPROP_IRowsetUpdate** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::GetRowStatus](https://msdn.microsoft.com/en-us/library/ms724377.aspx)