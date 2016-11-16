---
title: "CDynamicParameterAccessor::SetParamStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CDynamicParameterAccessor::SetParamStatus
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
 [in] The `DBSTATUS` status of the specified parameter. For information on `DBSTATUS` values, see [Status](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for `DBSTATUS` in oledb.h.  
  
## Remarks  
 Returns **true** on success or **false** on failure.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)