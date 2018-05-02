---
title: "CUtlProps Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CUtlProps"]
dev_langs: ["C++"]
helpviewer_keywords: ["CUtlProps class"]
ms.assetid: bb525178-765c-4e23-a110-c0fd70c05437
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CUtlProps Class
Implements properties for a variety of OLE DB property interfaces (for example, `IDBProperties`, `IDBProperties`, and `IRowsetInfo`).  
  
## Syntax

```cpp
template < class T >  
class ATL_NO_VTABLE CUtlProps : public CUtlPropsBase  
```  
  
#### Parameters  
 `T`  
 The class that contains the `BEGIN_PROPSET_MAP`.  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetPropValue](../../data/oledb/cutlprops-getpropvalue.md)|Gets a property from a property set.|  
|[IsValidValue](../../data/oledb/cutlprops-isvalidvalue.md)|Used to validate a value before setting a property.|  
|[OnInterfaceRequested](../../data/oledb/cutlprops-oninterfacerequested.md)|Handles requests for an optional interface when a consumer calls a method on an object creation interface.|  
|[OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md)|Called after setting a property to handle chained properties.|  
|[SetPropValue](../../data/oledb/cutlprops-setpropvalue.md)|Sets a property in a property set.|  
  
## Remarks  
 Most of this class is an implementation detail.  
  
 `CUtlProps` contains two members for setting properties internally: [GetPropValue](../../data/oledb/cutlprops-getpropvalue.md) and [SetPropValue](../../data/oledb/cutlprops-setpropvalue.md).  
  
 For more information on the macros used in a property set map, see [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) and [END_PROPSET_MAP](../../data/oledb/end-propset-map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)