---
title: "CDynamicAccessor::GetValue"
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
ms.assetid: 553f44af-68bc-4cb6-8774-e0940003fa90
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
# CDynamicAccessor::GetValue
Retrieves the data for a specified column.  
  
## Syntax  
  
```  
  
      void* GetValue(   
   DBORDINAL nColumn    
) const throw( );  
void* GetValue(  
   const CHAR* pColumnName   
) const throw( );  
void* GetValue(  
   const WCHAR* pColumnName   
) const throw( );  
template < class ctype >  
bool GetValue(  
   DBORDINAL nColumn,  
   ctype* pData   
) const throw( );  
template < class ctype >  
bool GetValue(  
   const CHAR* pColumnName,  
   ctype* pData   
) const throw( );  
template < class ctype >  
bool GetValue(  
   const WCHAR* pColumnName,  
   ctype* pData   
) const throw( );  
```  
  
#### Parameters  
 `ctype`  
 [in] A templated parameter that handles any data type except string types (**CHAR\***, **WCHAR\***), which require special handling. `GetValue` uses the appropriate data type based on what you specify here.  
  
 `nColumn`  
 [in] The column number. Column numbers start with 1. A value of 0 refers to the bookmark column, if any.  
  
 `pColumnName`  
 [in] The column name.  
  
 `pData`  
 [out] The pointer to the contents of the specified column.  
  
## Return Value  
 If you want to pass string data, use the nontemplated versions of `GetValue`. The nontemplated versions of this method return **void\***, which points to the part of the buffer that contains the specified column data. Returns **NULL** if the column is not found.  
  
 For all other data types, it is simpler to use the templated versions of `GetValue`. The templated versions return **true** on success or **false** on failure.  
  
## Remarks  
 Use the nontemplated versions to return columns that contain strings and the templated versions for columns that contain other data types.  
  
 In debug mode, you will get an assertion if the size of `pData` is unequal to the size of the column to which it points.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)