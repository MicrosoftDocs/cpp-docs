---
title: "CDynamicAccessor::SetValue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CDynamicAccessor.SetValue"
  - "ATL::CDynamicAccessor::SetValue"
  - "ATL::CDynamicAccessor::SetValue<ctype>"
  - "CDynamicAccessor.SetValue"
  - "ATL.CDynamicAccessor.SetValue<ctype>"
  - "CDynamicAccessor::SetValue"
  - "CDynamicAccessor::SetValue<ctype>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetValue method"
ms.assetid: ecc18850-96e5-4845-abe5-ab34ad467238
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
# CDynamicAccessor::SetValue
Stores data to a specified column.  
  
## Syntax  
  
```  
  
      template < class ctype >    
bool SetValue(   
   DBORDINAL nColumn,   
   const ctype& data    
) throw( );  
template < class ctype >    
bool SetValue(   
   const CHAR * pColumnName,   
   const ctype& data    
) throw( );  
template <class ctype>   
bool SetValue(  
   const WCHAR *pColumnName,  
   const ctype& data   
) throw( );  
```  
  
#### Parameters  
 `ctype`  
 [in] A templated parameter that handles any data type except string types (**CHAR\***, **WCHAR\***), which require special handling. `GetValue` uses the appropriate data type based on what you specify here.  
  
 `pColumnName`  
 [in] A pointer to a character string containing the column name.  
  
 `data`  
 [in] The pointer to the memory containing the data.  
  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
## Return Value  
 If you want to set string data, use the nontemplated versions of `GetValue`. The nontemplated versions of this method return **void\***, which points to the part of the buffer that contains the specified column data. Returns **NULL** if the column is not found.  
  
 For all other data types, it is simpler to use the templated versions of `GetValue`. The templated versions return **true** on success or **false** on failure.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)