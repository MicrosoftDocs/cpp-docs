---
title: "CBookmark Class"
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
|[CBookmark](../data/cbookmark-class.md)|The constructor|  
|[GetBuffer](../data/cbookmark--getbuffer.md)|Retrieves the pointer to the buffer.|  
|[GetSize](../data/cbookmark--getsize.md)|Retrieves the size of the buffer in bytes.|  
|[SetBookmark](../data/cbookmark--setbookmark.md)|Sets the bookmark value.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../data/cbookmark--operator-=.md)|Assigns one `CBookmark` class to another.|  
  
## Remarks  
 **CBookmark\<0>** is a template specialization of `CBookmark`; its buffer is dynamically created at run time.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)