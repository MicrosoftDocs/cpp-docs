---
title: "CDynamicAccessor::GetColumnType | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.CDynamicAccessor.GetColumnType", "CDynamicAccessor::GetColumnType", "GetColumnType", "CDynamicAccessor.GetColumnType", "ATL::CDynamicAccessor::GetColumnType"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetColumnType method"]
ms.assetid: ac96a2e9-6049-4eb5-9718-9f5f5446b74e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicAccessor::GetColumnType
Retrieves the data type of a specified column.  
  
## Syntax  
  
```
bool GetColumnType(DBORDINAL nColumn,   
  DBTYPE* pType) const throw();  
```  
  
#### Parameters  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
 `pType`  
 [out] A pointer to the data type of the specified column.  
  
## Return Value  
 Returns **true** on success or **false** on failure.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)   
 [DBTYPE](https://msdn.microsoft.com/en-us/library/ms711251.aspx)