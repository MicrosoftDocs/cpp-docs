---
title: "CDynamicParameterAccessor::GetParamName | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicParameterAccessor::GetParamName"
  - "ATL.CDynamicParameterAccessor.GetParamName"
  - "GetParamName"
  - "CDynamicParameterAccessor.GetParamName"
  - "ATL::CDynamicParameterAccessor::GetParamName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetParamName method"
ms.assetid: 707c08ed-d3d0-4ce8-b23e-20b07202a3e2
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
 [in] The parameter number (offset from 1). Parameter 0 is reserved for return values. The parameter number is the index of the parameter based on its order in the SQL or stored procedure call. See [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) for an example.  
  
## Return Value  
 The name of the specified parameter.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)