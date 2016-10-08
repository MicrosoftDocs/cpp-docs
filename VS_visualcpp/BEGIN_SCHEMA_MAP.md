---
title: "BEGIN_SCHEMA_MAP"
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
ms.assetid: 4e751023-35bc-4efd-9018-5448dd1ad751
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
# BEGIN_SCHEMA_MAP
Denotes the beginning of a schema map.  
  
## Syntax  
  
```  
  
      BEGIN_SCHEMA_MAP(  
   SchemaClass   
);  
```  
  
#### Parameters  
 *SchemaClass*  
 The class that contains the MAP. Typically this will be the session class.  
  
## Remarks  
 See [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in the Windows SDK for more information about schema rowsets.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../VS_visualcpp/Macros-for-OLE-DB-Provider-Templates.md)   
 [SCHEMA_ENTRY](../VS_visualcpp/SCHEMA_ENTRY.md)   
 [END_SCHEMA_MAP](../VS_visualcpp/END_SCHEMA_MAP.md)   
 [IDBSchemaRowsetImpl Class](../VS_visualcpp/IDBSchemaRowsetImpl-Class.md)