---
title: "BEGIN_ACCESSOR_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BEGIN_ACCESSOR_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_ACCESSOR_MAP macro"
ms.assetid: e6d6e3a4-62fa-4e49-8c53-caf8c9d20091
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# BEGIN_ACCESSOR_MAP
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [BEGIN_ACCESSOR_MAP](https://docs.microsoft.com/cpp/data/oledb/begin-accessor-map).  
  
  
Marks the beginning of the accessor map entries.  
  
## Syntax  
  
```  
  
BEGIN_ACCESSOR_MAP(  
x  
,   
num  
 )  
  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record class.  
  
 *num*  
 [in] The number of accessors in this accessor map.  
  
## Remarks  
 In the case of multiple accessors on a rowset, you need to specify `BEGIN_ACCESSOR_MAP` at the beginning and use the `BEGIN_ACCESSOR` macro for each individual accessor. The `BEGIN_ACCESSOR` macro is completed with the `END_ACCESSOR` macro. The accessor map is completed with the `END_ACCESSOR_MAP` macro.  
  
 If you have only one accessor in the user record, use the macro [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md).  
  
## Example  
  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [END_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END_ACCESSOR_MAP](../../data/oledb/end-accessor-map.md)

