---
title: "COLUMN_ENTRY_PS_LENGTH"
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
ms.assetid: d63ab895-a4df-4183-ac09-cf2311222408
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
# COLUMN_ENTRY_PS_LENGTH
Represents a binding on the rowset to the specific column in the database.  
  
## Syntax  
  
```  
  
COLUMN_ENTRY_PS_LENGTH(  
nOrdinal  
,   
nPrecision  
,   
nScale  
,   
data  
,   
length  
 )  
  
```  
  
#### Parameters  
 See [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in the *OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 [in] The column number, starting with one. Bookmark corresponds to column zero.  
  
 `nPrecision`  
 [in] The maximum precision of the column you want to bind.  
  
 `nScale`  
 [in] The scale of the column you want to bind.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [in] The variable to be bound to the column length.  
  
## Remarks  
 Allows you to specify the precision and scale of the column you want to bind. This macro supports the *length* variable. It is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../VS_visualcpp/BEGIN_COLUMN_MAP.md) and [END_COLUMN_MAP](../VS_visualcpp/END_COLUMN_MAP.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../VS_visualcpp/BEGIN_ACCESSOR.md) and [END_ACCESSOR](../VS_visualcpp/END_ACCESSOR.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../VS_visualcpp/BEGIN_PARAM_MAP.md) and [END_PARAM_MAP](../VS_visualcpp/END_PARAM_MAP.md) macros.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md)   
 [BEGIN_ACCESSOR](../VS_visualcpp/BEGIN_ACCESSOR.md)   
 [BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md)   
 [BEGIN_COLUMN_MAP](../VS_visualcpp/BEGIN_COLUMN_MAP.md)   
 [COLUMN_ENTRY](../VS_visualcpp/COLUMN_ENTRY.md)   
 [COLUMN_ENTRY_EX](../VS_visualcpp/COLUMN_ENTRY_EX.md)   
 [COLUMN_ENTRY_LENGTH](../VS_visualcpp/COLUMN_ENTRY_LENGTH.md)   
 [COLUMN_ENTRY_PS](../VS_visualcpp/COLUMN_ENTRY_PS.md)   
 [COLUMN_ENTRY_LENGTH_STATUS](../VS_visualcpp/COLUMN_ENTRY_LENGTH_STATUS.md)   
 [COLUMN_ENTRY_PS_LENGTH_STATUS](../VS_visualcpp/COLUMN_ENTRY_PS_LENGTH_STATUS.md)   
 [COLUMN_ENTRY_STATUS](../VS_visualcpp/COLUMN_ENTRY_STATUS.md)   
 [COLUMN_ENTRY_PS_STATUS](../VS_visualcpp/COLUMN_ENTRY_PS_STATUS.md)   
 [END_ACCESSOR](../VS_visualcpp/END_ACCESSOR.md)   
 [END_ACCESSOR_MAP](../VS_visualcpp/END_ACCESSOR_MAP.md)   
 [END_COLUMN_MAP](../VS_visualcpp/END_COLUMN_MAP.md)