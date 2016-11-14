---
title: "CDynamicAccessor::GetStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDynamicAccessor::GetStatus"
  - "CDynamicAccessor.GetStatus"
  - "ATL.CDynamicAccessor.GetStatus"
  - "CDynamicAccessor::GetStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetStatus method"
ms.assetid: 8f1aba69-5c2c-4ca7-ad84-7b4b27995eb8
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
# CDynamicAccessor::GetStatus
Retrieves the status of the specified column.  
  
## Syntax  
  
```  
  
      bool GetStatus(   
   DBORDINAL nColumn,   
   DBSTATUS* pStatus    
) const throw( );  
bool GetStatus(  
   const CHAR* pColumnName,  
   DBSTATUS* pStatus   
) const throw( );  
bool GetStatus(  
   const WCHAR* pColumnName,  
   DBSTATUS* pStatus   
) const throw( );  
```  
  
#### Parameters  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
 `pColumnName`  
 [in] A pointer to a character string containing the column name.  
  
 `pStatus`  
 [out] A pointer to the variable containing the column status. See [DBSTATUS](https://msdn.microsoft.com/en-us/library/ms722617.aspx) in the *OLE DB Programmer's Reference* for more information.  
  
## Return Value  
 Returns **true** if the specified column is found. Otherwise, this function returns **false**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicAccessor::SetStatus](../../data/oledb/cdynamicaccessor-setstatus.md)