---
title: "BEGIN_PROPSET_MAP"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "BEGIN_PROPSET_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_PROPSET_MAP macro"
ms.assetid: c3a30618-6025-4d49-8688-a171294d2e93
caps.latest.revision: 9
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
# BEGIN_PROPSET_MAP
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
  
-   [Data Source Objects](https://msdn.microsoft.com/en-us/library/ms721278.aspx)  
  
-   [Session Objects](https://msdn.microsoft.com/en-us/library/ms711572.aspx)  
  
-   [Commands](https://msdn.microsoft.com/en-us/library/ms724608.aspx)  
  
## Example  
 Here is a sample property set map:  
  
 [!code[NVC_OLEDB_Provider#3](../data/codesnippet/CPP/begin_propset_map_1.h)]  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../data/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../data/creating-an-ole-db-provider.md)