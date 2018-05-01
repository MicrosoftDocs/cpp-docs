---
title: "CRowset::CRowset | Microsoft Docs"
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
  - "CRowset<TAccessor>::CRowset"
  - "CRowset.CRowset"
  - "ATL::CRowset::CRowset"
  - "ATL::CRowset<TAccessor>::CRowset"
  - "ATL.CRowset.CRowset"
  - "CRowset"
  - "CRowset<TAccessor>.CRowset"
  - "CRowset::CRowset"
  - "ATL.CRowset<TAccessor>.CRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRowset class, constructor"
ms.assetid: 1c6f72e2-f4f4-48dc-957e-038ae8914ba7
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::CRowset
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CRowset::CRowset](https://docs.microsoft.com/cpp/data/oledb/crowset-crowset).  
  
  
Creates a new `CRowset` object and (optionally) associates it with an [IRowset](https://msdn.microsoft.com/library/ms720986.aspx) interface supplied as a parameter.  
  
## Syntax  
  
```  
  
      CRowset( );   
CRowset(  
   IRowset* pRowset   
);  
```  
  
#### Parameters  
 `pRowset`  
 [in] A pointer to an `IRowset` interface to be associated with this class.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)

