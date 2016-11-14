---
title: "CBookmark Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CBookmark"
  - "ATL::CBookmark<nSize>"
  - "CBookmark"
  - "ATL.CBookmark<nSize>"
  - "ATL::CBookmark"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBookmark class"
ms.assetid: bc942f95-6f93-41d9-bb6e-bcdae4ae0b7a
caps.latest.revision: 10
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
# CBookmark Class
Holds a bookmark value in its buffer.  
  
## Syntax  
  
```  
template < DBLENGTH nSize = 0 >  
class CBookmark : public CBookmarkBase  
template < >  
class CBookmark< 0 > : public CBookmarkBase  
```  
  
#### Parameters  
 `nSize`  
 The size of the bookmark buffer in bytes. When `nSize` is zero, the bookmark buffer will be dynamically created at run time.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CBookmark](../../data/oledb/cbookmark-class.md)|The constructor|  
|[GetBuffer](../../data/oledb/cbookmark-getbuffer.md)|Retrieves the pointer to the buffer.|  
|[GetSize](../../data/oledb/cbookmark-getsize.md)|Retrieves the size of the buffer in bytes.|  
|[SetBookmark](../../data/oledb/cbookmark-setbookmark.md)|Sets the bookmark value.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../../data/oledb/cbookmark-operator-equal.md)|Assigns one `CBookmark` class to another.|  
  
## Remarks  
 **CBookmark\<0>** is a template specialization of `CBookmark`; its buffer is dynamically created at run time.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)