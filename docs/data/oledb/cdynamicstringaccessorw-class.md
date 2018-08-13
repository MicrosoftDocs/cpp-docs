---
title: "CDynamicStringAccessorW Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDynamicStringAccessorW"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDynamicStringAccessorW class"]
ms.assetid: 9b7fd5cc-3a9b-4b57-b907-f1e35de2c98f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicStringAccessorW Class
Allows you to access a data source when you have no knowledge of the database schema (underlying structure).  
  
## Syntax

```cpp
typedef CDynamicStringAccessorT<WCHAR, DBTYPE_WSTR> CDynamicStringAccessorW;  
```  
  
## Remarks  
 They both request that the provider fetch all data accessed from the data store as string data, but `CDynamicStringAccessor` requests Unicode string data.  
  
 `CDynamicStringAccessorW` inherits `GetString` and `SetString` from `CDynamicStringAccessor`. When you use these methods in a `CDynamicStringAccessorW` object, ***BaseType*** is **WCHAR**.  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor Class](../../data/oledb/caccessor-class.md)   
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)   
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicStringAccessor Class](../../data/oledb/cdynamicstringaccessor-class.md)