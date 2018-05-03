---
title: "CDynamicParameterAccessor::GetParamType | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDynamicParameterAccessor.GetParamType", "CDynamicParameterAccessor:GetParamType", "CDynamicParameterAccessor::GetParamType", "ATL.CDynamicParameterAccessor.GetParamType", "GetParamType", "ATL::CDynamicParameterAccessor::GetParamType"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetParamType method"]
ms.assetid: d9c46775-c2a6-4100-8b69-99f13c52958b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicParameterAccessor::GetParamType
Retrieves the data type of a specified parameter.  
  
## Syntax  
  
```
bool GetParamType(DBORDINAL nParam,  
  DBTYPE* pType) const throw();  
```  
  
#### Parameters  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 `pType`  
 [out] A pointer to the variable containing the data type of the specified parameter.  
  
## Return Value  
 Returns **true** on success or **false** on failure.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)