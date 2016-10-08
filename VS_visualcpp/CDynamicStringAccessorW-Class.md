---
title: "CDynamicStringAccessorW Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9b7fd5cc-3a9b-4b57-b907-f1e35de2c98f
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CDynamicStringAccessorW Class
Allows you to access a data source when you have no knowledge of the database schema (underlying structure).  
  
## Syntax  
  
```  
typedef CDynamicStringAccessorT<WCHAR, DBTYPE_WSTR> CDynamicStringAccessorW;  
```  
  
## Remarks  
 They both request that the provider fetch all data accessed from the data store as string data, but `CDynamicStringAccessor` requests Unicode string data.  
  
 `CDynamicStringAccessorW` inherits **GetString** and `SetString` from `CDynamicStringAccessor`. When you use these methods in a `CDynamicStringAccessorW` object, ***BaseType*** is **WCHAR**.  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)   
 [CAccessor Class](../VS_visualcpp/CAccessor-Class.md)   
 [CDynamicParameterAccessor Class](../VS_visualcpp/CDynamicParameterAccessor-Class.md)   
 [CManualAccessor Class](../VS_visualcpp/CManualAccessor-Class.md)   
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)   
 [CDynamicStringAccessor Class](../VS_visualcpp/CDynamicStringAccessor-Class.md)