---
title: "CDynamicParameterAccessor::SetParamStatus | Microsoft Docs"
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
  - "CDynamicParameterAccessor::SetParamStatus"
  - "ATL.CDynamicParameterAccessor.SetParamStatus"
  - "ATL::CDynamicParameterAccessor::SetParamStatus"
  - "CDynamicParameterAccessor.SetParamStatus"
  - "SetParamStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetParamStatus method"
ms.assetid: 0c2271f6-457d-46ca-88b7-4590aadb20d7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::SetParamStatus
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDynamicParameterAccessor::SetParamStatus](https://docs.microsoft.com/cpp/data/oledb/cdynamicparameteraccessor-setparamstatus).  
  
  
Sets the status of the specified parameter stored in the buffer.  
  
## Syntax  
  
```  
  
      bool SetParamStatus(  
   DBORDINAL nParam,  
   DBSTATUS status  
);  
```  
  
#### Parameters  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
 *status*  
 [in] The `DBSTATUS` status of the specified parameter. For information on `DBSTATUS` values, see [Status](https://msdn.microsoft.com/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for `DBSTATUS` in oledb.h.  
  
## Remarks  
 Returns **true** on success or **false** on failure.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)

