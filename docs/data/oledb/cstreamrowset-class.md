---
title: "CStreamRowset Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::CStreamRowset<TAccessor>", "ATL::CStreamRowset", "CStreamRowset", "ATL.CStreamRowset<TAccessor>", "ATL.CStreamRowset", "CStreamRowset::CStreamRowset", "CStreamRowset.CStreamRowset", "ATL.CStreamRowset.CStreamRowset", "ATL::CStreamRowset::CStreamRowset", "CStreamRowset", "CStreamRowset<TAccessor>::CStreamRowset", "ATL::CStreamRowset<TAccessor>::CStreamRowset", "CStreamRowset<TAccessor>.Close", "ATL.CStreamRowset<TAccessor>.Close", "CStreamRowset::Close", "CStreamRowset<TAccessor>::Close", "ATL::CStreamRowset::Close", "ATL.CStreamRowset.Close", "ATL::CStreamRowset<TAccessor>::Close", "CStreamRowset.Close"]
dev_langs: ["C++"]
helpviewer_keywords: ["CStreamRowset class", "CStreamRowset class, constructor", "Close method"]
ms.assetid: a106e953-a38a-464e-8ea5-28963d9e4811
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CStreamRowset Class
Used in a `CCommand` or `CTable` declaration.  
  
## Syntax

```cpp
template <class TAccessor = CAccessorBase>  
class CStreamRowset  
```  
  
### Parameters  
 *TAccessor*  
 An accessor class.  

## Requirements  
 **Header:** atldbcli.h  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CStreamRowset](#cstreamrowset)|Constructor. Instantiates and initializes the `CStreamRowset` object.|  
|[Close](#close)|Releases the [ISequentialStream](https://msdn.microsoft.com/library/ms718035.aspx) interface pointer in the class.|  
  
## Remarks  
 Use `CStreamRowset` in your `CCommand` or `CTable` declaration, for example:  
  
 [!code-cpp[NVC_OLEDB_Consumer#11](../../data/oledb/codesnippet/cpp/cstreamrowset-class_1.cpp)]  
  
 or  
  
 [!code-cpp[NVC_OLEDB_Consumer#12](../../data/oledb/codesnippet/cpp/cstreamrowset-class_2.cpp)]  
  
 `ICommand::Execute` returns an `ISequentialStream` pointer, which is stored in `m_spStream`. You then use the `Read` method to retrieve the (Unicode string) data in XML format. For example:  
  
 [!code-cpp[NVC_OLEDB_Consumer#13](../../data/oledb/codesnippet/cpp/cstreamrowset-class_3.cpp)]  
  
 SQL Server 2000 performs the XML formatting, and will return all columns and all rows of the rowset as one XML string.  
  
> [!NOTE]
>  This feature works with SQL Server 2000 only.  
  
## <a name="cstreamrowset"></a> CStreamRowset::CStreamRowset
Instantiates and initializes the `CStreamRowset` object.  
  
### Syntax  
  
```cpp
CStreamRowset();  
```  

## <a name="close"></a> CStreamRowset::Close
Releases the [ISequentialStream](https://msdn.microsoft.com/library/ms718035.aspx) interface pointer in the class.  
  
### Syntax  
  
```cpp
void Close();   
```  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)