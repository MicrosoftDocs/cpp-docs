---
title: "CDynamicParameterAccessor::GetParamLength | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDynamicParameterAccessor::GetParamLength"
  - "ATL.CDynamicParameterAccessor.GetParamLength"
  - "CDynamicParameterAccessor.GetParamLength"
  - "CDynamicParameterAccessor::GetParamLength"
  - "GetParamLength"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetParamLength method"
ms.assetid: 04d76931-911a-4915-9c2c-ad585a9f3854
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
  - "data-storage"
---
# CDynamicParameterAccessor::GetParamLength
Retrieves the length of the specified parameter stored in the buffer.  
  
## Syntax  
  
```  
  
      bool GetParamLength(  
   DBORDINAL nParam,  
   DBLENGTH* pLength  
);  
DBLENGTH* GetParamLength(   
   DBORDINAL nParam    
) const throw( );  
```  
  
#### Parameters  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 `pLength`  
 [out] A pointer to the variable containing the length in bytes of the specified parameter.  
  
## Remarks  
 The first override returns **true** on success or **false** on failure. The second override points to the memory containing the length of the parameter.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)