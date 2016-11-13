---
title: "Data Member Attributes | Microsoft Docs"
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
  - "attributes [C++], reference topics"
  - "data members [C++], attributes"
  - "data members [C++]"
ms.assetid: 95b2397d-1daf-4ae4-8cd0-06956d005b13
caps.latest.revision: 9
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
# Data Member Attributes
The following attributes apply to the data members in a class, coclass, or interface.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[db_accessor](../windows/db-accessor.md)|Groups **db_column** attributes that participate in `IAccessor`-based binding.|  
|[db_column](../windows/db-column.md)|Binds a specified column to the rowset.|  
|[db_command](../windows/db-command.md)|Creates an OLE DB command.|  
|[db_param](../windows/db-param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|  
|[db_source](../windows/db-source.md)|Creates a connection to a data source.|  
|[db_table](../windows/db-table.md)|Opens an OLE DB table.|  
|[defaultbind](../windows/defaultbind.md)|Indicates the single, bindable property that best represents the object.|  
|[displaybind](../windows/displaybind.md)|Indicates a property that should be displayed to the user as bindable.|  
|[id](../windows/id.md)|Specifies a DISPID for a member function (either a property or a method, in an interface or dispinterface).|  
|[range](../windows/range-cpp.md)|Specifies a range of allowable values for arguments or fields whose values are set at run time.|  
|[rdx](../windows/rdx.md)|Creates a registry key or modifies an existing registry key.|  
|[readonly](../windows/readonly-cpp.md)|Prohibits assignment to a data member.|  
|[requestedit](../windows/requestedit.md)|Indicates that the property supports the **OnRequestEdit** notification.|  
  
## See Also  
 [Attributes by Usage](../windows/attributes-by-usage.md)