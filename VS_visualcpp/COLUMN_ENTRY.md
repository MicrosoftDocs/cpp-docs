---
title: "COLUMN_ENTRY"
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
ms.assetid: a10aef29-6d70-49ec-b572-5b5c4abe1b46
caps.latest.revision: 9
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
# COLUMN_ENTRY
Represents a binding on the rowset to the specific column in the rowset.  
  
## Syntax  
  
```  
  
COLUMN_ENTRY(  
nOrdinal  
,   
data  
 )  
  
```  
  
#### Parameters  
 See [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in the *OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 [in] The column number.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Remarks  
 The `COLUMN_ENTRY` macro is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../VS_visualcpp/BEGIN_COLUMN_MAP.md) and [END_COLUMN_MAP](../VS_visualcpp/END_COLUMN_MAP.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../VS_visualcpp/BEGIN_ACCESSOR.md) and [END_ACCESSOR](../VS_visualcpp/END_ACCESSOR.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../VS_visualcpp/BEGIN_PARAM_MAP.md) and [END_PARAM_MAP](../VS_visualcpp/END_PARAM_MAP.md) macros.  
  
## Example  
 See the examples in the macro topics, [BEGIN_COLUMN_MAP](../VS_visualcpp/BEGIN_COLUMN_MAP.md) and [BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md)   
 [BEGIN_ACCESSOR](../VS_visualcpp/BEGIN_ACCESSOR.md)   
 [BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md)   
 [BEGIN_COLUMN_MAP](../VS_visualcpp/BEGIN_COLUMN_MAP.md)   
 [COLUMN_ENTRY_EX](../VS_visualcpp/COLUMN_ENTRY_EX.md)   
 [COLUMN_ENTRY_PS](../VS_visualcpp/COLUMN_ENTRY_PS.md)   
 [COLUMN_ENTRY_PS_LENGTH](../VS_visualcpp/COLUMN_ENTRY_PS_LENGTH.md)   
 [COLUMN_ENTRY_LENGTH](../VS_visualcpp/COLUMN_ENTRY_LENGTH.md)   
 [COLUMN_ENTRY_LENGTH_STATUS](../VS_visualcpp/COLUMN_ENTRY_LENGTH_STATUS.md)   
 [COLUMN_ENTRY_PS_LENGTH_STATUS](../VS_visualcpp/COLUMN_ENTRY_PS_LENGTH_STATUS.md)   
 [COLUMN_ENTRY_STATUS](../VS_visualcpp/COLUMN_ENTRY_STATUS.md)   
 [COLUMN_ENTRY_PS_STATUS](../VS_visualcpp/COLUMN_ENTRY_PS_STATUS.md)   
 [COLUMN_ENTRY_TYPE](../VS_visualcpp/COLUMN_ENTRY_TYPE.md)   
 [COLUMN_ENTRY_TYPE_SIZE](../VS_visualcpp/COLUMN_ENTRY_TYPE_SIZE.md)   
 [END_ACCESSOR](../VS_visualcpp/END_ACCESSOR.md)   
 [END_ACCESSOR_MAP](../VS_visualcpp/END_ACCESSOR_MAP.md)   
 [END_COLUMN_MAP](../VS_visualcpp/END_COLUMN_MAP.md)