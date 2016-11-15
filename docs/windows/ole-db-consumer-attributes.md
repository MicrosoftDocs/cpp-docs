---
title: "OLE DB Consumer Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
# OLE DB Consumer Attributes
The OLE DB consumer attributes inject code, based on the [OLE DB Consumer Templates](../data/oledb/ole-db-consumer-templates-reference.md), to create a working OLE DB consumer that performs tasks such as opening tables, executing commands, and accessing data.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[db_accessor](../windows/db-accessor.md)|Binds columns in a rowset and binds them to the corresponding accessor maps.|  
|[db_column](../windows/db-column.md)|Binds a specified column to the rowset.|  
|[db_command](../windows/db-command.md)|Executes an OLE DB command.|  
|[db_param](../windows/db-param.md)|Associates the specified member variable with an input or output parameter.|  
|[db_source](../windows/db-source.md)|Creates and encapsulates a connection, through a provider, to a data source.|  
|[db_table](../windows/db-table.md)|Opens an OLE DB table.|  
  
## See Also  
 [Attributes by Group](../windows/attributes-by-group.md)