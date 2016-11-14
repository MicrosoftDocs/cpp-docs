---
title: "Determining Which Type of Accessor to Use | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rowsets [C++], data types"
  - "accessors [C++], types"
ms.assetid: 22483dd2-f4e0-4dcb-8e4d-cd43a9c1a3db
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
# Determining Which Type of Accessor to Use
You can determine data types on a rowset at compile time or at run time.  
  
 If you need to determine data types at compile time, use a static accessor (such as `CAccessor`). You can determine the data types manually or by using the ATL OLE DB Consumer Wizard.  
  
 If you need to determine the data types at run time, use a dynamic (`CDynamicAccessor` or its children) or manual accessor (`CManualAccessor`). In these cases, you can call `GetColumnInfo` on the rowset to return the column binding information, from which you can determine types.  
  
 The following table lists the types of accessors provided in the consumer templates. Each accessor has advantages and disadvantages. Depending on your situation, one accessor type should suit your needs.  
  
|Accessor class|Binding|Parameter|Comment|  
|--------------------|-------------|---------------|-------------|  
|`CAccessor`|Create a user record with `COLUMN_ENTRY` macros. The macros bind a data member in that record to the accessor. When the rowset is created, columns cannot be unbound.|Yes, by using a **PARAM_MAP** macro entry. Once bound, parameters cannot be unbound.|Fastest accessor because of small amount of code.|  
|`CDynamicAccessor`|Automatic.|No.|Useful if you do not know the type of data in a rowset.|  
|`CDynamicParameterAccessor`|Automatic, but can be [overridden](../../data/oledb/overriding-a-dynamic-accessor.md).|Yes, if the provider supports `ICommandWithParameters`. Parameters bound automatically.|Slower than `CDynamicAccessor` but useful for calling generic stored procedures.|  
|**CDynamicStringAccessor[A,W]**|Automatic.|No.|Retrieves data accessed from the data store as string data.|  
|`CManualAccessor`|Manual using `AddBindEntry`.|Manually using `AddParameterEntry`.|Very fast; parameters and columns bound only once. You determine the type of data to use. (See [DBVIEWER](http://msdn.microsoft.com/en-us/07620f99-c347-4d09-9ebc-2459e8049832) sample for an example.) Requires more code than `CDynamicAccessor` or `CAccessor`. It is more like calling OLE DB directly.|  
|`CXMLAccessor`|Automatic.|No.|Retrieves data accessed from the data store as string data and formats it as XML-tagged data.|  
  
## See Also  
 [Using Accessors](../../data/oledb/using-accessors.md)