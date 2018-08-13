---
title: "CDynamicStringAccessorA Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDynamicStringAccessorA"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDynamicStringAccessorA class"]
ms.assetid: ed0d9821-a655-41f1-a902-43c3042ac49c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicStringAccessorA Class
Allows you to access a data source when you have no knowledge of the database schema (underlying structure).  
  
## Syntax

```cpp
typedef CDynamicStringAccessorT<CHAR, DBTYPE_STR> CDynamicStringAccessorA;  
```  
  
## Remarks  
 They both request that the provider fetch all data accessed from the data store as string data, but `CDynamicStringAccessor` requests ANSI string data.  
  
 `CDynamicStringAccessorA` inherits `GetString` and `SetString` from `CDynamicStringAccessor`. When you use these methods in a `CDynamicStringAccessorA` object, ***BaseType*** is **CHAR**.  
  
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