---
title: "COLUMN_NAME"
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
ms.assetid: a213b9a0-2148-4a08-9111-d9fa8fdec462
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
# COLUMN_NAME
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_ENTRY](../VS_visualcpp/COLUMN_ENTRY.md), except that this macro takes the column name instead of the column number.  
  
## Syntax  
  
```  
  
COLUMN_NAME(  
pszName  
,   
data  
 )  
  
```  
  
#### Parameters  
 `pszName`  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Remarks  
 The **COLUMN_NAME_\*** macros are used in the same places as [COLUMN_ENTRY](../VS_visualcpp/COLUMN_ENTRY.md):  
  
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
 [COLUMN_NAME_EX](../VS_visualcpp/COLUMN_NAME_EX.md)   
 [COLUMN_NAME_LENGTH](../VS_visualcpp/COLUMN_NAME_LENGTH.md)   
 [COLUMN_NAME_LENGTH_STATUS](../VS_visualcpp/COLUMN_NAME_LENGTH_STATUS.md)   
 [COLUMN_NAME_STATUS](../VS_visualcpp/COLUMN_NAME_STATUS.md)   
 [COLUMN_NAME_PS](../VS_visualcpp/COLUMN_NAME_PS.md)   
 [COLUMN_NAME_PS_LENGTH](../VS_visualcpp/COLUMN_NAME_PS_LENGTH.md)   
 [COLUMN_NAME_PS_STATUS](../VS_visualcpp/COLUMN_NAME_PS_STATUS.md)   
 [COLUMN_NAME_PS_LENGTH_STATUS](../VS_visualcpp/COLUMN_NAME_PS_LENGTH_STATUS.md)   
 [COLUMN_NAME_TYPE](../VS_visualcpp/COLUMN_NAME_TYPE.md)   
 [COLUMN_NAME_TYPE_PS](../VS_visualcpp/COLUMN_NAME_TYPE_PS.md)   
 [COLUMN_NAME_TYPE_SIZE](../VS_visualcpp/COLUMN_NAME_TYPE_SIZE.md)   
 [COLUMN_NAME_TYPE_STATUS](../VS_visualcpp/COLUMN_NAME_TYPE_STATUS.md)