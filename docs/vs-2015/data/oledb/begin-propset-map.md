---
title: "BEGIN_PROPSET_MAP | Microsoft Docs"
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
  - "BEGIN_PROPSET_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_PROPSET_MAP macro"
ms.assetid: c3a30618-6025-4d49-8688-a171294d2e93
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# BEGIN_PROPSET_MAP
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [BEGIN_PROPSET_MAP](https://docs.microsoft.com/cpp/data/oledb/begin-propset-map).  
  
  
Marks the beginning of the property set map entries.  
  
## Syntax  
  
```  
  
BEGIN_PROPSET_MAP(  
Class   
)  
  
```  
  
#### Parameters  
 *Class*  
 [in] The class in which this property set is specified. A property set can be specified in the following OLE DB objects:  
  
-   [Data Source Objects](https://msdn.microsoft.com/library/ms721278.aspx)  
  
-   [Session Objects](https://msdn.microsoft.com/library/ms711572.aspx)  
  
-   [Commands](https://msdn.microsoft.com/library/ms724608.aspx)  
  
## Example  
 Here is a sample property set map:  
  
 [!code-cpp[NVC_OLEDB_Provider#3](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Provider/Cpp/MyProviderDS.h#3)]  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)

