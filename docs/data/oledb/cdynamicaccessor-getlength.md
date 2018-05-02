---
title: "CDynamicAccessor::GetLength | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDynamicAccessor.GetLength", "ATL.CDynamicAccessor.GetLength", "CDynamicAccessor::GetLength", "ATL::CDynamicAccessor::GetLength"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetLength method"]
ms.assetid: 3ae8983b-b267-4cf9-bfc0-3e191f79e646
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicAccessor::GetLength
Retrieves the length of the specified column.  
  
## Syntax  
  
```
bool GetLength(DBORDINAL nColumn,   
  DBLENGTH* pLength) const throw();  

bool GetLength(const CHAR* pColumnName,   
   DBLENGTH* pLength) const throw();  

bool GetLength(const WCHAR* pColumnName,   
   DBLENGTH* pLength) const throw();  
```  
  
#### Parameters  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
 `pColumnName`  
 [in] A pointer to a character string containing the column name.  
  
 `pLength`  
 [out] A pointer to the integer containing the length of the column in bytes.  
  
## Return Value  
 Returns **true** if the specified column is found. Otherwise, this function returns **false**.  
  
## Remarks  
 The first override takes the column number, and the second and third overrides take the column name in ANSI or Unicode format, respectively.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicAccessor::SetLength](../../data/oledb/cdynamicaccessor-setlength.md)