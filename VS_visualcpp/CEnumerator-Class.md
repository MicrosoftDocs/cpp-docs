---
title: "CEnumerator Class"
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
ms.assetid: 25805f1b-26e3-402f-af83-1b5fe5ddebf7
caps.latest.revision: 14
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
# CEnumerator Class
Uses an OLE DB enumerator object, which exposes the [ISourcesRowset](https://msdn.microsoft.com/en-us/library/ms715969.aspx) interface to return a rowset describing all data sources and enumerators.  
  
## Syntax  
  
```  
class CEnumerator :   
   public CAccessorRowset< CAccessor <CEnumeratorAccessor >>  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Find](../VS_visualcpp/CEnumerator--Find.md)|Searches through available providers (data sources) looking for one with the specified name.|  
|[GetMoniker](../VS_visualcpp/CEnumerator--GetMoniker.md)|Retrieves the `IMoniker` interface for the current record.|  
|[Open](../VS_visualcpp/CEnumerator--Open.md)|Opens the enumerator.|  
  
## Remarks  
 You can retrieve the **ISourcesRowset** data indirectly from this class.  
  
## Requirements  
 **Header:**atldbcli.h  
  
## See Also  
 [DBViewer](../VS_visualcpp/Visual-C---Samples.md)   
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)