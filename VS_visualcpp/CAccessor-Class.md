---
title: "CAccessor Class"
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
ms.assetid: b2ba959f-a686-46f3-8837-176248aef748
caps.latest.revision: 8
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
# CAccessor Class
Represents one of the accessor types.  
  
## Syntax  
  
```  
  
      template < class   
      T  
       >  
class CAccessor : public CAccessorBase, public T  
```  
  
#### Parameters  
 `T`  
 The user record class.  
  
## Remarks  
 It is used when a record is statically bound to a data source. The record contains the buffer. This class supports multiple accessors on a rowset.  
  
 Use this accessor type when you know the structure and the type of the database.  
  
 If your accessor contains fields that point to memory (such as a `BSTR` or interface) that must be freed, call the member function [CAccessorRowset::FreeRecordMemory](../VS_visualcpp/CAccessorRowset--FreeRecordMemory.md) before the next record is read.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)