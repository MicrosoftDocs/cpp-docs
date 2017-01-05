---
title: "CRowsetImpl::GetColumnInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetColumnInfo"
  - "CRowsetImpl.GetColumnInfo"
  - "CRowsetImpl::GetColumnInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetColumnInfo method"
ms.assetid: 9ef76525-f996-4c6f-81b9-68eb260350ef
caps.latest.revision: 11
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
  
 [!code-cpp[NVC_OLEDB_Provider#1](../../data/oledb/codesnippet/cpp/crowsetimpl-getcolumninfo_1.h)]  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CRowsetImpl Class](../../data/oledb/crowsetimpl-class.md)