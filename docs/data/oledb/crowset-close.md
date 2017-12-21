---
title: "CRowset::Close | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["CRowset::Close", "ATL.CRowset.Close", "CRowset<TAccessor>::Close", "CRowset<TAccessor>.Close", "ATL.CRowset<TAccessor>.Close", "ATL::CRowset::Close", "ATL::CRowset<TAccessor>::Close", "CRowset.Close"]
dev_langs: ["C++"]
helpviewer_keywords: ["Close method"]
ms.assetid: 966d779e-e148-4dc0-bbba-7cfb9fa6a16b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowset::Close
Releases rows and the current [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) interface.  
  
## Syntax  
  
```  
  
void Close( ) throw( );  
  
```  
  
## Remarks  
 This method releases all rows currently in the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)