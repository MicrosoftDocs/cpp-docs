---
title: "PROVIDER_COLUMN_ENTRY_LENGTH"
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
  - "PROVIDER_COLUMN_ENTRY_LENGTH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROVIDER_COLUMN_ENTRY_LENGTH macro"
ms.assetid: b4a67246-c049-4622-bb65-242cc8cae4be
caps.latest.revision: 7
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
# PROVIDER_COLUMN_ENTRY_LENGTH
Represents a specific column supported by the provider.  
  
## Syntax  
  
```  
  
PROVIDER_COLUMN_ENTRY_LENGTH(  
name  
, ordinal, size, member )  
```  
  
#### Parameters  
 *name*  
 [in] The column name.  
  
 `ordinal`  
 [in] The column number. Unless the column is a Bookmark column, the column number must not be 0.  
  
 `size`  
 [in] The column size in bytes.  
  
 `member`  
 [in] The member variable in `dataClass` that stores the column data.  
  
## Remarks  
 Allows you to specify the column size.  
  
## Example  
 See [BEGIN_PROVIDER_COLUMN_MAP](../data/begin_provider_column_map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../data/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../data/creating-an-ole-db-provider.md)