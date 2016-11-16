---
title: "COLUMN_NAME_TYPE_PS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COLUMN_NAME_TYPE_PS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_NAME_TYPE_PS macro"
ms.assetid: 99df7e33-47fc-48ec-ad03-5fd03a190aa9
caps.latest.revision: 7
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
# COLUMN_NAME_TYPE_PS
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_NAME](../../data/oledb/column-name.md), except that this macro also takes data type, precision, and scale.  
  
## Syntax  
  
```  
  
COLUMN_NAME_TYPE_PS(  
pszName  
,   
wType  
,   
nPrecision  
,   
nScale  
,   
data  
 )  
  
```  
  
#### Parameters  
 `pszName`  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 `wType`  
 [in] The data type.  
  
 `nPrecision`  
 [in] The maximum precision to use when getting data and `wType` is `DBTYPE_NUMERIC`. Otherwise, this parameter is ignored.  
  
 `nScale`  
 [in] The scale to use when getting data and `wType` is `DBTYPE_NUMERIC` or **DBTYPE_DECIMAL**.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Remarks  
 See [COLUMN_NAME](../../data/oledb/column-name.md) for information on where the **COLUMN_NAME_\*** macros are used.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [COLUMN_NAME](../../data/oledb/column-name.md)   
 [COLUMN_NAME_EX](../../data/oledb/column-name-ex.md)   
 [COLUMN_NAME_LENGTH](../../data/oledb/column-name-length.md)   
 [COLUMN_NAME_LENGTH_STATUS](../../data/oledb/column-name-length-status.md)   
 [COLUMN_NAME_STATUS](../../data/oledb/column-name-status.md)   
 [COLUMN_NAME_PS](../../data/oledb/column-name-ps.md)   
 [COLUMN_NAME_PS_LENGTH](../../data/oledb/column-name-ps-length.md)   
 [COLUMN_NAME_PS_STATUS](../../data/oledb/column-name-ps-status.md)   
 [COLUMN_NAME_PS_LENGTH_STATUS](../../data/oledb/column-name-ps-length-status.md)   
 [COLUMN_NAME_TYPE](../../data/oledb/column-name-type.md)   
 [COLUMN_NAME_TYPE_SIZE](../../data/oledb/column-name-type-size.md)   
 [COLUMN_NAME_TYPE_STATUS](../../data/oledb/column-name-type-status.md)