---
title: "CRowset::GetData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset<TAccessor>::GetData"
  - "ATL::CRowset<TAccessor>::GetData"
  - "ATL::CRowset::GetData"
  - "ATL.CRowset<TAccessor>.GetData"
  - "CRowset<TAccessor>.GetData"
  - "CRowset::GetData"
  - "CRowset.GetData"
  - "ATL.CRowset.GetData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetData method [OLE DB]"
ms.assetid: 1e0347b5-3e24-4ff8-a790-839616c1522f
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
# CRowset::GetData
Retrieves data from the rowset's copy of the row.  
  
## Syntax  
  
```  
  
      HRESULT GetData( ) throw( );   
HRESULT GetData(   
   int nAccessor    
) throw( );  
```  
  
#### Parameters  
 `nAccessor`  
 [in] The (zero-offset) index number of the accessor to use for accessing the data.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 If you specify an accessor that is not an autoaccessor in [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md), use this method to explicitly get the data by passing the accessor number.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)