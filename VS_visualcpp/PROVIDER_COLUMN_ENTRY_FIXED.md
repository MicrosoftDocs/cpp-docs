---
title: "PROVIDER_COLUMN_ENTRY_FIXED"
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
ms.assetid: 71f9c9aa-56a0-488b-96ba-5c72da9c71d0
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
# PROVIDER_COLUMN_ENTRY_FIXED
Represents a specific column supported by the provider.  
  
## Syntax  
  
```  
  
PROVIDER_COLUMN_ENTRY_FIXED(  
name  
, ordinal, dbtype, member )  
```  
  
#### Parameters  
 *name*  
 [in] The column name.  
  
 `ordinal`  
 [in] The column number. Unless the column is a Bookmark column, the column number must not be 0.  
  
 `dbtype`  
 [in] The data type in [DBTYPE](https://msdn.microsoft.com/en-us/library/ms711251.aspx).  
  
 `member`  
 [in] The member variable in `dataClass` that stores the data.  
  
## Remarks  
 Allows you to specify the column data type.  
  
## Example  
 See [BEGIN_PROVIDER_COLUMN_MAP](../VS_visualcpp/BEGIN_PROVIDER_COLUMN_MAP.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../VS_visualcpp/Macros-for-OLE-DB-Provider-Templates.md)   
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)   
 [Creating an OLE DB Provider](../VS_visualcpp/Creating-an-OLE-DB-Provider.md)