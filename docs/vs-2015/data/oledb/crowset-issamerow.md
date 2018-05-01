---
title: "CRowset::IsSameRow | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset::IsSameRow"
  - "CRowset.IsSameRow"
  - "IsSameRow"
  - "ATL::CRowset::IsSameRow"
  - "ATL.CRowset.IsSameRow"
  - "CRowset<TAccessor>::IsSameRow"
  - "ATL.CRowset<TAccessor>.IsSameRow"
  - "CRowset<TAccessor>.IsSameRow"
  - "ATL::CRowset<TAccessor>::IsSameRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsSameRow method"
ms.assetid: 53cba847-52f5-4dd9-973f-bbe7454c425c
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::IsSameRow
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CRowset::IsSameRow](https://docs.microsoft.com/cpp/data/oledb/crowset-issamerow).  
  
  
Compares the specified row with the current row.  
  
## Syntax  
  
```  
  
      HRESULT IsSameRow(   
   HROW hRow    
) const throw( );  
```  
  
#### Parameters  
 `hRow`  
 [in] A handle to the row to compare to the current row.  
  
## Return Value  
 A standard `HRESULT`. `S_OK` indicates the rows are the same. For other values, see [IRowsetIndentity::IsSameRow](https://msdn.microsoft.com/library/ms719629.aspx) in the *OLE DB Programmer's Reference* in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)

