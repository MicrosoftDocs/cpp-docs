---
title: "CDynamicAccessor::GetColumnName | Microsoft Docs"
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
  - "ATL::CDynamicAccessor::GetColumnName"
  - "GetColumnName"
  - "ATL.CDynamicAccessor.GetColumnName"
  - "CDynamicAccessor::GetColumnName"
  - "CDynamicAccessor.GetColumnName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetColumnName method"
ms.assetid: 96a7452a-1f5b-41e9-ab37-88dac026f961
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicAccessor::GetColumnName
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDynamicAccessor::GetColumnName](https://docs.microsoft.com/cpp/data/oledb/cdynamicaccessor-getcolumnname).  
  
  
Retrieves the name of the specified column.  
  
## Syntax  
  
```  
  
      LPOLESTR GetColumnName(   
   DBORDINAL nColumn    
) const throw( );  
```  
  
#### Parameters  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
## Return Value  
 The name of the specified column.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)

