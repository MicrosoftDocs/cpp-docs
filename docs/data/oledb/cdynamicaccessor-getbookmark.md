---
title: "CDynamicAccessor::GetBookmark | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CDynamicAccessor.GetBookmark", "GetBookmark", "CDynamicAccessor::GetBookmark", "ATL.CDynamicAccessor.GetBookmark", "ATL::CDynamicAccessor::GetBookmark"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetBookmark method"]
ms.assetid: 6d0a2970-0c62-4a34-bac7-149d8e990f81
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicAccessor::GetBookmark
Retrieves the bookmark for the current row.  
  
## Syntax  
  
```cpp
HRESULT GetBookmark(CBookmark< >* pBookmark) const throw();  
```  
  
#### Parameters  
 `pBookmark`  
 [out] A pointer to the [CBookmark](../../data/oledb/cbookmark-class.md) object.  
  
## Return Value  
 One of the standard `HRESULT` values.  
  
## Remarks  
 You need to set **DBPROP_IRowsetLocate** to `VARIANT_TRUE` to retrieve a bookmark.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)