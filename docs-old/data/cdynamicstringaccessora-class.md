---
title: "CDynamicStringAccessorA Class"
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
  - "CDynamicStringAccessorA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicStringAccessorA class"
ms.assetid: ed0d9821-a655-41f1-a902-43c3042ac49c
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
# CDynamicStringAccessorA Class
Allows you to access a data source when you have no knowledge of the database schema (underlying structure).  
  
## Syntax  
  
```  
typedef CDynamicStringAccessorT<CHAR, DBTYPE_STR> CDynamicStringAccessorA;  
```  
  
## Remarks  
 They both request that the provider fetch all data accessed from the data store as string data, but `CDynamicStringAccessor` requests ANSI string data.  
  
 `CDynamicStringAccessorA` inherits **GetString** and `SetString` from `CDynamicStringAccessor`. When you use these methods in a `CDynamicStringAccessorA` object, ***BaseType*** is **CHAR**.  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)   
 [CAccessor Class](../data/caccessor-class.md)   
 [CDynamicParameterAccessor Class](../data/cdynamicparameteraccessor-class.md)   
 [CManualAccessor Class](../data/cmanualaccessor-class.md)   
 [CDynamicAccessor Class](../data/cdynamicaccessor-class.md)   
 [CDynamicStringAccessor Class](../data/cdynamicstringaccessor-class.md)