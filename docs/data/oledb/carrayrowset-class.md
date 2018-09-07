---
title: "CArrayRowset Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL.CArrayRowset<TAccessor>", "ATL.CArrayRowset", "CArrayRowset", "ATL::CArrayRowset", "ATL::CArrayRowset<TAccessor>", "ATL::CArrayRowset::CArrayRowset", "CArrayRowset.CArrayRowset", "ATL.CArrayRowset.CArrayRowset", "ATL.CArrayRowset<TAccessor>.CArrayRowset", "CArrayRowset::CArrayRowset", "CArrayRowset", "CArrayRowset<TAccessor>::CArrayRowset", "ATL::CArrayRowset<TAccessor>::CArrayRowset", "CArrayRowset<TAccessor>.Snapshot", "ATL::CArrayRowset::Snapshot", "Snapshot", "CArrayRowset<TAccessor>::Snapshot", "ATL.CArrayRowset.Snapshot", "ATL.CArrayRowset<TAccessor>.Snapshot", "ATL::CArrayRowset<TAccessor>::Snapshot", "CArrayRowset::Snapshot", "CArrayRowset.Snapshot", "CArrayRowset::operator[]", "CArrayRowset.operator[]", "ATL::CArrayRowset::m_nRowsRead", "ATL::CArrayRowset<TAccessor>::m_nRowsRead", "CArrayRowset<TAccessor>::m_nRowsRead", "ATL.CArrayRowset<TAccessor>.m_nRowsRead", "CArrayRowset.m_nRowsRead", "m_nRowsRead", "ATL.CArrayRowset.m_nRowsRead", "CArrayRowset::m_nRowsRead"]
dev_langs: ["C++"]
helpviewer_keywords: ["CArrayRowset class", "CArrayRowset class, constructor", "Snapshot method", "operator [], arrays", "[] operator", "operator[], arrays", "m_nRowsRead"]
ms.assetid: 511427e1-73ca-4fd8-9ba1-ae9463557cb6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CArrayRowset Class
Accesses elements of a rowset using array syntax.  
  
## Syntax

```cpp
template < class TAccessor >  
class CArrayRowset : 
   public CVirtualBuffer <TAccessor>, 
   protected CBulkRowset <TAccessor>  
```  
  
### Parameters  
 *TAccessor*  
 The type of accessor class that you want the rowset to use.  

## Requirements  
 **Header:** atldbcli.h  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CArrayRowset](#carrayrowset)|Constructor.|  
|[Snapshot](#snapshot)|Reads the entire rowset into memory.|  
  
### Operators  
  
|||  
|-|-|  
|[Operator&#91;&#93;](#operator)|Accesses an element of the rowset.|  
  
### Data Members  
  
|||  
|-|-|  
|[CArrayRowset::m_nRowsRead](#nrowsread)|The number of rows already read.|  
  
## <a name="carrayrowset"></a> CArrayRowset::CArrayRowset
Creates a new `CArrayRowset` object.  
  
### Syntax  
  
```cpp
CArrayRowset(int nMax = 100000);  
```  
  
#### Parameters  
 *nMax*  
 [in] Maximum number of rows in the rowset. 

## <a name="snapshot"></a> CArrayRowset::Snapshot
Reads the entire rowset into memory, creating an image or snapshot of it.  
  
### Syntax  
  
```cpp
HRESULT Snapshot() throw();  
```  

## <a name="operator"></a> CArrayRowset::operator
Provides array-like syntax for accessing a row in the rowset.  
  
### Syntax  
  
```cpp
TAccessor & operator[](int nrow);  
```  
  
#### Parameters  
 *TAccessor*  
 A templated parameter that specifies the type of accessor stored in the rowset.  
  
 *nRow*  
 [in] Number of the row (array element) you want to access.  
  
### Return Value  
 The contents of the requested row.  
  
### Remarks  
 If *nRow* exceeds the number of rows in the rowset, an exception is thrown.  

## <a name="nrowsread"></a> CArrayRowset::m_nRowsRead
Contains the number of rows in the rowset that have already been read.  
  
### Syntax  
  
```cpp
ULONG m_nRowsRead;  
```  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CRowset Class](../../data/oledb/crowset-class.md)