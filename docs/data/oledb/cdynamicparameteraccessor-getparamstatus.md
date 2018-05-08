---
title: "CDynamicParameterAccessor::GetParamStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDynamicParameterAccessor::GetParamStatus", "CDynamicParameterAccessor.GetParamStatus", "ATL.CDynamicParameterAccessor.GetParamStatus", "ATL::CDynamicParameterAccessor::GetParamStatus", "GetParamStatus"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetParamStatus method"]
ms.assetid: 9300225a-616c-4a7d-82d0-8c2ecd4d8185
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicParameterAccessor::GetParamStatus
Retrieves the status of the specified parameter stored in the buffer.  
  
## Syntax  
  
```
bool GetParamStatus(DBORDINAL nParam,  
  DBSTATUS* pStatus);  

DBSTATUS* GetParamStatus(DBORDINAL nParam) const throw();  
```  
  
#### Parameters  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 `pStatus`  
 [out] A pointer to the variable containing the `DBSTATUS` status of the specified parameter. For information on `DBSTATUS` values, see [Status](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for `DBSTATUS` in oledb.h.  
  
## Remarks  
 The first override returns **true** on success or **false** on failure. The second override points to the memory containing the status of the specified parameter.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)