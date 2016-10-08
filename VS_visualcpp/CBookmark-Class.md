---
title: "CBookmark Class"
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
ms.assetid: bc942f95-6f93-41d9-bb6e-bcdae4ae0b7a
caps.latest.revision: 10
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
|[CBookmark](../VS_visualcpp/CBookmark-Class.md)|The constructor|  
|[GetBuffer](../VS_visualcpp/CBookmark--GetBuffer.md)|Retrieves the pointer to the buffer.|  
|[GetSize](../VS_visualcpp/CBookmark--GetSize.md)|Retrieves the size of the buffer in bytes.|  
|[SetBookmark](../VS_visualcpp/CBookmark--SetBookmark.md)|Sets the bookmark value.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../VS_visualcpp/CBookmark--operator-=.md)|Assigns one `CBookmark` class to another.|  
  
## Remarks  
 **CBookmark<0>** is a template specialization of `CBookmark`; its buffer is dynamically created at run time.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)