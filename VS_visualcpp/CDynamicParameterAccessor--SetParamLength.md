---
title: "CDynamicParameterAccessor::SetParamLength"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d8e0bbfe-e1ae-4a8f-9567-584fbb0c8385
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CDynamicParameterAccessor::SetParamLength
Sets the length of the specified parameter stored in the buffer.  
  
## Syntax  
  
```  
  
      bool SetParamLength(  
   DBORDINAL nParam,  
   DBLENGTH length  
);  
```  
  
#### Parameters  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../VS_visualcpp/CDynamicParameterAccessor--SetParam.md) for an example.  
  
 *length*  
 [in] The length in bytes of the specified parameter.  
  
## Remarks  
 Returns **true** on success or **false** on failure.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../VS_visualcpp/CDynamicParameterAccessor-Class.md)