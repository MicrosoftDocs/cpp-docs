---
title: "BLOB_NAME"
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
ms.assetid: 757acd0d-946d-447d-937e-94ecd700ba38
caps.latest.revision: 7
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
# BLOB_NAME
Used with `BEGIN_COLUMN_MAP` and `END_COLUMN_MAP` to bind a binary large object ([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)). Similar to [BLOB_ENTRY](../VS_visualcpp/BLOB_ENTRY.md), except that this macro takes a column name instead of a column number.  
  
## Syntax  
  
```  
  
BLOB_NAME(  
pszName  
,   
IID  
,   
flags  
,   
data )  
```  
  
#### Parameters  
 `pszName`  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 *IID*  
 [in] Interface GUID, such as **IDD_ISequentialStream**, used to retrieve the BLOB.  
  
 `flags`  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, **STGM_READ**).  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Example  
 See [How Can I Retrieve a BLOB?](../VS_visualcpp/Retrieving-a-BLOB.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md)   
 [BEGIN_COLUMN_MAP](../VS_visualcpp/BEGIN_COLUMN_MAP.md)   
 [END_COLUMN_MAP](../VS_visualcpp/END_COLUMN_MAP.md)   
 [COLUMN_ENTRY](../VS_visualcpp/COLUMN_ENTRY.md)   
 [BLOB_NAME_LENGTH](../VS_visualcpp/BLOB_NAME_LENGTH.md)   
 [BLOB_NAME_LENGTH_STATUS](../VS_visualcpp/BLOB_NAME_LENGTH_STATUS.md)   
 [BLOB_NAME_STATUS](../VS_visualcpp/BLOB_NAME_STATUS.md)