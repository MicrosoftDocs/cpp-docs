---
title: "BEGIN_PROVIDER_COLUMN_MAP"
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
ms.assetid: 506b8c0f-6be9-4c97-ba81-c4b7f7d428fa
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
# BEGIN_PROVIDER_COLUMN_MAP
Marks the beginning of the provider column map entries.  
  
## Syntax  
  
```  
  
BEGIN_PROVIDER_COLUMN_MAP(  
theClass   
)  
  
```  
  
#### Parameters  
 `theClass`  
 [in] The name of the class this map belongs to.  
  
## Example  
 Here is a sample provider column map:  
  
 [!CODE [NVC_OLEDB_Provider#4](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Provider#4)]  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../VS_visualcpp/Macros-for-OLE-DB-Provider-Templates.md)   
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)   
 [Creating an OLE DB Provider](../VS_visualcpp/Creating-an-OLE-DB-Provider.md)