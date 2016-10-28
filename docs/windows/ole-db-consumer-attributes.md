---
title: "OLE DB Consumer Attributes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributes [C++], database"
  - "attributes [C++], data access"
  - "databases [C++], attributes"
  - "OLE DB consumers [C++], attributes"
  - "database attributes [C++]"
  - "attributes [C++], OLE DB consumer"
ms.assetid: 017b591f-8f9a-42b4-84d5-cc42a21ab0cc
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
# OLE DB Consumer Attributes
The OLE DB consumer attributes inject code, based on the [OLE DB Consumer Templates](../data/ole-db-consumer-templates-reference.md), to create a working OLE DB consumer that performs tasks such as opening tables, executing commands, and accessing data.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[db_accessor](../windows/db_accessor.md)|Binds columns in a rowset and binds them to the corresponding accessor maps.|  
|[db_column](../windows/db_column.md)|Binds a specified column to the rowset.|  
|[db_command](../windows/db_command.md)|Executes an OLE DB command.|  
|[db_param](../windows/db_param.md)|Associates the specified member variable with an input or output parameter.|  
|[db_source](../windows/db_source.md)|Creates and encapsulates a connection, through a provider, to a data source.|  
|[db_table](../windows/db_table.md)|Opens an OLE DB table.|  
  
## See Also  
 [Attributes by Group](../windows/attributes-by-group.md)