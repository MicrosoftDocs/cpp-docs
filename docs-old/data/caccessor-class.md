---
title: "CAccessor Class"
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
  - "ATL.CAccessor<T>"
  - "ATL::CAccessor"
  - "CAccessor"
  - "ATL::CAccessor<T>"
  - "ATL.CAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccessor class"
ms.assetid: b2ba959f-a686-46f3-8837-176248aef748
caps.latest.revision: 8
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
  
 If your accessor contains fields that point to memory (such as a `BSTR` or interface) that must be freed, call the member function [CAccessorRowset::FreeRecordMemory](../data/caccessorrowset--freerecordmemory.md) before the next record is read.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)