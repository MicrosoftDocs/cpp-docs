---
title: "CDynamicParameterAccessor::SetParam | Microsoft Docs"
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
  - "ATL::CDynamicParameterAccessor::SetParam"
  - "ATL::CDynamicParameterAccessor::SetParam<ctype>"
  - "CDynamicParameterAccessor.SetParam"
  - "ATL.CDynamicParameterAccessor.SetParam"
  - "SetParam"
  - "CDynamicParameterAccessor:SetParam"
  - "CDynamicParameterAccessor::SetParam<ctype>"
  - "CDynamicParameterAccessor::SetParam"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetParam method"
ms.assetid: e2349220-545c-46ad-90da-9113ac52551a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicParameterAccessor::SetParam
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDynamicParameterAccessor::SetParam](https://docs.microsoft.com/cpp/data/oledb/cdynamicparameteraccessor-setparam).  
  
  
Sets the parameter buffer using the specified (non-string) data.  
  
## Syntax  
  
```  
  
      template < class   
      ctype >  
bool SetParam(  
   DBORDINAL nParam,  
   const ctype* pData,  
   DBSTATUS status = DBSTATUS_S_OK  
) throw( );  
template < class ctype >  
bool SetParam(  
   TCHAR* pParamName,  
   const ctype* pData,  
   DBSTATUS status = DBSTATUS_S_OK  
) throw( );  
```  
  
#### Parameters  
 `ctype`  
 A templated parameter that is the data type.  
  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. For example:  
  
 [!code-cpp[NVC_OLEDB_Consumer#8](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#8)]  
  
 `pParamName`  
 [in] The parameter name.  
  
 `pData`  
 [in] The pointer to the memory containing the data to be written to the buffer.  
  
 *status*  
 [in] The `DBSTATUS` column status. For information on `DBSTATUS` values, see [Status](https://msdn.microsoft.com/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for `DBSTATUS` in oledb.h.  
  
## Return Value  
 Returns **true** on success or **false** on failure.  
  
 Use `SetParam` to set nonstring parameter data in the buffer. Use [SetParamString](../../data/oledb/cdynamicparameteraccessor-setparamstring.md) to set string parameter data in the buffer.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)

