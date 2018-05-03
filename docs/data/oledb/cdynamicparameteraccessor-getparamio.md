---
title: "CDynamicParameterAccessor::GetParamIO | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetParamIO", "CDynamicParameterAccessor::GetParamIO", "ATL.CDynamicParameterAccessor.GetParamIO", "CDynamicParameterAccessor.GetParamIO", "ATL::CDynamicParameterAccessor::GetParamIO"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetParamIO method"]
ms.assetid: 9c485e39-c67e-4df7-a707-c773019c4d1e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicParameterAccessor::GetParamIO
Determines whether the specified parameter is an input or output parameter.  
  
## Syntax  
  
```
bool GetParamIO(DBORDINAL nParam,   
   DBPARAMIO* pParamIO) const throw();  
```  
  
#### Parameters  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *pParamIO*  
 A pointer to the variable containing the **DBPARAMIO** type (input or output) of the specified parameter. It is defined as follows:  
  
```  
typedef DWORD DBPARAMIO;  
  
enum DBPARAMIOENUM {  
    DBPARAMIO_NOTPARAM   = 0,  
    DBPARAMIO_INPUT      = 0x1,  
    DBPARAMIO_OUTPUT     = 0x2  
};  
```  
  
## Return Value  
 Returns **true** on success or **false** on failure.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)