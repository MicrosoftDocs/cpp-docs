---
title: "CAccessor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.CAccessor<T>", "ATL::CAccessor", "CAccessor", "ATL::CAccessor<T>", "ATL.CAccessor"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAccessor class"]
ms.assetid: b2ba959f-a686-46f3-8837-176248aef748
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CAccessor Class

Represents one of the accessor types.  
  
## Syntax  
  
```cpp
template <class T>  
class CAccessor : public CAccessorBase, public T  
```  
  
### Parameters  

*T*<br/>
The user record class.  
  
## Remarks  

It is used when a record is statically bound to a data source. The record contains the buffer. This class supports multiple accessors on a rowset.  
  
Use this accessor type when you know the structure and the type of the database.  
  
If your accessor contains fields that point to memory (such as a `BSTR` or interface) that must be freed, call the member function [CAccessorRowset::FreeRecordMemory](../../data/oledb/caccessorrowset-freerecordmemory.md) before the next record is read.  
  
## Requirements  

**Header:** atldbcli.h  
  
## See Also  

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)