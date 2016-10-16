---
title: "CDynamicParameterAccessor::SetParam"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 9
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
# CDynamicParameterAccessor::SetParam
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
  
 [!code[NVC_OLEDB_Consumer#8](../data/codesnippet/CPP/cdynamicparameteraccessor--setparam_1.cpp)]  
  
 `pParamName`  
 [in] The parameter name.  
  
 `pData`  
 [in] The pointer to the memory containing the data to be written to the buffer.  
  
 *status*  
 [in] The `DBSTATUS` column status. For information on `DBSTATUS` values, see [Status](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in the *OLE DB Programmer's Reference*, or search for `DBSTATUS` in oledb.h.  
  
## Return Value  
 Returns **true** on success or **false** on failure.  
  
 Use `SetParam` to set nonstring parameter data in the buffer. Use [SetParamString](../data/cdynamicparameteraccessor--setparamstring.md) to set string parameter data in the buffer.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../data/cdynamicparameteraccessor-class.md)