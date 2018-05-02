---
title: "CDynamicAccessor::GetColumnName | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::CDynamicAccessor::GetColumnName", "GetColumnName", "ATL.CDynamicAccessor.GetColumnName", "CDynamicAccessor::GetColumnName", "CDynamicAccessor.GetColumnName"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetColumnName method"]
ms.assetid: 96a7452a-1f5b-41e9-ab37-88dac026f961
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicAccessor::GetColumnName
Retrieves the name of the specified column.  
  
## Syntax  
  
```cpp
      LPOLESTR GetColumnName(DBORDINAL nColumn) const throw();  
```  
  
#### Parameters  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
## Return Value  
 The name of the specified column.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)