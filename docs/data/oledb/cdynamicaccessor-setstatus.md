---
title: "CDynamicAccessor::SetStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDynamicAccessor::SetStatus", "ATL::CDynamicAccessor::SetStatus", "CDynamicAccessor.SetStatus", "ATL.CDynamicAccessor.SetStatus"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetStatus method"]
ms.assetid: 6db82694-e87d-4bf8-a7e3-5765cf6abff9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicAccessor::SetStatus
Sets the status of the specified column.  
  
## Syntax  
  
```
bool SetStatus(DBORDINAL nColumn,   
   DBSTATUS status)throw();  

bool SetStatus(const CHAR* pColumnName,   
   DBSTATUS status) throw();  

bool SetStatus(const WCHAR* pColumnName,   
   DBSTATUS status) throw();  
```  
  
#### Parameters  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
 *status*  
 [in] The column status. See [DBSTATUS](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in the *OLE DB Programmer's Reference* for more information.  
  
 `pColumnName`  
 [in] A pointer to a character string containing the column name.  
  
## Return Value  
 Returns **true** if the specified column status is set successfully. Otherwise, this function returns **false**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicAccessor::GetStatus](../../data/oledb/cdynamicaccessor-getstatus.md)