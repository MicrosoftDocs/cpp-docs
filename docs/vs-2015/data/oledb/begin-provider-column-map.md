---
title: "BEGIN_PROVIDER_COLUMN_MAP | Microsoft Docs"
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
  - "BEGIN_PROVIDER_COLUMN_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_PROVIDER_COLUMN_MAP macro"
ms.assetid: 506b8c0f-6be9-4c97-ba81-c4b7f7d428fa
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# BEGIN_PROVIDER_COLUMN_MAP
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [BEGIN_PROVIDER_COLUMN_MAP](https://docs.microsoft.com/cpp/data/oledb/begin-provider-column-map).  
  
  
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
  
 [!code-cpp[NVC_OLEDB_Provider#4](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Provider/Cpp/MyProviderRS.h#4)]  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)

