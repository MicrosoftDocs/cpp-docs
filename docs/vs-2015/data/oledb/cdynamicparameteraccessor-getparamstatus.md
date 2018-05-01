---
title: "CDynamicParameterAccessor::GetParamStatus | Microsoft Docs"
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
  - "CDynamicParameterAccessor::GetParamStatus"
  - "CDynamicParameterAccessor.GetParamStatus"
  - "ATL.CDynamicParameterAccessor.GetParamStatus"
  - "ATL::CDynamicParameterAccessor::GetParamStatus"
  - "GetParamStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetParamStatus method"
ms.assetid: 9300225a-616c-4a7d-82d0-8c2ecd4d8185
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::GetParamStatus
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDynamicParameterAccessor::GetParamStatus](https://docs.microsoft.com/cpp/data/oledb/cdynamicparameteraccessor-getparamstatus).  
  
  
Retrieves the status of the specified parameter stored in the buffer.  
  
## Syntax  
  
```  
  
      bool GetParamStatus(  
   DBORDINAL nParam,  
   DBSTATUS* pStatus  
);  
DBSTATUS* GetParamStatus(   
   DBORDINAL nParam    
) const throw( );  
```  
  
#### Parameters  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 `pStatus`  
 [out] A pointer to the variable containing the `DBSTATUS` status of the specified parameter. For information on `DBSTATUS` values, see [Status](https://msdn.microsoft.com/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for `DBSTATUS` in oledb.h.  
  
## Remarks  
 The first override returns **true** on success or **false** on failure. The second override points to the memory containing the status of the specified parameter.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)

