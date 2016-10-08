---
title: "CRowsetImpl::GetColumnInfo"
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
ms.assetid: 9ef76525-f996-4c6f-81b9-68eb260350ef
caps.latest.revision: 11
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
# CRowsetImpl::GetColumnInfo
Retrieves column information for a particular client request.  
  
## Syntax  
  
```  
  
      static ATLCOLUMNINFO* CRowsetBaseImpl::GetColumnInfo(  
   T* pv,  
   ULONG* pcCols   
);  
```  
  
#### Parameters  
 `pv`  
 [in] A pointer to the user's `CRowsetImpl` derived class.  
  
 `pcCols`  
 [in] A pointer (output) to the number of columns returned.  
  
## Return Value  
 A pointer to a static **ATLCOLUMNINFO** structure.  
  
## Remarks  
 This method is an advanced override.  
  
 This method is called by several base implementation classes to retrieve column information for a particular client request. Usually, this method would be called by `IColumnsInfoImpl`. If you override this method, you must place a version of the method in your `CRowsetImpl`-derived class. Because the method may be placed in a non-templatized class, you must change `pv` to the appropriate `CRowsetImpl`-derived class.  
  
 The following example demonstrates **GetColumnInfo's** usage. In this example, **CMyRowset** is a `CRowsetImpl`-derived class. In order to override `GetColumnInfo` for all instances of this class, place the following method in the **CMyRowset** class definition:  
  
 [!CODE [NVC_OLEDB_Provider#1](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Provider#1)]  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CRowsetImpl Class](../VS_visualcpp/CRowsetImpl-Class.md)