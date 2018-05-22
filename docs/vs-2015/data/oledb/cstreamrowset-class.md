---
title: "CStreamRowset Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CStreamRowset<TAccessor>"
  - "ATL::CStreamRowset"
  - "CStreamRowset"
  - "ATL.CStreamRowset<TAccessor>"
  - "ATL.CStreamRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStreamRowset class"
ms.assetid: a106e953-a38a-464e-8ea5-28963d9e4811
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CStreamRowset Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CStreamRowset Class](https://docs.microsoft.com/cpp/data/oledb/cstreamrowset-class).  
  
  
Used in a `CCommand` or `CTable` declaration.  
  
## Syntax  
  
```  
template <class TAccessor = CAccessorBase>  
class CStreamRowset  
```  
  
#### Parameters  
 `TAccessor`  
 An accessor class.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CStreamRowset](../../data/oledb/cstreamrowset-cstreamrowset.md)|Constructor. Instantiates and initializes the `CStreamRowset` object.|  
|[Close](../../data/oledb/cstreamrowset-close.md)|Releases the [ISequentialStream](https://msdn.microsoft.com/library/ms718035.aspx) interface pointer in the class.|  
  
## Remarks  
 Use `CStreamRowset` in your `CCommand` or `CTable` declaration, for example:  
  
 [!code-cpp[NVC_OLEDB_Consumer#11](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#11)]  
  
 or  
  
 [!code-cpp[NVC_OLEDB_Consumer#12](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#12)]  
  
 `ICommand::Execute` returns an `ISequentialStream` pointer, which is stored in `m_spStream`. You then use the **Read** method to retrieve the (Unicode string) data in XML format. For example:  
  
 [!code-cpp[NVC_OLEDB_Consumer#13](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#13)]  
  
 SQL Server 2000 performs the XML formatting, and will return all columns and all rows of the rowset as one XML string.  
  
> [!NOTE]
>  This feature works with SQL Server 2000 only.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)

