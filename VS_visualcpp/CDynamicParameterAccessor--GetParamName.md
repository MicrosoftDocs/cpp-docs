---
title: "CDynamicParameterAccessor::GetParamName"
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
ms.assetid: 707c08ed-d3d0-4ce8-b23e-20b07202a3e2
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
# CDynamicParameterAccessor::GetParamName
Retrieves the name of the specified parameter.  
  
## Syntax  
  
```  
  
      LPOLESTR GetParamName(   
   DBORDINAL nParam    
) const throw( );  
```  
  
#### Parameters  
 `nParam`  
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../VS_visualcpp/CDynamicParameterAccessor--SetParam.md) for an example.  
  
## Return Value  
 The name of the specified parameter.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../VS_visualcpp/CDynamicParameterAccessor-Class.md)