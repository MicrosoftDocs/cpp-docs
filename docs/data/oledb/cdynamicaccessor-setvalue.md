---
title: "CDynamicAccessor::SetValue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.CDynamicAccessor.SetValue", "ATL::CDynamicAccessor::SetValue", "ATL::CDynamicAccessor::SetValue<ctype>", "CDynamicAccessor.SetValue", "ATL.CDynamicAccessor.SetValue<ctype>", "CDynamicAccessor::SetValue", "CDynamicAccessor::SetValue<ctype>"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetValue method"]
ms.assetid: ecc18850-96e5-4845-abe5-ab34ad467238
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicAccessor::SetValue
Stores data to a specified column.  
  
## Syntax  
  
```cpp  
template <class ctype>
bool SetValue(   
   DBORDINAL nColumn,   
   constctype& data) throw( );  

template <class ctype>    
bool SetValue(   
   const CHAR * pColumnName,   
   const ctype& data) throw( );  

template <class ctype>   
bool SetValue(  
   const WCHAR *pColumnName,  
   const ctype& data) throw( );  
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